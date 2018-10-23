//==============================================================================
//
// Title: AboutForm.h
// Description: Header for the about dialog
//
//==============================================================================

#pragma once

#include <QDialog>                                     // Qt dialog
#include "UI/GeneratedFiles/ui_AboutForm.h"            // UI file


class AboutForm : public QDialog
{
  Q_OBJECT

public:
  AboutForm(QWidget *parent = Q_NULLPTR);

private:
  // UI vars
  Ui::AboutForm m_UI;
};
