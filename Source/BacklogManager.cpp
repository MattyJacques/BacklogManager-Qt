//==============================================================================
//
// Title: BacklogManager.cpp
// Description: Implementation for the main window
//
//==============================================================================


#include <QObject>                     // qobject_cast
#include <QtGlobal>                    // Overload in connect
#include <QFileDialog>                 // Find CSV file
#include <QMessageBox>                 // Delete game, are you sure
#include "BacklogManager.h"            // Header
#include "GameForm.h"                  // Game dialog
#include "QtWrappers/SQLDatabase.h"    // SQL functionality
#include "Utilities.h"                 // Data manipulation methods
#include "ImportCSV.h"                 // Import data from CSV
#include "GameStats.h"                 // Stats dialog
#include "AboutForm.h"                 // About dialog
#include "FilterForm.h"                // Filter dialog


BacklogManager::BacklogManager(QWidget *parent)
: QMainWindow(parent),
  m_GameStats(0)
{
  m_UI.setupUi(this);
  SetupUI();

  m_GameCollection = new GameCollection(m_GameTable,
                                        m_UI.actionFilterNotPlayed,
                                        m_UI.actionFilterPlayed,
                                        m_UI.actionFilterComplete,
                                        m_UI.actionFilterAbandoned,
                                        m_UI.actionFilterPC, 
                                        m_UI.actionFilterPS4, 
                                        m_UI.actionFilterPS3, 
                                        m_UI.actionFilterPSVita, 
                                        m_UI.actionFilterOwned, 
                                        m_UI.actionFilterNotOwned);

  FillStatusCombo();

  if (m_GameTable->rowCount() != 0)
  { // If we have no games, don't generate next game
    m_GameCollection->LoadNextGame();
    if (!m_GameCollection->HasNextGame())
    {
      GenerateNextGame();
    }
    else
    {
      UpdateNextGameUI();
    }
  }

  QVector<float> gameStats = (*m_GameCollection).GetStats();
  UpdateStats(gameStats);

} // BacklogManager()


void BacklogManager::OnAddButton()
{ // Add button event. Display the add game dialog to get data then add that 
  // game to the game collection

  Game newGame;
  GameForm addGameDialog(&newGame, ADD, this);

  if (addGameDialog.exec() == QDialog::Accepted)
  { // Add game to the collection
    m_GameCollection->AddGame(newGame);
    
    if (m_GameStats)
    { // If stats are showing, update them
      OnStats();
    }
  }
} // OnAddButton()


void BacklogManager::OnEditButton()
{ // Edit button event, display the edit game dialog to allow the user the
  // change any data related to that part

  if (m_GameCollection->HasSelectedRow())
  { // If a single row is selected, proceed to edit that game record

    Game editGame = m_GameCollection->GetSelectedGame();
    QString gameName = editGame.m_GameName;
    GameForm editGameDialog(&editGame, EDIT, this);

    if (editGameDialog.exec() == QDialog::Accepted)
    { // Edit a game in the collection
      m_GameCollection->EditGame(gameName, editGame);
      
      if (m_GameStats)
      { // If stats are showing, update them
        OnStats();
      }
    }
  } // if (m_GameTable->selectionModel()->selectedRows().size() == 1)
} // OnEditButton()


void BacklogManager::OnDeleteButton()
{ // Delete button event. Remove the currently selected rows

  if (m_GameCollection->HasSelectedRow())
  { // Delete the row from the table and database if one row is selected

    QString gameName = m_GameCollection->GetSelectedGame().m_GameName;

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Delete Game", 
      "Are you sure you wish to delete " + gameName + "?",
      QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
      m_GameCollection->DeleteSelectGame();

      if (m_GameStats)
      { // If stats are showing, update them
        OnStats();
      }
    }
  }
} // OnDeleteButton()


void BacklogManager::OnStatusChange()
{ // Update the game field with new play status

  if (m_PlayStatus && m_GameCollection->HasNextGame())
  {
    QString statusString = m_PlayStatus->currentText();
    PlayStatus statusEnum = Utilities::GetStatusEnum(statusString);
    m_GameCollection->UpdateNextGameStatus(statusEnum);
  }
} // OnStatusChange()


