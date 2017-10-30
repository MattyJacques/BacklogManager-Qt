//==============================================================================
//
// Title: GameStats.cpp
// Name: Matthew Jacques
// Description: Implementation for the stats dialog
//
//==============================================================================


#include <QCloseEvent>       // Close event override
#include "GameStats.h"       // Header file
#include "BacklogManager.h"  // Tell main window we have closed


GameStats::GameStats(const QVector<float>& a_Stats,
                     QWidget* parent)
: QDialog(parent)
{ // Connect widgets and signals
  m_UI.setupUi(this);

  // Remove help flag from title bar
  setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

  SetupUI(a_Stats);

} // GameStats()


void GameStats::UpdateStats(const QVector<float>& a_Stats)
{ // Update the stats with the given

  m_notPlayedPC->setText(QString::number((int)a_Stats[PCNOTPLAYEDINDEX]));
  m_notPlayedPS4->setText(QString::number((int)a_Stats[PS4NOTPLAYEDINDEX]));
  m_notPlayedPS3->setText(QString::number((int)a_Stats[PS3NOTPLAYEDINDEX]));
  m_notPlayedPSVita->setText(QString::number((int)a_Stats[PSVITANOTPLAYEDINDEX]));
  m_notPlayedTotal->setText(QString::number((int)a_Stats[TOTALNOTPLAYEDINDEX]));
  m_playedPC->setText(QString::number((int)a_Stats[PCPLAYEDINDEX]));
  m_playedPS4->setText(QString::number((int)a_Stats[PS4PLAYEDINDEX]));
  m_playedPS3->setText(QString::number((int)a_Stats[PS3PLAYEDINDEX]));
  m_playedPSVita->setText(QString::number((int)a_Stats[PSVITAPLAYEDINDEX]));
  m_playedTotal->setText(QString::number((int)a_Stats[TOTALPLAYEDINDEX]));
  m_completePC->setText(QString::number((int)a_Stats[PCCOMPLETEINDEX]));
  m_completePS4->setText(QString::number((int)a_Stats[PS4COMPLETEINDEX]));
  m_completePS3->setText(QString::number((int)a_Stats[PS3COMPLETEINDEX]));
  m_completePSVita->setText(QString::number((int)a_Stats[PSVITACOMPLETEINDEX]));
  m_completeTotal->setText(QString::number((int)a_Stats[TOTALCOMPLETEINDEX]));
  m_abandonedPC->setText(QString::number((int)a_Stats[PCABANDONEDINDEX]));
  m_abandonedPS4->setText(QString::number((int)a_Stats[PS4ABANDONEDINDEX]));
  m_abandonedPS3->setText(QString::number((int)a_Stats[PS3ABANDONEDINDEX]));
  m_abandonedPSVita->setText(QString::number((int)a_Stats[PSVITAABANDONEDINDEX]));
  m_abandonedTotal->setText(QString::number((int)a_Stats[TOTALABANDONEDINDEX]));
  m_percentPC->setText(QString::number(a_Stats[PCPERCENTINDEX]));
  m_percentPS4->setText(QString::number(a_Stats[PS4PERCENTINDEX]));
  m_percentPS3->setText(QString::number(a_Stats[PS3PERCENTINDEX]));
  m_percentPSVita->setText(QString::number(a_Stats[PSVITAPERCENTINDEX]));
  m_percentTotal->setText(QString::number(a_Stats[TOTALPERCENTINDEX]));

} // UpdateStats()


void GameStats::SetupUI(const QVector<float>& a_Stats)
{ // Connect the labels to member variables and insert data

  ConnectWidgets();
  UpdateStats(a_Stats);

} // SetupUI()


void GameStats::ConnectWidgets()
{ // Connect the labels to the member variables

  m_notPlayedPC = m_UI.StatsForm_PCNotPlayed;
  m_notPlayedPS4 = m_UI.StatsForm_PS4NotPlayed;
  m_notPlayedPS3 = m_UI.StatsForm_PS3NotPlayed;
  m_notPlayedPSVita = m_UI.StatsForm_PSVitaNotPlayed;
  m_notPlayedTotal = m_UI.StatsForm_TotalNotPlayed;
  m_playedPC = m_UI.StatsForm_PCPlayed;
  m_playedPS4 = m_UI.StatsForm_PS4Played;
  m_playedPS3 = m_UI.StatsForm_PS3Played;
  m_playedPSVita = m_UI.StatsForm_PSVitaPlayed;
  m_playedTotal = m_UI.StatsForm_TotalPlayed;
  m_completePC = m_UI.StatsForm_PCComplete;
  m_completePS4 = m_UI.StatsForm_PS4Complete;
  m_completePS3 = m_UI.StatsForm_PS3Complete;
  m_completePSVita = m_UI.StatsForm_PSVitaComplete;
  m_completeTotal = m_UI.StatsForm_TotalComplete;
  m_abandonedPC = m_UI.StatsForm_PCAbandoned;
  m_abandonedPS4 = m_UI.StatsForm_PS4Abandoned;
  m_abandonedPS3 = m_UI.StatsForm_PS3Abandoned;
  m_abandonedPSVita = m_UI.StatsForm_PSVitaAbandoned;
  m_abandonedTotal = m_UI.StatsForm_TotalAbandoned;
  m_percentPC = m_UI.StatsForm_PCPercent;
  m_percentPS4 = m_UI.StatsForm_PS4Percent;
  m_percentPS3 = m_UI.StatsForm_PS3Percent;
  m_percentPSVita = m_UI.StatsForm_PSVitaPercent;
  m_percentTotal = m_UI.StatsForm_TotalPercent;

} // ConnectWidgets()


void GameStats::closeEvent(QCloseEvent* closeEvent)
{ // Handle the closing of the dialog, tell the main window we are closed

  ((BacklogManager*) parentWidget())->ResetStatsDialog();
  closeEvent->accept();

} // closeEvent()
