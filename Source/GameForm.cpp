//==============================================================================
//
// Title: GameForm.cpp
// Description: Implementation for the add/edit game dialog
//
//==============================================================================


#include <QDate>         // Added date
#include <QDebug>        // Debug messages
#include "GameForm.h"    // Header file


GameForm::GameForm(Game* a_GameData,
                   const DialogMode& a_Mode,
                   QWidget *parent)
: m_GameData(a_GameData),
  m_Mode(a_Mode),
  QDialog(parent)
{ // Connect widgets and signals
  m_UI.setupUi(this);

  // Connect widgets
  m_GameName = m_UI.GameForm_GameName;
  m_PlatformPC = m_UI.GameForm_PCCheck;
  m_PlatformPS4 = m_UI.GameForm_PS4Check;
  m_PlatformPS3 = m_UI.GameForm_PS3Check;
  m_PlatformPSVita = m_UI.GameForm_PSVitaCheck;
  m_Status = m_UI.GameForm_PlayStatus;
  m_Owned = m_UI.GameForm_OwnedCheck;
  m_ButtonBox = m_UI.GameForm_ButtonBox;

  // Connect to OK button
  connect(m_ButtonBox, &QDialogButtonBox::accepted, this, &GameForm::OnOK);

  // Setup play status combo
  m_Status->addItem(STATUSNOTPLAYED);
  m_Status->addItem(STATUSPLAYED);
  m_Status->addItem(STATUSCOMPLETE);
  m_Status->addItem(STATUSABANDONED);

  // Remove help flag from title bar
  setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

  // Set focus on game name
  m_GameName->setFocus();

} // GameForm()


int GameForm::exec()
{  // Fills controls if edit mode, calls QDialog::exec()
  
  if (m_Mode == DialogMode::EDIT)
  {
    m_GameName->setText(m_GameData->m_GameName);
    m_PlatformPC->setChecked(m_GameData->m_PlatformPC);
    m_PlatformPS3->setChecked(m_GameData->m_PlatformPS3);
    m_PlatformPS4->setChecked(m_GameData->m_PlatformPS4);
    m_PlatformPSVita->setChecked(m_GameData->m_PlatformPSVita);
    
    switch (m_GameData->m_Status)
    {
      case NOTPLAYED:
      {
        m_Status->setCurrentText(STATUSNOTPLAYED);
        break;
      }
      case PLAYED:
      {
        m_Status->setCurrentText(STATUSPLAYED);
        break;
      }
      case COMPLETE:
      {
        m_Status->setCurrentText(STATUSCOMPLETE);
        break;
      }
      case ABANDONED:
      {
        m_Status->setCurrentText(STATUSABANDONED);
        break;
      }
      default:
      {
        qWarning() << "GameForm::exec() reached default";
        break;
      }
    } // switch (m_GameData->m_Status)

    m_Owned->setChecked(m_GameData->m_Owned);
  }
  
  return QDialog::exec();
} // exec()


void GameForm::OnOK()
{ // Move data from dialog to m_GameData

  QString checkString;                        // String to check input
  QDate qDate = QDate::currentDate();         // Get current date

  m_GameData->m_GameName = m_GameName->displayText();

  // Set platforms
  m_GameData->m_PlatformPC = m_PlatformPC->isChecked();
  m_GameData->m_PlatformPS3 = m_PlatformPS3->isChecked();
  m_GameData->m_PlatformPS4 = m_PlatformPS4->isChecked();
  m_GameData->m_PlatformPSVita = m_PlatformPSVita->isChecked();

  // Parse played status
  checkString = m_Status->currentText();
  if (checkString == STATUSNOTPLAYED)
  {
    m_GameData->m_Status = NOTPLAYED;
  }
  else if (checkString == STATUSPLAYED)
  {
    m_GameData->m_Status = PLAYED;
  }
  else if (checkString == STATUSCOMPLETE)
  {
    m_GameData->m_Status = COMPLETE;
  }
  else if (checkString == STATUSABANDONED)
  {
    m_GameData->m_Status = ABANDONED;
  }

  m_GameData->m_Owned = m_Owned->isChecked();

  if (m_Mode == DialogMode::ADD)
    m_GameData->m_AddedDate = qDate.toString(QString("dd/MM/yyyy"));
} // OnOK()
