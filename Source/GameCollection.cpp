//==============================================================================
//
// Title: GameCollection.h
// Name: Matthew Jacques
// Description: Handles the collections of games, manages table and DB
//
//==============================================================================


#include <QDebug>                       // qWarning()
#include <QCoreApplication>             // Exe path
#include <QCheckBox>                    // Checkbox table widget casting
#include <stdlib.h>                     // srand
#include <time.h>                       // Time seed for srand
#include <QHeaderView>                  // Resize table columns
#include <QAction>                      // Filter actions
#include <QElapsedTimer>                // Debug timing
#include "GameCollection.h"             // Header file
#include "QtWrappers/TableWidget.h"     // Table widget in main form reference
#include "Utilities.h"                  // Data manipulation utilities


GameCollection::GameCollection(TableWidget* a_GameTable,
                               QAction* a_ShowNotPlayed,
                               QAction* a_ShowPlayed,
                               QAction* a_ShowComplete,
                               QAction* a_ShowAbandoned,
                               QAction* a_ShowPC,
                               QAction* a_ShowPS4,
                               QAction* a_ShowPS3,
                               QAction* a_ShowPSVita,
                               QAction* a_ShowOwned,
                               QAction* a_ShowNotOwned)
: m_GameTable(a_GameTable)
, m_NextGame(nullptr)
, m_GameDB(QCoreApplication::applicationDirPath() + "/Collection.games")
, m_ShowNotPlayed(a_ShowNotPlayed)
, m_ShowPlayed(a_ShowPlayed)
, m_ShowComplete(a_ShowComplete)
, m_ShowAbandoned(a_ShowAbandoned)
, m_ShowPC(a_ShowPC)
, m_ShowPS4(a_ShowPS4)
, m_ShowPS3(a_ShowPS3)
, m_ShowPSVita(a_ShowPSVita)
, m_ShowOwned(a_ShowOwned)
, m_ShowNotOwned(a_ShowNotOwned)
{ // Set references for members
  
  if (!m_GameTable)
  {
    qWarning() << "GameCollection created with null table widget";
  }

  QFileInfo dbCheck(m_GameDB.GetDBPath().absoluteFilePath());
  if (!dbCheck.exists())
  { // No database found, we should probably create one
    m_GameDB.Create();
  }
  else
  { // Existing database found, load games from it
    LoadGames();
  }

  m_GameTable->horizontalHeader()->resizeSection(1, 160);
  m_GameTable->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
  m_GameTable->sortByColumn(0, Qt::AscendingOrder);

} // GameCollection(TableWidget, SQLDatabase)


void GameCollection::AddGame(const Game& a_Game)
{ // Add a game to the collection

  if (m_GameTable)
  {
    int gameIndex = GetVectorIndex(a_Game.m_GameName);

    if (gameIndex == INVALIDINDEX)
    {
      m_GameCollection.push_back(a_Game);
      m_GameTable->AddRow(a_Game);
      m_GameDB.InsertGame(a_Game);
    }
    else
    {
      MergeGame(a_Game);
    }
  }
  else
  {
    qWarning() << "GameCollection::AddGame() null m_GameTable";
  }

} // AddGame()


void GameCollection::AddGames(const GameVector& a_Games)
{ // Add multiple games to coll

  for (int i = 0; i < a_Games.size(); i++)
  {
    AddGame(a_Games[i]);
  }
} // AddGames()


void GameCollection::EditGame(const QString& a_GameName,
                              const Game& a_Game)
{ // Update a game in the coll

  int index = GetVectorIndex(a_GameName);

  if (index != INVALIDINDEX && m_GameTable)
  {
    m_GameCollection[index] = a_Game;
    m_GameTable->EditRow(a_GameName, a_Game);
    
    if (a_GameName != a_Game.m_GameName)
    { // If name edited, remove old record from DB
      m_GameDB.DeleteGame(a_GameName);
    }

    m_GameDB.InsertGame(a_Game);
  }
} // EditGame()


void GameCollection::DeleteSelectGame()
{ // Delete selected row from coll

  int rowIndex = m_GameTable->currentRow();
  QString gameName = m_GameTable->item(rowIndex, NAMETABLEINDEX)->text();
  int vectorIndex = GetVectorIndex(gameName);

  if (vectorIndex != INVALIDINDEX)
  {
    m_GameCollection.removeAt(vectorIndex);
    m_GameTable->DeleteRow(gameName);
    m_GameDB.DeleteGame(gameName);
  }

} // DeleteGame()


void GameCollection::UpdateNextGameStatus(const PlayStatus& a_Status)
{ // Update next games status

  QString statusString = Utilities::GetStatusString(a_Status);
  m_GameTable->UpdatePlayStatus(GetTableIndex(m_NextGame->m_GameName), 
    statusString);

  m_NextGame->m_Status = a_Status;
  m_GameDB.InsertGame(*m_NextGame);

} // UpdateNextGameStatus()


