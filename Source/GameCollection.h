//==============================================================================
//
// Title: GameCollection.h
// Description: Handles the collections of games, manages table and DB
//
//==============================================================================


#pragma once


#include "QtWrappers/SQLDatabase.h"       // Games database reference
#include "Defines.h"                      // GameVector define

class TableWidget;
class QAction;

class GameCollection
{
public:
  GameCollection(TableWidget* a_GameTable,
                 QAction* a_ShowNotPlayed,
                 QAction* a_ShowPlayed,
                 QAction* a_ShowComplete,
                 QAction* a_ShowAbandoned,
                 QAction* a_ShowPC,
                 QAction* a_ShowPS4,
                 QAction* a_ShowPS3,
                 QAction* a_ShowPSVita,
                 QAction* a_ShowOwned,
                 QAction* a_ShowNotOwned);

  // Game manipulation
  void AddGame(const Game& a_Game);            // Add a game to the collection
  void AddGames(const GameVector& a_Games);    // Add multiple games to coll
  void EditGame(const QString& a_GameName, 
                const Game& a_Game);           // Update a game in the coll
  void DeleteSelectGame();                     // Delete selected row from coll
  void UpdateNextGameStatus(const PlayStatus& a_Status); // Update next games status
  
  // Game Storage
  bool HasNextGame() const;                      // Return NextGame != null
  void ChooseNextGame();                         // Generate random game to play
  const Game& GetNextGame() const;               // Return chosen next game
  void LoadNextGame();                           // Load the next game from the DB
  const QFileInfo& GetGameDBPath();              // Return the path to the DB
  
  // UI
  bool HasSelectedRow() const;             // Return if table has a selected row
  const Game& GetSelectedGame() const;       // Return record of selected row

  // Return the stats of the game play statuses
  QVector<float> GetStats() const;

  // Remove everything from the table and reenter items, using filters
  void RefreshTable();

private:
  GameCollection();

  int GetVectorIndex(const QString& a_GameName) const; // Return vector index
  int GetTableIndex(const QString& a_GameName) const;  // Return table index

  // Load all the games from the database, displaying in table widget
  void LoadGames();

  // Add the games in the vector to the table
  void AddGamesToTable(const GameVector& a_Games);

  // Add the games in the vector to the DB
  void AddGamesToDB(const GameVector& a_Games);

  // Merge the parameter game with the existing record in the vector
  void MergeGame(const Game& a_Game);

  // Merge the platforms in the pointer reference
  void MergePlatforms(Game* a_MasterGame, 
                      const Game& a_SecondGame);

  // Merge the play status of the games. Enum has forced values for easy 
  // comparison.
  // Not Played < Played < Abandoned < Complete
  void MergePlayStatus(Game* a_MasterGame, 
                       const Game& a_SecondGame);

  // Calculate the "done" percentages of the stats
  void CalcStatPercents(QVector<float>* a_GameStats) const;

  // Check if the game fits the play status filter
  bool CheckPlayStatusFilter(const Game& a_Game) const;

  // Check if the game fits the platform filter
  bool CheckPlatformFilter(const Game& a_Game) const;

  // Check if the game fits the owned filter
  bool CheckOwnedFilter(const Game& a_Game) const;

  TableWidget* m_GameTable;
  SQLDatabase m_GameDB;
  GameVector m_GameCollection;
  Game* m_NextGame;
  
  QAction* m_ShowNotPlayed;
  QAction* m_ShowPlayed;
  QAction* m_ShowComplete;
  QAction* m_ShowAbandoned;
  QAction* m_ShowPC;
  QAction* m_ShowPS4;
  QAction* m_ShowPS3;
  QAction* m_ShowPSVita;
  QAction* m_ShowOwned;
  QAction* m_ShowNotOwned;
};

