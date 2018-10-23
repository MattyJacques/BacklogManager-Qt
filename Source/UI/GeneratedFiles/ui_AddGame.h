/********************************************************************************
** Form generated from reading UI file 'AddGame.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGAME_H
#define UI_ADDGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddGameForm
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *AddGameForm_NameLabel;
    QTextEdit *AddGameForm_GameName;
    QLabel *AddGameForm_StatusLabel;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QLabel *AddGameForm_PlatformLabel;
    QCheckBox *AddGameForm_OwnedCheck;
    QComboBox *AddGameForm_PlayStatus;

    void setupUi(QDialog *AddGameForm)
    {
        if (AddGameForm->objectName().isEmpty())
            AddGameForm->setObjectName(QStringLiteral("AddGameForm"));
        AddGameForm->resize(292, 204);
        buttonBox = new QDialogButtonBox(AddGameForm);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 160, 251, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        AddGameForm_NameLabel = new QLabel(AddGameForm);
        AddGameForm_NameLabel->setObjectName(QStringLiteral("AddGameForm_NameLabel"));
        AddGameForm_NameLabel->setGeometry(QRect(20, 30, 71, 16));
        AddGameForm_GameName = new QTextEdit(AddGameForm);
        AddGameForm_GameName->setObjectName(QStringLiteral("AddGameForm_GameName"));
        AddGameForm_GameName->setGeometry(QRect(100, 30, 111, 21));
        AddGameForm_GameName->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        AddGameForm_StatusLabel = new QLabel(AddGameForm);
        AddGameForm_StatusLabel->setObjectName(QStringLiteral("AddGameForm_StatusLabel"));
        AddGameForm_StatusLabel->setGeometry(QRect(20, 90, 71, 16));
        groupBox = new QGroupBox(AddGameForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 271, 141));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(90, 50, 111, 22));
        AddGameForm_PlatformLabel = new QLabel(groupBox);
        AddGameForm_PlatformLabel->setObjectName(QStringLiteral("AddGameForm_PlatformLabel"));
        AddGameForm_PlatformLabel->setGeometry(QRect(10, 50, 71, 16));
        AddGameForm_OwnedCheck = new QCheckBox(groupBox);
        AddGameForm_OwnedCheck->setObjectName(QStringLiteral("AddGameForm_OwnedCheck"));
        AddGameForm_OwnedCheck->setGeometry(QRect(10, 110, 70, 17));
        AddGameForm_PlayStatus = new QComboBox(groupBox);
        AddGameForm_PlayStatus->setObjectName(QStringLiteral("AddGameForm_PlayStatus"));
        AddGameForm_PlayStatus->setGeometry(QRect(90, 80, 111, 22));
        groupBox->raise();
        buttonBox->raise();
        AddGameForm_NameLabel->raise();
        AddGameForm_GameName->raise();
        AddGameForm_StatusLabel->raise();

        retranslateUi(AddGameForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddGameForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddGameForm, SLOT(reject()));

        AddGameForm_PlayStatus->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(AddGameForm);
    } // setupUi

    void retranslateUi(QDialog *AddGameForm)
    {
        AddGameForm->setWindowTitle(QApplication::translate("AddGameForm", "Add Game", nullptr));
        AddGameForm_NameLabel->setText(QApplication::translate("AddGameForm", "Game Name:", nullptr));
        AddGameForm_StatusLabel->setText(QApplication::translate("AddGameForm", "Played Status:", nullptr));
        groupBox->setTitle(QApplication::translate("AddGameForm", "Add Game", nullptr));
        AddGameForm_PlatformLabel->setText(QApplication::translate("AddGameForm", "Platform:", nullptr));
        AddGameForm_OwnedCheck->setText(QApplication::translate("AddGameForm", "Owned", nullptr));
        AddGameForm_PlayStatus->setCurrentText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddGameForm: public Ui_AddGameForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGAME_H
