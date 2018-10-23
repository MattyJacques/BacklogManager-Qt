//==============================================================================
//
// Title: GameStats.h
// Description: Header for the stats dialog
//
//==============================================================================

#pragma once

#include <QDialog>                          // Qt dialog
#include "Defines.h"                        // Misc defines
#include "UI/GeneratedFiles/ui_GameStats.h" // UI file

class GameStats : public QDialog
{
  Q_OBJECT

public:
  GameStats(const QVector<float>& a_Stats,
            QWidget* parent = Q_NULLPTR);

  // Update the stats with the given
  void UpdateStats(const QVector<float>& a_Stats);

private:
  // Connect the labels to member variables and insert data
  void SetupUI(const QVector<float>& a_Stats);

  // Connect the labels to the member variables
  void ConnectWidgets();

  // Handle the closing of the dialog, tell the main window we are closed
  void closeEvent(QCloseEvent* event);

  QLabel* m_notPlayedPC;
  QLabel* m_notPlayedPS4;
  QLabel* m_notPlayedPS3;
  QLabel* m_notPlayedPSVita;
  QLabel* m_notPlayedTotal;
  QLabel* m_playedPC;
  QLabel* m_playedPS4;
  QLabel* m_playedPS3;
  QLabel* m_playedPSVita;
  QLabel* m_playedTotal;
  QLabel* m_completePC;
  QLabel* m_completePS4;
  QLabel* m_completePS3;
  QLabel* m_completePSVita;
  QLabel* m_completeTotal;
  QLabel* m_abandonedPC;
  QLabel* m_abandonedPS4;
  QLabel* m_abandonedPS3;
  QLabel* m_abandonedPSVita;
  QLabel* m_abandonedTotal;
  QLabel* m_percentPC;
  QLabel* m_percentPS4;
  QLabel* m_percentPS3;
  QLabel* m_percentPSVita;
  QLabel* m_percentTotal;

  // UI vars
  Ui::StatsForm m_UI;
};
