//==============================================================================
//
// Title: BacklogManager.h
// Name: Matthew Jacques
// Description: Header for the main window
//
//==============================================================================

#pragma once

#include <QMainWindow>                                // Qt widgets
#include "UI/GeneratedFiles/ui_BacklogManagerForm.h"  // UI file
#include "QtWrappers/TableWidget.h"                   // QTableWidget wrapper
#include "QtWrappers/SQLDatabase.h"                   // Games database
#include "GameCollection.h"                           // Game storage handling

class GameStats;
struct Game;

class BacklogManager : public QMainWindow
{
  Q_OBJECT

public:
  BacklogManager(QWidget *parent = Q_NULLPTR);
  ~BacklogManager();

  // Reset stats dialog member to null
  void ResetStatsDialog();

private:
  // Add button event. Display the add game dialog to get data then add that 
  // game to the game collection
  void OnAddButton();

  // Edit button event, display the edit game dialog to allow the user the
  // change any data related to that part
  void OnEditButton();

  // Delete button event. Remove the currently selected row
  void OnDeleteButton();

  // Update the game field with new play status
  void OnStatusChange();

  // Import CSV file into table and database
  void OnImportCSV();

  // Fill the stats with data
  void OnStats();

  // Set the path for the backups
  void OnBackupPath();

  // Show the about dialog
  void OnAbout();

  // Show the filter dialog
  void OnFilter();

  // Generate the next game to fill the next game fields with
  void GenerateNextGame();

  // Update the UI on the main form with the data from the chosen next game
  void UpdateNextGameUI();

  // Add game statuses to combo box
  void FillStatusCombo();

  // Set member pointers to their UI widgets.
  void SetupUI();

  // Connect the actions of the dialog to the methods
  void ConnectActions();
  
  // Setup the filter checks on the menu bar
  void SetupFilters();

  // Filter the table contents with the new filters
  void FilterTable();

  // Add actions to the context menu
  void SetupContextMenu();

  // Quit the application
  void Quit();
  
  GameCollection* m_GameCollection;

  Ui::BacklogManagerForm m_UI;
  TableWidget* m_GameTable;
  QComboBox* m_PlayStatus;
  GameStats* m_GameStats;
  
  QAction* m_NotPlayedFilter;
  QAction* m_PlayedFilter;
  QAction* m_CompleteFilter;
  QAction* m_AbandonedFilter;
  QAction* m_PCFilter;
  QAction* m_PS4Filter;
  QAction* m_PS3Filter;
  QAction* m_PSVitaFilter;
  QAction* m_OwnedFilter;
  QAction* m_NotOwnedFilter;

};