void BacklogManager::OnImportCSV()
{ // Import CSV file into table and database

  QString fileName = QFileDialog::getOpenFileName(this, tr("Import .CSV"),
    QCoreApplication::applicationDirPath(), tr("CSV Files (*.csv)"));

  GameVector importedGames;
  ImportCSV importer;
  
  if (importer.ImportGames(fileName, &importedGames))
  {
    m_GameCollection->AddGames(importedGames);
    
    if (m_GameStats)
    { // If stats are showing, update them
      OnStats();
    }
  }
} // OnImportCSV()


void BacklogManager::GenerateNextGame()
{ // Generate the next game to fill the next game fields with

  m_GameCollection->ChooseNextGame();
  UpdateNextGameUI();

} // GenerateNextGame()


void BacklogManager::UpdateNextGameUI()
{ // Update the UI on the main form with the data from the chosen next game

  Game nextGame = m_GameCollection->GetNextGame();
  // Set the fields
  m_UI.BacklogManagerForm_NextGameTitle->setText(nextGame.m_GameName);
  m_PlayStatus->setCurrentText(Utilities::GetStatusString(nextGame.m_Status));

  QString platformString = Utilities::GetPlatformString(nextGame);
  m_UI.BacklogManagerForm_NextGamePlatform->setText(platformString);

} // UpdateNextGameUI()


void BacklogManager::FillStatusCombo()
{ // Add game statuses to combo box

  m_PlayStatus->addItem(STATUSNOTPLAYED);
  m_PlayStatus->addItem(STATUSPLAYED);
  m_PlayStatus->addItem(STATUSCOMPLETE);
  m_PlayStatus->addItem(STATUSABANDONED);

} // FillStatusCombo


void BacklogManager::OnStats()
{ // Fill the stats with data.
  // TODO: Implement a separate update stats method, this is inefficient

  QVector<float> gameStats = (*m_GameCollection).GetStats();

  if (!m_GameStats)
  {
    m_GameStats = new GameStats(gameStats, this);
    m_GameStats->show();
  }
  else
  {
    m_GameStats->UpdateStats(gameStats);
  }

} // OnStats()


void BacklogManager::OnBackupPath()
{ // Set the path for the backups

  QString fileName = QFileDialog::getExistingDirectory(this, tr("Set Backup Path"),
    QCoreApplication::applicationDirPath());
  
  SQLDatabase db(m_GameCollection->GetGameDBPath());
  db.UpdateSetting(BACKUPPATHKEY, fileName + "/Collection.games");
} // OnBackupPath()


void BacklogManager::OnAbout()
{ // Show the about dialog
  AboutForm about(this);
  about.exec();
} // OnAbout()


void BacklogManager::OnFilter()
{ // Show the filter dialog

  // Don't judge me
  Filterform filterDialog(m_UI.actionFilterNotPlayed, m_UI.actionFilterPlayed,
    m_UI.actionFilterComplete, m_UI.actionFilterAbandoned, m_UI.actionFilterPC,
    m_UI.actionFilterPS4, m_UI.actionFilterPS3, m_UI.actionFilterPSVita,
    m_UI.actionFilterOwned, m_UI.actionFilterNotOwned, this);
  filterDialog.exec();
  FilterTable();

} // OnFilter()


void BacklogManager::SetupUI()
{// Set member pointers to their UI widgets. Connect buttons to methods

  m_PlayStatus = m_UI.BacklogManagerForm_NextGameStatus;
  m_GameTable = (TableWidget*)m_UI.BacklogManagerForm_GameList;
  m_NotPlayedFilter = m_UI.actionFilterNotPlayed;
  m_PlayedFilter = m_UI.actionFilterPlayed;
  m_CompleteFilter = m_UI.actionFilterComplete;
  m_AbandonedFilter = m_UI.actionFilterAbandoned;
  m_PCFilter = m_UI.actionFilterPC;
  m_PS4Filter = m_UI.actionFilterPS4;
  m_PS3Filter = m_UI.actionFilterPS3;
  m_PSVitaFilter = m_UI.actionFilterPSVita;
  m_OwnedFilter = m_UI.actionFilterOwned;
  m_NotOwnedFilter = m_UI.actionFilterNotOwned;

  ConnectActions();
  SetupFilters();
  SetupContextMenu();
} // SetupUI


