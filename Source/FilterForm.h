//==============================================================================
//
// Title: FilterForm.h
// Description: Header for the filter dialog
//
//==============================================================================

#pragma once

#include <QDialog>                        // Qt dialog
#include "ui_FilterForm.h"                // UI file

class Filterform : public QDialog
{
  Q_OBJECT

public:
  Filterform(QAction* a_ShowNotPlayed,
             QAction* a_ShowPlayed,
             QAction* a_ShowComplete,
             QAction* a_ShowAbandoned,
             QAction* a_ShowPC,
             QAction* a_ShowPS4,
             QAction* a_ShowPS3,
             QAction* a_ShowPSVita,
             QAction* a_ShowOwned,
             QAction* a_ShowNotOwned,
             QWidget *parent = Q_NULLPTR);

private:
  // Connect the widgets to the member variables
  void ConnectWidgets(QAction* a_ShowNotPlayed,
                      QAction* a_ShowPlayed,
                      QAction* a_ShowComplete,
                      QAction* a_ShowAbandoned,
                      QAction* a_ShowPC,
                      QAction* a_ShowPS4,
                      QAction* a_ShowPS3,
                      QAction* a_ShowPSVita,
                      QAction* a_ShowOwned,
                      QAction* a_ShowNotOwned);

  // Set the checkboxes as per the current filters
  void SetFilters();

  // Update the filters of the application to fit data from the dialog
  void OnOK();

  // UI vars
  Ui::FilterForm m_UI;
  QCheckBox* m_NotPlayed;
  QCheckBox* m_Played;
  QCheckBox* m_Complete;
  QCheckBox* m_Abandoned;
  QCheckBox* m_PC;
  QCheckBox* m_PS4;
  QCheckBox* m_PS3;
  QCheckBox* m_PSVita;
  QCheckBox* m_Owned;
  QCheckBox* m_NotOwned;
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
