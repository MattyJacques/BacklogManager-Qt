//==============================================================================
//
// Title: AboutForm.cpp
// Name: Matthew Jacques
// Description: Implementation of the about dialog
//
//==============================================================================


#include "AboutForm.h"


AboutForm::AboutForm(QWidget *parent)
: QDialog(parent)
{ 
  m_UI.setupUi(this);

  // Remove help flag from title bar
  setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

  // Set links as "openable"
  m_UI.AboutForm_LinkedIn->setOpenExternalLinks(true);
  m_UI.AboutForm_GitHub->setOpenExternalLinks(true);
} // AboutForm()