void BacklogManager::ConnectActions()
{ // Connect the actions of the dialog to the methods

  connect(m_UI.actionAddGame, &QAction::triggered, this
    , &BacklogManager::OnAddButton);
  connect(m_UI.actionEditGame, &QAction::triggered, this
    , &BacklogManager::OnEditButton);
  connect(m_UI.actionDeleteGame, &QAction::triggered, this
    , &BacklogManager::OnDeleteButton);
  connect(m_UI.actionShowStats, &QAction::triggered, this
    , &BacklogManager::OnStats);
  connect(m_UI.BacklogManagerForm_NextGameChooseButton, &QPushButton::clicked,
    this, &BacklogManager::GenerateNextGame);
  connect(m_PlayStatus,
    QOverload<const QString&>::of(&QComboBox::currentIndexChanged), this,
    &BacklogManager::OnStatusChange);
  connect(m_UI.actionImportCSV, &QAction::triggered, this,
    &BacklogManager::OnImportCSV);
  connect(m_UI.actionAbout, &QAction::triggered, this,
    &BacklogManager::OnAbout);
  connect(m_UI.actionFilterGames, &QAction::triggered, this,
    &BacklogManager::OnFilter);
  connect(m_UI.actionClose, &QAction::triggered, this,
    &BacklogManager::Quit);
  connect(m_UI.actionSetBackupPath, &QAction::triggered, this,
    &BacklogManager::OnBackupPath);
  connect(m_UI.actionFilterNotPlayed, &QAction::triggered, this,
    &BacklogManager::FilterTable);
  connect(m_UI.actionFilterPlayed, &QAction::triggered, this,
    &BacklogManager::FilterTable);
  connect(m_UI.actionFilterComplete, &QAction::triggered, this,
    &BacklogManager::FilterTable);
  connect(m_UI.actionFilterAbandoned, &QAction::triggered, this,
    &BacklogManager::FilterTable);
  connect(m_UI.actionFilterPC, &QAction::triggered, this,
    &BacklogManager::FilterTable);
  connect(m_UI.actionFilterPS4, &QAction::triggered, this,
    &BacklogManager::FilterTable);
  connect(m_UI.actionFilterPS3, &QAction::triggered, this,
    &BacklogManager::FilterTable);
  connect(m_UI.actionFilterPSVita, &QAction::triggered, this,
    &BacklogManager::FilterTable);
  connect(m_UI.actionFilterOwned, &QAction::triggered, this,
    &BacklogManager::FilterTable);
  connect(m_UI.actionFilterNotOwned, &QAction::triggered, this,
    &BacklogManager::FilterTable);

  m_notPlayedPC = m_UI.BacklogManagerForm_PCNotPlayed;
  m_notPlayedPS4 = m_UI.BacklogManagerForm_PS4NotPlayed;
  m_notPlayedPS3 = m_UI.BacklogManagerForm_PS3NotPlayed;
  m_notPlayedPSVita = m_UI.BacklogManagerForm_PSVitaNotPlayed;
  m_playedPC = m_UI.BacklogManagerForm_PCPlayed;
  m_playedPS4 = m_UI.BacklogManagerForm_PS4Played;
  m_playedPS3 = m_UI.BacklogManagerForm_PS3Played;
  m_playedPSVita = m_UI.BacklogManagerForm_PSVitaPlayed;
  m_completePC = m_UI.BacklogManagerForm_PCComplete;
  m_completePS4 = m_UI.BacklogManagerForm_PS4Complete;
  m_completePS3 = m_UI.BacklogManagerForm_PS3Complete;
  m_completePSVita = m_UI.BacklogManagerForm_PSVitaComplete;
  m_abandonedPC = m_UI.BacklogManagerForm_PCAbandoned;
  m_abandonedPS4 = m_UI.BacklogManagerForm_PS4Abandoned;
  m_abandonedPS3 = m_UI.BacklogManagerForm_PS3Abandoned;
  m_abandonedPSVita = m_UI.BacklogManagerForm_PSVitaAbandoned;
  m_percentPC = m_UI.BacklogManagerForm_PCPercent;
  m_percentPS4 = m_UI.BacklogManagerForm_PS4Percent;
  m_percentPS3 = m_UI.BacklogManagerForm_PS3Percent;
  m_percentPSVita = m_UI.BacklogManagerForm_PSVitaPercent;

} // ConnectActions()