int GameCollection::GetVectorIndex(const QString& a_GameName) const
{ // Return vector index of game
 
  int index = INVALIDINDEX;

  for (int i = 0; i < m_GameCollection.size(); i++)
  {
    if (m_GameCollection[i].m_GameName == a_GameName)
    {
      index = i;
      break;
    }
  }

  return index;
} // GetVectorIndex()


int GameCollection::GetTableIndex(const QString& a_GameName) const
{ // Return table index
  return m_GameTable->GetRowIndex(a_GameName);
} // GetTableIndex()


bool GameCollection::HasNextGame() const
{ // Return whether we have a next game or not
  return m_NextGame;
} // HasNextGame()


void GameCollection::ChooseNextGame()
{ // Generate random game to play

  // Get random number index +1/-1 to include 0
  srand(time(NULL));
  int nextIndex = INVALIDINDEX;
  
  if (m_GameTable->rowCount() != 0)
  {
    do
    {
      nextIndex = rand() % (m_GameTable->rowCount());
    } while (m_GameCollection[nextIndex].m_Status == PlayStatus::COMPLETE ||
      m_GameCollection[nextIndex].m_Status == PlayStatus::ABANDONED);

    m_NextGame = &m_GameCollection[nextIndex];
    m_GameDB.UpdateSetting(NEXTGAMEKEY, m_NextGame->m_GameName);
  }
} // ChooseNextGame()


const Game& GameCollection::GetNextGame() const
{ // Return chosen next game
  return *m_NextGame;
} // GetNextGame()


void GameCollection::LoadNextGame()
{ // Load the next game from the DB

  QString gameName = m_GameDB.GetSetting(NEXTGAMEKEY);
  if (!gameName.isEmpty())
  {
    m_NextGame = &m_GameCollection[GetVectorIndex(gameName)];
  }
} // LoadNextGame()


const QFileInfo& GameCollection::GetGameDBPath()
{ // Return the path to the DB
  return m_GameDB.GetDBPath();
} // GetGameDBPath()


bool GameCollection::HasSelectedRow() const
{ // Return if table has a single selected row
  return m_GameTable->selectionModel()->selectedRows().size() == 1;
} // HasSelectedRow()


const Game& GameCollection::GetSelectedGame() const
{ // Return record of selected row
  
  // Get vector index of the selected game
  int rowIndex = m_GameTable->currentRow();
  QString gameName = m_GameTable->item(rowIndex, NAMETABLEINDEX)->text();
  int vectorIndex = GetVectorIndex(gameName);
  const Game* returnGame = 0;

  if (vectorIndex != INVALIDINDEX)
  { // Check we found the game first
    returnGame = &m_GameCollection[vectorIndex];
  }
  else
  {
    qWarning() << "Failed to find selected game in GameCollection::GetSelected()";
  }

  return *returnGame;
} // GetSelectedRow()


void GameCollection::LoadGames()
{ // Load all the games from the database, displaying in table widget

  GameVector gameColl = m_GameDB.GetGames();
  m_GameCollection = gameColl;
  AddGamesToTable(gameColl);

} // LoadGames()


void GameCollection::AddGamesToTable(const GameVector& a_Games)
{ // Add the games in the vector to the table

  bool result = false;

  QElapsedTimer timer;
  timer.start();

  for (int i = 0; i < a_Games.size(); i++)
  {
    result = CheckPlayStatusFilter(a_Games.at(i));
    result &= CheckPlatformFilter(a_Games.at(i));
    result &= CheckOwnedFilter(a_Games.at(i));
    if (result)
      m_GameTable->AddRow(a_Games.at(i));
  }

  #ifdef QT_DEBUG
    qDebug() << "Adding games to table took" << timer.elapsed() << "milliseconds";
   #endif
} // AddGamesToTable()


void GameCollection::AddGamesToDB(const GameVector& a_Games)
{ // Add the games in the vector to the DB

  for (int i = 0; i < a_Games.size(); i++)
  {
    m_GameDB.InsertGame(a_Games.at(i));
  }
} // AddGamesToDB()


void GameCollection::MergeGame(const Game& a_Game)
{ // Merge the parameter game with the existing record in the vector

  int vectorIndex = GetVectorIndex(a_Game.m_GameName);

  if (vectorIndex != INVALIDINDEX)
  {
    Game* origGame = &m_GameCollection[vectorIndex];
    MergePlatforms(origGame, a_Game);
    MergePlayStatus(origGame, a_Game);

    m_GameTable->EditRow(origGame->m_GameName, *origGame);
    m_GameDB.InsertGame(*origGame);
  }
} // MergeGame()


