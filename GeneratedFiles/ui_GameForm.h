/********************************************************************************
** Form generated from reading UI file 'GameForm.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEFORM_H
#define UI_GAMEFORM_H

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
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_GameForm
{
public:
    QDialogButtonBox *GameForm_ButtonBox;
    QLabel *GameForm_NameLabel;
    QLabel *GameForm_StatusLabel;
    QComboBox *GameForm_PlayStatus;
    QCheckBox *GameForm_OwnedCheck;
    QGroupBox *GameForm_PlatformsGroup;
    QCheckBox *GameForm_PCCheck;
    QCheckBox *GameForm_PS4Check;
    QCheckBox *GameForm_PS3Check;
    QCheckBox *GameForm_PSVitaCheck;
    QLineEdit *GameForm_GameName;

    void setupUi(QDialog *GameForm)
    {
        if (GameForm->objectName().isEmpty())
            GameForm->setObjectName(QStringLiteral("GameForm"));
        GameForm->setWindowModality(Qt::ApplicationModal);
        GameForm->resize(211, 261);
        GameForm->setMinimumSize(QSize(211, 261));
        GameForm->setMaximumSize(QSize(211, 261));
        GameForm_ButtonBox = new QDialogButtonBox(GameForm);
        GameForm_ButtonBox->setObjectName(QStringLiteral("GameForm_ButtonBox"));
        GameForm_ButtonBox->setGeometry(QRect(10, 220, 191, 32));
        GameForm_ButtonBox->setOrientation(Qt::Horizontal);
        GameForm_ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        GameForm_NameLabel = new QLabel(GameForm);
        GameForm_NameLabel->setObjectName(QStringLiteral("GameForm_NameLabel"));
        GameForm_NameLabel->setGeometry(QRect(10, 10, 71, 16));
        GameForm_StatusLabel = new QLabel(GameForm);
        GameForm_StatusLabel->setObjectName(QStringLiteral("GameForm_StatusLabel"));
        GameForm_StatusLabel->setGeometry(QRect(10, 160, 71, 16));
        GameForm_PlayStatus = new QComboBox(GameForm);
        GameForm_PlayStatus->setObjectName(QStringLiteral("GameForm_PlayStatus"));
        GameForm_PlayStatus->setGeometry(QRect(90, 160, 111, 20));
        GameForm_OwnedCheck = new QCheckBox(GameForm);
        GameForm_OwnedCheck->setObjectName(QStringLiteral("GameForm_OwnedCheck"));
        GameForm_OwnedCheck->setGeometry(QRect(10, 190, 191, 17));
        GameForm_PlatformsGroup = new QGroupBox(GameForm);
        GameForm_PlatformsGroup->setObjectName(QStringLiteral("GameForm_PlatformsGroup"));
        GameForm_PlatformsGroup->setGeometry(QRect(10, 40, 191, 111));
        GameForm_PCCheck = new QCheckBox(GameForm_PlatformsGroup);
        GameForm_PCCheck->setObjectName(QStringLiteral("GameForm_PCCheck"));
        GameForm_PCCheck->setGeometry(QRect(20, 20, 70, 17));
        GameForm_PS4Check = new QCheckBox(GameForm_PlatformsGroup);
        GameForm_PS4Check->setObjectName(QStringLiteral("GameForm_PS4Check"));
        GameForm_PS4Check->setGeometry(QRect(20, 40, 91, 17));
        GameForm_PS3Check = new QCheckBox(GameForm_PlatformsGroup);
        GameForm_PS3Check->setObjectName(QStringLiteral("GameForm_PS3Check"));
        GameForm_PS3Check->setGeometry(QRect(20, 60, 91, 17));
        GameForm_PSVitaCheck = new QCheckBox(GameForm_PlatformsGroup);
        GameForm_PSVitaCheck->setObjectName(QStringLiteral("GameForm_PSVitaCheck"));
        GameForm_PSVitaCheck->setGeometry(QRect(20, 80, 101, 17));
        GameForm_GameName = new QLineEdit(GameForm);
        GameForm_GameName->setObjectName(QStringLiteral("GameForm_GameName"));
        GameForm_GameName->setGeometry(QRect(90, 10, 113, 20));
        QWidget::setTabOrder(GameForm_GameName, GameForm_PCCheck);
        QWidget::setTabOrder(GameForm_PCCheck, GameForm_PS4Check);
        QWidget::setTabOrder(GameForm_PS4Check, GameForm_PS3Check);
        QWidget::setTabOrder(GameForm_PS3Check, GameForm_PSVitaCheck);
        QWidget::setTabOrder(GameForm_PSVitaCheck, GameForm_PlayStatus);
        QWidget::setTabOrder(GameForm_PlayStatus, GameForm_OwnedCheck);

        retranslateUi(GameForm);
        QObject::connect(GameForm_ButtonBox, SIGNAL(accepted()), GameForm, SLOT(accept()));
        QObject::connect(GameForm_ButtonBox, SIGNAL(rejected()), GameForm, SLOT(reject()));

        GameForm_PlayStatus->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(GameForm);
    } // setupUi

    void retranslateUi(QDialog *GameForm)
    {
        GameForm->setWindowTitle(QApplication::translate("GameForm", "Game", nullptr));
        GameForm_NameLabel->setText(QApplication::translate("GameForm", "Game Name:", nullptr));
        GameForm_StatusLabel->setText(QApplication::translate("GameForm", "Played Status:", nullptr));
        GameForm_PlayStatus->setCurrentText(QString());
        GameForm_OwnedCheck->setText(QApplication::translate("GameForm", "Owned", nullptr));
        GameForm_PlatformsGroup->setTitle(QApplication::translate("GameForm", "Platforms", nullptr));
        GameForm_PCCheck->setText(QApplication::translate("GameForm", "PC", nullptr));
        GameForm_PS4Check->setText(QApplication::translate("GameForm", "Playstation 4", nullptr));
        GameForm_PS3Check->setText(QApplication::translate("GameForm", "Playstation 3", nullptr));
        GameForm_PSVitaCheck->setText(QApplication::translate("GameForm", "Playstation Vita", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameForm: public Ui_GameForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEFORM_H
