//==============================================================================
//
// Title: GameForm.h
// Description: Header for the add/edit game dialog
//
//==============================================================================

#pragma once

#include <QDialog>                          // Qt dialog
#include "Defines.h"                        // Misc defines
#include "UI/GeneratedFiles/ui_GameForm.h"  // UI file

class GameForm : public QDialog
{
  Q_OBJECT

public:
  GameForm(Game* a_GameData,
           const DialogMode& a_Mode,
           QWidget *parent = Q_NULLPTR);

  int exec();  // Fills controls if edit mode, calls QDialog::exec()

private:
  void OnOK();

  // UI vars
  Ui::GameForm m_UI;
  QLineEdit* m_GameName;
  QComboBox* m_Status;
  QCheckBox* m_PlatformPC;
  QCheckBox* m_PlatformPS4;
  QCheckBox* m_PlatformPS3;
  QCheckBox* m_PlatformPSVita;
  QCheckBox* m_Owned;
  QDialogButtonBox* m_ButtonBox;

  Game* m_GameData;
  DialogMode m_Mode;
};