void GameCollection::MergePlatforms(Game* a_MasterGame, 
                                    const Game& a_SecondGame)
{ // Merge the platforms in the pointer reference

  // If already true don't change, otherwise check second game
  a_MasterGame->m_PlatformPC     |= a_SecondGame.m_PlatformPC;
  a_MasterGame->m_PlatformPS4    |= a_SecondGame.m_PlatformPS4;
  a_MasterGame->m_PlatformPS3    |= a_SecondGame.m_PlatformPS3;
  a_MasterGame->m_PlatformPSVita |= a_SecondGame.m_PlatformPSVita;
} // MergePlatforms()


void GameCollection::MergePlayStatus(Game * a_MasterGame, 
                                     const Game & a_SecondGame)
{ // Merge the play status of the games. Enum has forced values for easy 
  // comparison.
  // Not Played < Played < Abandoned < Complete
 
  if ((int)a_MasterGame->m_Status < (int)a_SecondGame.m_Status)
  {
    a_MasterGame->m_Status = a_SecondGame.m_Status;
  }
} // MergePlayStatus()


QVector<float> GameCollection::GetStats() const
{ // Return the stats of the game play statuses
 
  QVector<float> gameStats;
  
  for (int i = 0; i < 25; i++)
  { // Fill the vector with 0s
    gameStats.push_back(0);
  }

  for (int i = 0; i < m_GameCollection.size(); i++)
  {
    switch (m_GameCollection[i].m_Status)
    {
      case NOTPLAYED:
      {
        if (m_GameCollection[i].m_PlatformPC)
          gameStats[PCNOTPLAYEDINDEX]++;
        if (m_GameCollection[i].m_PlatformPS4)
          gameStats[PS4NOTPLAYEDINDEX]++;
        if (m_GameCollection[i].m_PlatformPS3)
          gameStats[PS3NOTPLAYEDINDEX]++;
        if (m_GameCollection[i].m_PlatformPSVita)
          gameStats[PSVITANOTPLAYEDINDEX]++;

        gameStats[TOTALNOTPLAYEDINDEX]++;
        break;
      }
      case PLAYED:
      {
        if (m_GameCollection[i].m_PlatformPC)
          gameStats[PCPLAYEDINDEX]++;
        if (m_GameCollection[i].m_PlatformPS4)
          gameStats[PS4PLAYEDINDEX]++;
        if (m_GameCollection[i].m_PlatformPS3)
          gameStats[PS3PLAYEDINDEX]++;
        if (m_GameCollection[i].m_PlatformPSVita)
          gameStats[PSVITAPLAYEDINDEX]++;

        gameStats[TOTALPLAYEDINDEX]++;
        break;
      }
      case COMPLETE:
      {
        if (m_GameCollection[i].m_PlatformPC)
          gameStats[PCCOMPLETEINDEX]++;
        if (m_GameCollection[i].m_PlatformPS4)
          gameStats[PS4COMPLETEINDEX]++;
        if (m_GameCollection[i].m_PlatformPS3)
          gameStats[PS3COMPLETEINDEX]++;
        if (m_GameCollection[i].m_PlatformPSVita)
          gameStats[PSVITACOMPLETEINDEX]++;

        gameStats[TOTALCOMPLETEINDEX]++;
        break;
      }
      case ABANDONED:
      {
        if (m_GameCollection[i].m_PlatformPC)
          gameStats[PCABANDONEDINDEX]++;
        if (m_GameCollection[i].m_PlatformPS4)
          gameStats[PS4ABANDONEDINDEX]++;
        if (m_GameCollection[i].m_PlatformPS3)
          gameStats[PS3ABANDONEDINDEX]++;
        if (m_GameCollection[i].m_PlatformPSVita)
          gameStats[PSVITAABANDONEDINDEX]++;

        gameStats[TOTALABANDONEDINDEX]++;
        break;
      }
    }
  }

  CalcStatPercents(&gameStats);
  return gameStats;
} // GetStats()