void BacklogManager::SetupFilters()
{ // Setup the filter checks on the menu bar

  m_NotPlayedFilter->setChecked(true);
  m_PlayedFilter->setChecked(true);
  m_CompleteFilter->setChecked(false);
  m_AbandonedFilter->setChecked(false);
  m_PCFilter->setChecked(true);
  m_PS4Filter->setChecked(true);
  m_PS3Filter->setChecked(true);
  m_PSVitaFilter->setChecked(true);
  m_OwnedFilter->setChecked(true);
  m_NotOwnedFilter->setChecked(true);

} // SetupFilters()


void BacklogManager::FilterTable()
{ // Filter the table contents with the new filters
  m_GameCollection->RefreshTable();
} // FilterTable


void BacklogManager::SetupContextMenu()
{ // Add actions to the context menu

  QList<QAction*> actions;
  actions.push_back(m_UI.actionAddGame);
  actions.push_back(m_UI.actionEditGame);
  actions.push_back(m_UI.actionDeleteGame);

  m_GameTable->addActions(actions);

} // SetupContextMenu()


void BacklogManager::Quit()
{ // Quit the application
  QCoreApplication::quit();
} // Quit()


void BacklogManager::UpdateStats(const QVector<float>& a_Stats)
{ // Update the stats with the given

  m_notPlayedPC->setText(QString::number((int)a_Stats[PCNOTPLAYEDINDEX]));
  m_notPlayedPS4->setText(QString::number((int)a_Stats[PS4NOTPLAYEDINDEX]));
  m_notPlayedPS3->setText(QString::number((int)a_Stats[PS3NOTPLAYEDINDEX]));
  m_notPlayedPSVita->setText(QString::number((int)a_Stats[PSVITANOTPLAYEDINDEX]));
  m_playedPC->setText(QString::number((int)a_Stats[PCPLAYEDINDEX]));
  m_playedPS4->setText(QString::number((int)a_Stats[PS4PLAYEDINDEX]));
  m_playedPS3->setText(QString::number((int)a_Stats[PS3PLAYEDINDEX]));
  m_playedPSVita->setText(QString::number((int)a_Stats[PSVITAPLAYEDINDEX]));
  m_completePC->setText(QString::number((int)a_Stats[PCCOMPLETEINDEX]));
  m_completePS4->setText(QString::number((int)a_Stats[PS4COMPLETEINDEX]));
  m_completePS3->setText(QString::number((int)a_Stats[PS3COMPLETEINDEX]));
  m_completePSVita->setText(QString::number((int)a_Stats[PSVITACOMPLETEINDEX]));
  m_abandonedPC->setText(QString::number((int)a_Stats[PCABANDONEDINDEX]));
  m_abandonedPS4->setText(QString::number((int)a_Stats[PS4ABANDONEDINDEX]));
  m_abandonedPS3->setText(QString::number((int)a_Stats[PS3ABANDONEDINDEX]));
  m_abandonedPSVita->setText(QString::number((int)a_Stats[PSVITAABANDONEDINDEX]));
  m_percentPC->setText(QString::number(a_Stats[PCPERCENTINDEX]));
  m_percentPS4->setText(QString::number(a_Stats[PS4PERCENTINDEX]));
  m_percentPS3->setText(QString::number(a_Stats[PS3PERCENTINDEX]));
  m_percentPSVita->setText(QString::number(a_Stats[PSVITAPERCENTINDEX]));

} // UpdateStats()


void BacklogManager::ResetStatsDialog()
{ // Reset stats dialog member to null

  // Qt takes care of deleting, just reset
  m_GameStats = nullptr;
} // ResetStatsDialog()


BacklogManager::~BacklogManager()
{ // Clean up

  SQLDatabase db(m_GameCollection->GetGameDBPath());
  db.DoBackup(db.GetSetting(BACKUPPATHKEY));

  delete m_GameCollection;
} // ~BacklogManager()
