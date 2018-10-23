//==============================================================================
//
// Title: FilterForm.cpp
// Description: Implementation for the filter dialog
//
//==============================================================================


#include "FilterForm.h"                               // Header file


Filterform::Filterform(QAction* a_ShowNotPlayed,
                       QAction* a_ShowPlayed,
                       QAction* a_ShowComplete,
                       QAction* a_ShowAbandoned,
                       QAction* a_ShowPC,
                       QAction* a_ShowPS4,
                       QAction* a_ShowPS3,
                       QAction* a_ShowPSVita,
                       QAction* a_ShowOwned,
                       QAction* a_ShowNotOwned,
                       QWidget *parent)
: QDialog(parent)
{ // Connect widgets and signals
  m_UI.setupUi(this);

  // Remove help flag from title bar
  setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

  ConnectWidgets(a_ShowNotPlayed, a_ShowPlayed, a_ShowComplete, a_ShowAbandoned,
    a_ShowPC, a_ShowPS4, a_ShowPS3, a_ShowPSVita, a_ShowOwned, a_ShowNotOwned);
  SetFilters();

} // FilterForm()


void Filterform::ConnectWidgets(QAction* a_ShowNotPlayed,
                                QAction* a_ShowPlayed,
                                QAction* a_ShowComplete,
                                QAction* a_ShowAbandoned,
                                QAction* a_ShowPC,
                                QAction* a_ShowPS4,
                                QAction* a_ShowPS3,
                                QAction* a_ShowPSVita,
                                QAction* a_ShowOwned,
                                QAction* a_ShowNotOwned)
{ // Connect the widgets to the member variables

  m_NotPlayed = m_UI.FilterForm_NotPlayed;
  m_Played = m_UI.FilterForm_Played;
  m_Complete = m_UI.FilterForm_Complete;
  m_Abandoned = m_UI.FilterForm_Abandoned;
  m_PC = m_UI.FilterForm_PC;
  m_PS4 = m_UI.FilterForm_PS4;
  m_PS3 = m_UI.FilterForm_PS3;
  m_PSVita = m_UI.FilterForm_PSVita;
  m_Owned = m_UI.FilterForm_Owned;
  m_NotOwned = m_UI.FilterForm_NotOwned;
  m_ShowNotPlayed = a_ShowNotPlayed;
  m_ShowPlayed = a_ShowPlayed;
  m_ShowComplete = a_ShowComplete;
  m_ShowAbandoned = a_ShowAbandoned;
  m_ShowPC = a_ShowPC;
  m_ShowPS4 = a_ShowPS4;
  m_ShowPS3 = a_ShowPS3;
  m_ShowPSVita = a_ShowPSVita;
  m_ShowOwned = a_ShowOwned;
  m_ShowNotOwned = a_ShowNotOwned;

  // Connect to OK button
  connect(m_UI.FilterForm_ButtonBox, &QDialogButtonBox::accepted, this,
    &Filterform::OnOK);

} // ConnectWidets()


void Filterform::SetFilters()
{ // Set the checkboxes as per the current filters

  m_NotPlayed->setChecked(m_ShowNotPlayed->isChecked());
  m_Played->setChecked(m_ShowPlayed->isChecked());
  m_Complete->setChecked(m_ShowComplete->isChecked());
  m_Abandoned->setChecked(m_ShowAbandoned->isChecked());
  m_PC->setChecked(m_ShowPC->isChecked());
  m_PS4->setChecked(m_ShowPS4->isChecked());
  m_PS3->setChecked(m_ShowPS3->isChecked());
  m_PSVita->setChecked(m_ShowPSVita->isChecked());
  m_Owned->setChecked(m_ShowOwned->isChecked());
  m_NotOwned->setChecked(m_ShowNotOwned->isChecked());

} // SetFilters()


void Filterform::OnOK()
{ // Update the filters of the application to fit data from the dialog

  m_ShowNotPlayed->setChecked(m_NotPlayed->checkState() == Qt::CheckState::Checked);
  m_ShowPlayed->setChecked(m_Played->checkState() == Qt::CheckState::Checked);
  m_ShowComplete->setChecked(m_Complete->checkState() == Qt::CheckState::Checked);
  m_ShowAbandoned->setChecked(m_Abandoned->checkState() == Qt::CheckState::Checked);
  m_ShowPC->setChecked(m_PC->checkState() == Qt::CheckState::Checked);
  m_ShowPS4->setChecked(m_PS4->checkState() == Qt::CheckState::Checked);
  m_ShowPS3->setChecked(m_PS3->checkState() == Qt::CheckState::Checked);
  m_ShowPSVita->setChecked(m_PSVita->checkState() == Qt::CheckState::Checked);
  m_ShowOwned->setChecked(m_Owned->checkState() == Qt::CheckState::Checked);
  m_ShowNotOwned->setChecked(m_NotOwned->checkState() == Qt::CheckState::Checked);

} // OnOK()