void GameCollection::CalcStatPercents(QVector<float>* a_GameStats) const
{ // Calculate the "done" percentages of the stats

  // Do PC
  double notDoneNum = (*a_GameStats)[PCNOTPLAYEDINDEX] + (*a_GameStats)[PCPLAYEDINDEX];
  double doneNum = (*a_GameStats)[PCCOMPLETEINDEX] + (*a_GameStats)[PCABANDONEDINDEX];
  // Multiply by 10000 and then divide by 100 to get 2 decimal places
  int convertDecimal = (doneNum / (doneNum + notDoneNum)) * 10000;
  (*a_GameStats)[PCPERCENTINDEX] = (float)convertDecimal / 100;

  // Do PS4
  notDoneNum = (*a_GameStats)[PS4NOTPLAYEDINDEX] + (*a_GameStats)[PS4PLAYEDINDEX];
  doneNum = (*a_GameStats)[PS4COMPLETEINDEX] + (*a_GameStats)[PS4ABANDONEDINDEX];
  // Multiply by 10000 and then divide by 100 to get 2 decimal places
  convertDecimal = (doneNum / (doneNum + notDoneNum)) * 10000;
  (*a_GameStats)[PS4PERCENTINDEX] = (float)convertDecimal / 100;

  // Do PS3
  notDoneNum = (*a_GameStats)[PS3NOTPLAYEDINDEX] + (*a_GameStats)[PS3PLAYEDINDEX];
  doneNum = (*a_GameStats)[PS3COMPLETEINDEX] + (*a_GameStats)[PS3ABANDONEDINDEX];
  // Multiply by 10000 and then divide by 100 to get 2 decimal places
  convertDecimal = (doneNum / (doneNum + notDoneNum)) * 10000;
  (*a_GameStats)[PS3PERCENTINDEX] = (float)convertDecimal / 100;

  // Do PS Vita
  notDoneNum = (*a_GameStats)[PSVITANOTPLAYEDINDEX] + (*a_GameStats)[PSVITAPLAYEDINDEX];
  doneNum = (*a_GameStats)[PSVITACOMPLETEINDEX] + (*a_GameStats)[PSVITAABANDONEDINDEX];
  // Multiply by 10000 and then divide by 100 to get 2 decimal places
  convertDecimal = (doneNum / (doneNum + notDoneNum)) * 10000;
  (*a_GameStats)[PSVITAPERCENTINDEX] = (float)convertDecimal / 100;

  // Do total
  notDoneNum = (*a_GameStats)[TOTALNOTPLAYEDINDEX] + (*a_GameStats)[TOTALPLAYEDINDEX];
  doneNum = (*a_GameStats)[TOTALCOMPLETEINDEX] + (*a_GameStats)[TOTALABANDONEDINDEX];
  // Multiply by 10000 and then divide by 100 to get 2 decimal places
  convertDecimal = (doneNum / (doneNum + notDoneNum)) * 10000;
  (*a_GameStats)[TOTALPERCENTINDEX] = (float)convertDecimal / 100;

} // CalcStatPercents()


void GameCollection::RefreshTable()
{ // Remove everything from the table and reenter items, using filters
  
  // Clear the table
  m_GameTable->clearContents();
  m_GameTable->setRowCount(0);

  // Add games to table
  AddGamesToTable(m_GameCollection);
} // RefreshTable()


bool GameCollection::CheckPlayStatusFilter(const Game& a_Game) const
{ // Check if the game fits the play status filter
  
  bool result = false;
  
  switch (a_Game.m_Status)
  {
    case PlayStatus::NOTPLAYED : 
    {
      if (m_ShowNotPlayed)
        result = m_ShowNotPlayed->isChecked();
      break;
    }

    case PlayStatus::PLAYED :
    {
      if (m_ShowPlayed)
        result = m_ShowPlayed->isChecked();
      break;
    }

    case PlayStatus::COMPLETE :
    {
      if (m_ShowComplete)
        result = m_ShowComplete->isChecked();
      break;
    }

    case PlayStatus::ABANDONED :
    {
      if (m_ShowAbandoned)
        result = m_ShowAbandoned->isChecked();
      break;
    }

    default :
    {
      qWarning() << "GameCollection::CheckPlayStatusFilter() hit default";
      break;
    }
  }

  return result;

} // CheckPlayStatusFilter()


bool GameCollection::CheckPlatformFilter(const Game& a_Game) const
{ // Check if the game fits the platform filter
  
  bool result = false;

  if (a_Game.m_PlatformPC)
  {
    if (m_ShowPC)
      result = m_ShowPC->isChecked();
  }
  if (a_Game.m_PlatformPS4)
  {
    if (m_ShowPS4)
      result |= m_ShowPS4->isChecked();
  }
  if (a_Game.m_PlatformPS3)
  {
    if (m_ShowPS3)
      result |= m_ShowPS3->isChecked();
  }
  if (a_Game.m_PlatformPSVita)
  {
    if (m_ShowPSVita)
      result |= m_ShowPSVita->isChecked();
  }
  if (m_ShowPC && m_ShowPS4 && m_ShowPS3 && m_ShowPSVita)
  {
    result = true;
  }
  
  return result;

} // CheckPlatformFilter()


bool GameCollection::CheckOwnedFilter(const Game& a_Game) const
{ // Check if the game fits the owned filter
  
  bool result = false;
  
  if (a_Game.m_Owned)
  {
    if (m_ShowOwned)
      result = m_ShowOwned->isChecked();
  }
  else
  {
    if (m_ShowNotOwned)
      result = m_ShowNotOwned->isChecked();
  }

  return result;

} // CheckOwnedFilter()
