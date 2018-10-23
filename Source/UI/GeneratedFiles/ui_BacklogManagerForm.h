/********************************************************************************
** Form generated from reading UI file 'BacklogManagerForm.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKLOGMANAGERFORM_H
#define UI_BACKLOGMANAGERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BacklogManagerForm
{
public:
    QAction *actionAddGame;
    QAction *actionEditGame;
    QAction *actionDeleteGame;
    QAction *actionImportCSV;
    QAction *actionClose;
    QAction *actionFilterNotPlayed;
    QAction *actionFilterPlayed;
    QAction *actionFilterComplete;
    QAction *actionFilterAbandoned;
    QAction *actionFilterPC;
    QAction *actionFilterPS4;
    QAction *actionFilterPS3;
    QAction *actionFilterPSVita;
    QAction *actionFilterOwned;
    QAction *actionFilterNotOwned;
    QAction *actionShowStats;
    QAction *actionSetBackupPath;
    QAction *actionAbout;
    QAction *actionFilterGames;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *BacklogManagerForm_NextGameGroup;
    QLabel *BacklogManagerForm_NextGameTitle;
    QLabel *BacklogManagerForm_NextGamePlatform;
    QComboBox *BacklogManagerForm_NextGameStatus;
    QPushButton *BacklogManagerForm_NextGameChooseButton;
    QGroupBox *BacklogManagerForm_StatsGroup;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *StatsForm_PCStats;
    QFormLayout *formLayout_4;
    QLabel *StatsForm_PCNotPlayedLbl;
    QLabel *StatsForm_PCNotPlayed;
    QLabel *StatsForm_PCPlayedLbl;
    QLabel *StatsForm_PCPlayed;
    QLabel *StatsForm_PCCompleteLbl;
    QLabel *StatsForm_PCComplete;
    QLabel *StatsForm_PCAbandonedLbl;
    QLabel *StatsForm_PCAbandoned;
    QLabel *StatsForm_PCPercentLbl;
    QLabel *StatsForm_PCPercent;
    QGroupBox *StatsForm_PS4Stats;
    QFormLayout *formLayout_3;
    QLabel *StatsForm_PS4NotPlayedLbl;
    QLabel *StatsForm_PS4NotPlayed;
    QLabel *StatsForm_PS4PlayedLbl;
    QLabel *StatsForm_PS4Played;
    QLabel *StatsForm_PS4CompleteLbl;
    QLabel *StatsForm_PS4Complete;
    QLabel *StatsForm_PS4AbandonedLbl;
    QLabel *StatsForm_PS4Abandoned;
    QLabel *StatsForm_PS4PercentLbl;
    QLabel *StatsForm_PS4Percent;
    QGroupBox *StatsForm_PS3Stats;
    QFormLayout *formLayout_2;
    QLabel *StatsForm_PS3NotPlayedLbl;
    QLabel *StatsForm_PS3NotPlayed;
    QLabel *StatsForm_PS3PlayedLbl;
    QLabel *StatsForm_PS3Played;
    QLabel *StatsForm_PS3CompleteLbl;
    QLabel *StatsForm_PS3Complete;
    QLabel *StatsForm_PS3AbandonedLbl;
    QLabel *StatsForm_PS3Abandoned;
    QLabel *StatsForm_PS3PercentLbl;
    QLabel *StatsForm_PS3Percent;
    QGroupBox *StatsForm_PSVitaStats;
    QFormLayout *formLayout;
    QLabel *StatsForm_PSVitaNotPlayedLbl;
    QLabel *StatsForm_PSVitaNotPlayed;
    QLabel *StatsForm_PSVitaPlayedLbl;
    QLabel *StatsForm_PSVitaPlayed;
    QLabel *StatsForm_PSVitaCompleteLbl;
    QLabel *StatsForm_PSVitaComplete;
    QLabel *StatsForm_PSVitaAbandonedLbl;
    QLabel *StatsForm_PSVitaAbandoned;
    QLabel *StatsForm_PSVitaPercentLbl;
    QLabel *StatsForm_PSVitaPercent;
    QGroupBox *BacklogManagerForm_GameListGroup;
    QHBoxLayout *horizontalLayout;
    QTableWidget *BacklogManagerForm_GameList;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuFilters;
    QMenu *menuPlayed_Status;
    QMenu *menuPlatform;
    QMenu *menuOwned_Status;
    QMenu *menuHelp;
    QToolBar *toolBar;

    void setupUi(QMainWindow *BacklogManagerForm)
    {
        if (BacklogManagerForm->objectName().isEmpty())
            BacklogManagerForm->setObjectName(QStringLiteral("BacklogManagerForm"));
        BacklogManagerForm->resize(831, 834);
        BacklogManagerForm->setMinimumSize(QSize(831, 0));
        BacklogManagerForm->setMaximumSize(QSize(831, 16777215));
        actionAddGame = new QAction(BacklogManagerForm);
        actionAddGame->setObjectName(QStringLiteral("actionAddGame"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/BacklogManagerForm/Resources/Add Game.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddGame->setIcon(icon);
        actionEditGame = new QAction(BacklogManagerForm);
        actionEditGame->setObjectName(QStringLiteral("actionEditGame"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/BacklogManagerForm/Resources/Edit Game.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditGame->setIcon(icon1);
        actionDeleteGame = new QAction(BacklogManagerForm);
        actionDeleteGame->setObjectName(QStringLiteral("actionDeleteGame"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/BacklogManagerForm/Resources/Delete Game.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeleteGame->setIcon(icon2);
        actionImportCSV = new QAction(BacklogManagerForm);
        actionImportCSV->setObjectName(QStringLiteral("actionImportCSV"));
        actionClose = new QAction(BacklogManagerForm);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionFilterNotPlayed = new QAction(BacklogManagerForm);
        actionFilterNotPlayed->setObjectName(QStringLiteral("actionFilterNotPlayed"));
        actionFilterNotPlayed->setCheckable(true);
        actionFilterPlayed = new QAction(BacklogManagerForm);
        actionFilterPlayed->setObjectName(QStringLiteral("actionFilterPlayed"));
        actionFilterPlayed->setCheckable(true);
        actionFilterComplete = new QAction(BacklogManagerForm);
        actionFilterComplete->setObjectName(QStringLiteral("actionFilterComplete"));
        actionFilterComplete->setCheckable(true);
        actionFilterAbandoned = new QAction(BacklogManagerForm);
        actionFilterAbandoned->setObjectName(QStringLiteral("actionFilterAbandoned"));
        actionFilterAbandoned->setCheckable(true);
        actionFilterPC = new QAction(BacklogManagerForm);
        actionFilterPC->setObjectName(QStringLiteral("actionFilterPC"));
        actionFilterPC->setCheckable(true);
        actionFilterPS4 = new QAction(BacklogManagerForm);
        actionFilterPS4->setObjectName(QStringLiteral("actionFilterPS4"));
        actionFilterPS4->setCheckable(true);
        actionFilterPS3 = new QAction(BacklogManagerForm);
        actionFilterPS3->setObjectName(QStringLiteral("actionFilterPS3"));
        actionFilterPS3->setCheckable(true);
        actionFilterPSVita = new QAction(BacklogManagerForm);
        actionFilterPSVita->setObjectName(QStringLiteral("actionFilterPSVita"));
        actionFilterPSVita->setCheckable(true);
        actionFilterOwned = new QAction(BacklogManagerForm);
        actionFilterOwned->setObjectName(QStringLiteral("actionFilterOwned"));
        actionFilterOwned->setCheckable(true);
        actionFilterNotOwned = new QAction(BacklogManagerForm);
        actionFilterNotOwned->setObjectName(QStringLiteral("actionFilterNotOwned"));
        actionFilterNotOwned->setCheckable(true);
        actionShowStats = new QAction(BacklogManagerForm);
        actionShowStats->setObjectName(QStringLiteral("actionShowStats"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/BacklogManagerForm/Resources/Game Stats.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowStats->setIcon(icon3);
        actionSetBackupPath = new QAction(BacklogManagerForm);
        actionSetBackupPath->setObjectName(QStringLiteral("actionSetBackupPath"));
        actionAbout = new QAction(BacklogManagerForm);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionFilterGames = new QAction(BacklogManagerForm);
        actionFilterGames->setObjectName(QStringLiteral("actionFilterGames"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/BacklogManagerForm/Resources/Filter Games.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFilterGames->setIcon(icon4);
        centralWidget = new QWidget(BacklogManagerForm);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        BacklogManagerForm_NextGameGroup = new QGroupBox(centralWidget);
        BacklogManagerForm_NextGameGroup->setObjectName(QStringLiteral("BacklogManagerForm_NextGameGroup"));
        BacklogManagerForm_NextGameGroup->setMinimumSize(QSize(801, 61));
        BacklogManagerForm_NextGameTitle = new QLabel(BacklogManagerForm_NextGameGroup);
        BacklogManagerForm_NextGameTitle->setObjectName(QStringLiteral("BacklogManagerForm_NextGameTitle"));
        BacklogManagerForm_NextGameTitle->setGeometry(QRect(20, 20, 331, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        BacklogManagerForm_NextGameTitle->setFont(font);
        BacklogManagerForm_NextGamePlatform = new QLabel(BacklogManagerForm_NextGameGroup);
        BacklogManagerForm_NextGamePlatform->setObjectName(QStringLiteral("BacklogManagerForm_NextGamePlatform"));
        BacklogManagerForm_NextGamePlatform->setGeometry(QRect(370, 20, 181, 21));
        BacklogManagerForm_NextGamePlatform->setFont(font);
        BacklogManagerForm_NextGameStatus = new QComboBox(BacklogManagerForm_NextGameGroup);
        BacklogManagerForm_NextGameStatus->setObjectName(QStringLiteral("BacklogManagerForm_NextGameStatus"));
        BacklogManagerForm_NextGameStatus->setGeometry(QRect(570, 20, 111, 22));
        BacklogManagerForm_NextGameChooseButton = new QPushButton(BacklogManagerForm_NextGameGroup);
        BacklogManagerForm_NextGameChooseButton->setObjectName(QStringLiteral("BacklogManagerForm_NextGameChooseButton"));
        BacklogManagerForm_NextGameChooseButton->setGeometry(QRect(700, 20, 81, 23));

        verticalLayout->addWidget(BacklogManagerForm_NextGameGroup);

        BacklogManagerForm_StatsGroup = new QGroupBox(centralWidget);
        BacklogManagerForm_StatsGroup->setObjectName(QStringLiteral("BacklogManagerForm_StatsGroup"));
        BacklogManagerForm_StatsGroup->setMinimumSize(QSize(801, 201));
        horizontalLayout_2 = new QHBoxLayout(BacklogManagerForm_StatsGroup);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        StatsForm_PCStats = new QGroupBox(BacklogManagerForm_StatsGroup);
        StatsForm_PCStats->setObjectName(QStringLiteral("StatsForm_PCStats"));
        QFont font1;
        font1.setPointSize(10);
        StatsForm_PCStats->setFont(font1);
        formLayout_4 = new QFormLayout(StatsForm_PCStats);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        StatsForm_PCNotPlayedLbl = new QLabel(StatsForm_PCStats);
        StatsForm_PCNotPlayedLbl->setObjectName(QStringLiteral("StatsForm_PCNotPlayedLbl"));
        StatsForm_PCNotPlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PCNotPlayedLbl->setFont(font1);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, StatsForm_PCNotPlayedLbl);

        StatsForm_PCNotPlayed = new QLabel(StatsForm_PCStats);
        StatsForm_PCNotPlayed->setObjectName(QStringLiteral("StatsForm_PCNotPlayed"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, StatsForm_PCNotPlayed);

        StatsForm_PCPlayedLbl = new QLabel(StatsForm_PCStats);
        StatsForm_PCPlayedLbl->setObjectName(QStringLiteral("StatsForm_PCPlayedLbl"));
        StatsForm_PCPlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PCPlayedLbl->setFont(font1);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, StatsForm_PCPlayedLbl);

        StatsForm_PCPlayed = new QLabel(StatsForm_PCStats);
        StatsForm_PCPlayed->setObjectName(QStringLiteral("StatsForm_PCPlayed"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, StatsForm_PCPlayed);

        StatsForm_PCCompleteLbl = new QLabel(StatsForm_PCStats);
        StatsForm_PCCompleteLbl->setObjectName(QStringLiteral("StatsForm_PCCompleteLbl"));
        StatsForm_PCCompleteLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PCCompleteLbl->setFont(font1);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, StatsForm_PCCompleteLbl);

        StatsForm_PCComplete = new QLabel(StatsForm_PCStats);
        StatsForm_PCComplete->setObjectName(QStringLiteral("StatsForm_PCComplete"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, StatsForm_PCComplete);

        StatsForm_PCAbandonedLbl = new QLabel(StatsForm_PCStats);
        StatsForm_PCAbandonedLbl->setObjectName(QStringLiteral("StatsForm_PCAbandonedLbl"));
        StatsForm_PCAbandonedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PCAbandonedLbl->setFont(font1);

        formLayout_4->setWidget(3, QFormLayout::LabelRole, StatsForm_PCAbandonedLbl);

        StatsForm_PCAbandoned = new QLabel(StatsForm_PCStats);
        StatsForm_PCAbandoned->setObjectName(QStringLiteral("StatsForm_PCAbandoned"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, StatsForm_PCAbandoned);

        StatsForm_PCPercentLbl = new QLabel(StatsForm_PCStats);
        StatsForm_PCPercentLbl->setObjectName(QStringLiteral("StatsForm_PCPercentLbl"));
        StatsForm_PCPercentLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PCPercentLbl->setFont(font1);

        formLayout_4->setWidget(4, QFormLayout::LabelRole, StatsForm_PCPercentLbl);

        StatsForm_PCPercent = new QLabel(StatsForm_PCStats);
        StatsForm_PCPercent->setObjectName(QStringLiteral("StatsForm_PCPercent"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, StatsForm_PCPercent);


        horizontalLayout_2->addWidget(StatsForm_PCStats);

        StatsForm_PS4Stats = new QGroupBox(BacklogManagerForm_StatsGroup);
        StatsForm_PS4Stats->setObjectName(QStringLiteral("StatsForm_PS4Stats"));
        StatsForm_PS4Stats->setFont(font1);
        formLayout_3 = new QFormLayout(StatsForm_PS4Stats);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        StatsForm_PS4NotPlayedLbl = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4NotPlayedLbl->setObjectName(QStringLiteral("StatsForm_PS4NotPlayedLbl"));
        StatsForm_PS4NotPlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS4NotPlayedLbl->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, StatsForm_PS4NotPlayedLbl);

        StatsForm_PS4NotPlayed = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4NotPlayed->setObjectName(QStringLiteral("StatsForm_PS4NotPlayed"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, StatsForm_PS4NotPlayed);

        StatsForm_PS4PlayedLbl = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4PlayedLbl->setObjectName(QStringLiteral("StatsForm_PS4PlayedLbl"));
        StatsForm_PS4PlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS4PlayedLbl->setFont(font1);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, StatsForm_PS4PlayedLbl);

        StatsForm_PS4Played = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4Played->setObjectName(QStringLiteral("StatsForm_PS4Played"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, StatsForm_PS4Played);

        StatsForm_PS4CompleteLbl = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4CompleteLbl->setObjectName(QStringLiteral("StatsForm_PS4CompleteLbl"));
        StatsForm_PS4CompleteLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS4CompleteLbl->setFont(font1);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, StatsForm_PS4CompleteLbl);

        StatsForm_PS4Complete = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4Complete->setObjectName(QStringLiteral("StatsForm_PS4Complete"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, StatsForm_PS4Complete);

        StatsForm_PS4AbandonedLbl = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4AbandonedLbl->setObjectName(QStringLiteral("StatsForm_PS4AbandonedLbl"));
        StatsForm_PS4AbandonedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS4AbandonedLbl->setFont(font1);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, StatsForm_PS4AbandonedLbl);

        StatsForm_PS4Abandoned = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4Abandoned->setObjectName(QStringLiteral("StatsForm_PS4Abandoned"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, StatsForm_PS4Abandoned);

        StatsForm_PS4PercentLbl = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4PercentLbl->setObjectName(QStringLiteral("StatsForm_PS4PercentLbl"));
        StatsForm_PS4PercentLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS4PercentLbl->setFont(font1);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, StatsForm_PS4PercentLbl);

        StatsForm_PS4Percent = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4Percent->setObjectName(QStringLiteral("StatsForm_PS4Percent"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, StatsForm_PS4Percent);


        horizontalLayout_2->addWidget(StatsForm_PS4Stats);

        StatsForm_PS3Stats = new QGroupBox(BacklogManagerForm_StatsGroup);
        StatsForm_PS3Stats->setObjectName(QStringLiteral("StatsForm_PS3Stats"));
        StatsForm_PS3Stats->setFont(font1);
        formLayout_2 = new QFormLayout(StatsForm_PS3Stats);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        StatsForm_PS3NotPlayedLbl = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3NotPlayedLbl->setObjectName(QStringLiteral("StatsForm_PS3NotPlayedLbl"));
        StatsForm_PS3NotPlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS3NotPlayedLbl->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, StatsForm_PS3NotPlayedLbl);

        StatsForm_PS3NotPlayed = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3NotPlayed->setObjectName(QStringLiteral("StatsForm_PS3NotPlayed"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, StatsForm_PS3NotPlayed);

        StatsForm_PS3PlayedLbl = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3PlayedLbl->setObjectName(QStringLiteral("StatsForm_PS3PlayedLbl"));
        StatsForm_PS3PlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS3PlayedLbl->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, StatsForm_PS3PlayedLbl);

        StatsForm_PS3Played = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3Played->setObjectName(QStringLiteral("StatsForm_PS3Played"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, StatsForm_PS3Played);

        StatsForm_PS3CompleteLbl = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3CompleteLbl->setObjectName(QStringLiteral("StatsForm_PS3CompleteLbl"));
        StatsForm_PS3CompleteLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS3CompleteLbl->setFont(font1);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, StatsForm_PS3CompleteLbl);

        StatsForm_PS3Complete = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3Complete->setObjectName(QStringLiteral("StatsForm_PS3Complete"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, StatsForm_PS3Complete);

        StatsForm_PS3AbandonedLbl = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3AbandonedLbl->setObjectName(QStringLiteral("StatsForm_PS3AbandonedLbl"));
        StatsForm_PS3AbandonedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS3AbandonedLbl->setFont(font1);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, StatsForm_PS3AbandonedLbl);

        StatsForm_PS3Abandoned = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3Abandoned->setObjectName(QStringLiteral("StatsForm_PS3Abandoned"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, StatsForm_PS3Abandoned);

        StatsForm_PS3PercentLbl = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3PercentLbl->setObjectName(QStringLiteral("StatsForm_PS3PercentLbl"));
        StatsForm_PS3PercentLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS3PercentLbl->setFont(font1);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, StatsForm_PS3PercentLbl);

        StatsForm_PS3Percent = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3Percent->setObjectName(QStringLiteral("StatsForm_PS3Percent"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, StatsForm_PS3Percent);


        horizontalLayout_2->addWidget(StatsForm_PS3Stats);

        StatsForm_PSVitaStats = new QGroupBox(BacklogManagerForm_StatsGroup);
        StatsForm_PSVitaStats->setObjectName(QStringLiteral("StatsForm_PSVitaStats"));
        StatsForm_PSVitaStats->setFont(font1);
        formLayout = new QFormLayout(StatsForm_PSVitaStats);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        StatsForm_PSVitaNotPlayedLbl = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaNotPlayedLbl->setObjectName(QStringLiteral("StatsForm_PSVitaNotPlayedLbl"));
        StatsForm_PSVitaNotPlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PSVitaNotPlayedLbl->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, StatsForm_PSVitaNotPlayedLbl);

        StatsForm_PSVitaNotPlayed = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaNotPlayed->setObjectName(QStringLiteral("StatsForm_PSVitaNotPlayed"));

        formLayout->setWidget(0, QFormLayout::FieldRole, StatsForm_PSVitaNotPlayed);

        StatsForm_PSVitaPlayedLbl = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaPlayedLbl->setObjectName(QStringLiteral("StatsForm_PSVitaPlayedLbl"));
        StatsForm_PSVitaPlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PSVitaPlayedLbl->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, StatsForm_PSVitaPlayedLbl);

        StatsForm_PSVitaPlayed = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaPlayed->setObjectName(QStringLiteral("StatsForm_PSVitaPlayed"));

        formLayout->setWidget(1, QFormLayout::FieldRole, StatsForm_PSVitaPlayed);

        StatsForm_PSVitaCompleteLbl = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaCompleteLbl->setObjectName(QStringLiteral("StatsForm_PSVitaCompleteLbl"));
        StatsForm_PSVitaCompleteLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PSVitaCompleteLbl->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, StatsForm_PSVitaCompleteLbl);

        StatsForm_PSVitaComplete = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaComplete->setObjectName(QStringLiteral("StatsForm_PSVitaComplete"));

        formLayout->setWidget(2, QFormLayout::FieldRole, StatsForm_PSVitaComplete);

        StatsForm_PSVitaAbandonedLbl = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaAbandonedLbl->setObjectName(QStringLiteral("StatsForm_PSVitaAbandonedLbl"));
        StatsForm_PSVitaAbandonedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PSVitaAbandonedLbl->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, StatsForm_PSVitaAbandonedLbl);

        StatsForm_PSVitaAbandoned = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaAbandoned->setObjectName(QStringLiteral("StatsForm_PSVitaAbandoned"));

        formLayout->setWidget(3, QFormLayout::FieldRole, StatsForm_PSVitaAbandoned);

        StatsForm_PSVitaPercentLbl = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaPercentLbl->setObjectName(QStringLiteral("StatsForm_PSVitaPercentLbl"));
        StatsForm_PSVitaPercentLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PSVitaPercentLbl->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, StatsForm_PSVitaPercentLbl);

        StatsForm_PSVitaPercent = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaPercent->setObjectName(QStringLiteral("StatsForm_PSVitaPercent"));

        formLayout->setWidget(4, QFormLayout::FieldRole, StatsForm_PSVitaPercent);


        horizontalLayout_2->addWidget(StatsForm_PSVitaStats);


        verticalLayout->addWidget(BacklogManagerForm_StatsGroup);

        BacklogManagerForm_GameListGroup = new QGroupBox(centralWidget);
        BacklogManagerForm_GameListGroup->setObjectName(QStringLiteral("BacklogManagerForm_GameListGroup"));
        horizontalLayout = new QHBoxLayout(BacklogManagerForm_GameListGroup);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        BacklogManagerForm_GameList = new QTableWidget(BacklogManagerForm_GameListGroup);
        if (BacklogManagerForm_GameList->columnCount() < 5)
            BacklogManagerForm_GameList->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        BacklogManagerForm_GameList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        BacklogManagerForm_GameList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        BacklogManagerForm_GameList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        BacklogManagerForm_GameList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        BacklogManagerForm_GameList->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        BacklogManagerForm_GameList->setObjectName(QStringLiteral("BacklogManagerForm_GameList"));
        BacklogManagerForm_GameList->setContextMenuPolicy(Qt::ActionsContextMenu);
        BacklogManagerForm_GameList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        BacklogManagerForm_GameList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        BacklogManagerForm_GameList->setSelectionBehavior(QAbstractItemView::SelectRows);
        BacklogManagerForm_GameList->setSortingEnabled(true);
        BacklogManagerForm_GameList->setColumnCount(5);
        BacklogManagerForm_GameList->horizontalHeader()->setCascadingSectionResizes(false);
        BacklogManagerForm_GameList->horizontalHeader()->setDefaultSectionSize(110);

        horizontalLayout->addWidget(BacklogManagerForm_GameList);


        verticalLayout->addWidget(BacklogManagerForm_GameListGroup);

        BacklogManagerForm->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BacklogManagerForm);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 831, 21));
        menuBar->setToolTipDuration(1);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFilters = new QMenu(menuBar);
        menuFilters->setObjectName(QStringLiteral("menuFilters"));
        menuPlayed_Status = new QMenu(menuFilters);
        menuPlayed_Status->setObjectName(QStringLiteral("menuPlayed_Status"));
        menuPlatform = new QMenu(menuFilters);
        menuPlatform->setObjectName(QStringLiteral("menuPlatform"));
        menuOwned_Status = new QMenu(menuFilters);
        menuOwned_Status->setObjectName(QStringLiteral("menuOwned_Status"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        BacklogManagerForm->setMenuBar(menuBar);
        toolBar = new QToolBar(BacklogManagerForm);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        BacklogManagerForm->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuFilters->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSetBackupPath);
        menuFile->addAction(actionImportCSV);
        menuFile->addAction(actionClose);
        menuFilters->addAction(menuPlayed_Status->menuAction());
        menuFilters->addAction(menuPlatform->menuAction());
        menuFilters->addAction(menuOwned_Status->menuAction());
        menuPlayed_Status->addAction(actionFilterNotPlayed);
        menuPlayed_Status->addAction(actionFilterPlayed);
        menuPlayed_Status->addAction(actionFilterComplete);
        menuPlayed_Status->addAction(actionFilterAbandoned);
        menuPlatform->addAction(actionFilterPC);
        menuPlatform->addAction(actionFilterPS4);
        menuPlatform->addAction(actionFilterPS3);
        menuPlatform->addAction(actionFilterPSVita);
        menuOwned_Status->addAction(actionFilterOwned);
        menuOwned_Status->addAction(actionFilterNotOwned);
        menuHelp->addAction(actionAbout);
        toolBar->addAction(actionAddGame);
        toolBar->addAction(actionEditGame);
        toolBar->addAction(actionDeleteGame);
        toolBar->addSeparator();
        toolBar->addAction(actionShowStats);
        toolBar->addAction(actionFilterGames);

        retranslateUi(BacklogManagerForm);

        QMetaObject::connectSlotsByName(BacklogManagerForm);
    } // setupUi

    void retranslateUi(QMainWindow *BacklogManagerForm)
    {
        BacklogManagerForm->setWindowTitle(QApplication::translate("BacklogManagerForm", "Backlog Manager", nullptr));
        actionAddGame->setText(QApplication::translate("BacklogManagerForm", "Add Game", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAddGame->setToolTip(QApplication::translate("BacklogManagerForm", "Add a game to the collection", nullptr));
#endif // QT_NO_TOOLTIP
        actionEditGame->setText(QApplication::translate("BacklogManagerForm", "Edit Game", nullptr));
#ifndef QT_NO_TOOLTIP
        actionEditGame->setToolTip(QApplication::translate("BacklogManagerForm", "Edit a game in the collection", nullptr));
#endif // QT_NO_TOOLTIP
        actionDeleteGame->setText(QApplication::translate("BacklogManagerForm", "Delete Game", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDeleteGame->setToolTip(QApplication::translate("BacklogManagerForm", "Delete a game from the collection", nullptr));
#endif // QT_NO_TOOLTIP
        actionImportCSV->setText(QApplication::translate("BacklogManagerForm", "Import .CSV", nullptr));
#ifndef QT_NO_TOOLTIP
        actionImportCSV->setToolTip(QApplication::translate("BacklogManagerForm", "Import a .csv file", nullptr));
#endif // QT_NO_TOOLTIP
        actionClose->setText(QApplication::translate("BacklogManagerForm", "Close", nullptr));
        actionFilterNotPlayed->setText(QApplication::translate("BacklogManagerForm", "Not Played", nullptr));
        actionFilterPlayed->setText(QApplication::translate("BacklogManagerForm", "Played", nullptr));
        actionFilterComplete->setText(QApplication::translate("BacklogManagerForm", "Complete", nullptr));
        actionFilterAbandoned->setText(QApplication::translate("BacklogManagerForm", "Abandoned", nullptr));
        actionFilterPC->setText(QApplication::translate("BacklogManagerForm", "PC", nullptr));
        actionFilterPS4->setText(QApplication::translate("BacklogManagerForm", "Playstation 4", nullptr));
        actionFilterPS3->setText(QApplication::translate("BacklogManagerForm", "Playstation 3", nullptr));
        actionFilterPSVita->setText(QApplication::translate("BacklogManagerForm", "Playstation Vita", nullptr));
        actionFilterOwned->setText(QApplication::translate("BacklogManagerForm", "Owned", nullptr));
        actionFilterNotOwned->setText(QApplication::translate("BacklogManagerForm", "Not Owned", nullptr));
        actionShowStats->setText(QApplication::translate("BacklogManagerForm", "Show Stats", nullptr));
#ifndef QT_NO_TOOLTIP
        actionShowStats->setToolTip(QApplication::translate("BacklogManagerForm", "Show the stats dialog", nullptr));
#endif // QT_NO_TOOLTIP
        actionSetBackupPath->setText(QApplication::translate("BacklogManagerForm", "Set Backup Path", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSetBackupPath->setToolTip(QApplication::translate("BacklogManagerForm", "Backups are processed on application close", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetBackupPath->setStatusTip(QApplication::translate("BacklogManagerForm", "Backups are processed on application close", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionSetBackupPath->setWhatsThis(QApplication::translate("BacklogManagerForm", "Backups are processed on application close", nullptr));
#endif // QT_NO_WHATSTHIS
        actionAbout->setText(QApplication::translate("BacklogManagerForm", "About", nullptr));
        actionFilterGames->setText(QApplication::translate("BacklogManagerForm", "actionFilterGames", nullptr));
        BacklogManagerForm_NextGameGroup->setTitle(QApplication::translate("BacklogManagerForm", "Next Game", nullptr));
        BacklogManagerForm_NextGameTitle->setText(QString());
        BacklogManagerForm_NextGamePlatform->setText(QString());
        BacklogManagerForm_NextGameChooseButton->setText(QApplication::translate("BacklogManagerForm", "Choose Again", nullptr));
        BacklogManagerForm_StatsGroup->setTitle(QApplication::translate("BacklogManagerForm", "Stats", nullptr));
        StatsForm_PCStats->setTitle(QApplication::translate("BacklogManagerForm", "PC", nullptr));
        StatsForm_PCNotPlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Not Played:", nullptr));
        StatsForm_PCNotPlayed->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PCPlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Played:", nullptr));
        StatsForm_PCPlayed->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PCCompleteLbl->setText(QApplication::translate("BacklogManagerForm", "Complete:", nullptr));
        StatsForm_PCComplete->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PCAbandonedLbl->setText(QApplication::translate("BacklogManagerForm", "Abandoned:", nullptr));
        StatsForm_PCAbandoned->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PCPercentLbl->setText(QApplication::translate("BacklogManagerForm", "Done Percentage:", nullptr));
        StatsForm_PCPercent->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PS4Stats->setTitle(QApplication::translate("BacklogManagerForm", "Playstation 4", nullptr));
        StatsForm_PS4NotPlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Not Played:", nullptr));
        StatsForm_PS4NotPlayed->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PS4PlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Played:", nullptr));
        StatsForm_PS4Played->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PS4CompleteLbl->setText(QApplication::translate("BacklogManagerForm", "Complete:", nullptr));
        StatsForm_PS4Complete->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PS4AbandonedLbl->setText(QApplication::translate("BacklogManagerForm", "Abandoned:", nullptr));
        StatsForm_PS4Abandoned->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PS4PercentLbl->setText(QApplication::translate("BacklogManagerForm", "Done Percentage:", nullptr));
        StatsForm_PS4Percent->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PS3Stats->setTitle(QApplication::translate("BacklogManagerForm", "Playstation 3", nullptr));
        StatsForm_PS3NotPlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Not Played:", nullptr));
        StatsForm_PS3NotPlayed->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PS3PlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Played:", nullptr));
        StatsForm_PS3Played->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PS3CompleteLbl->setText(QApplication::translate("BacklogManagerForm", "Complete:", nullptr));
        StatsForm_PS3Complete->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PS3AbandonedLbl->setText(QApplication::translate("BacklogManagerForm", "Abandoned:", nullptr));
        StatsForm_PS3Abandoned->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PS3PercentLbl->setText(QApplication::translate("BacklogManagerForm", "Done Percentage:", nullptr));
        StatsForm_PS3Percent->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PSVitaStats->setTitle(QApplication::translate("BacklogManagerForm", "Playstation Vita", nullptr));
        StatsForm_PSVitaNotPlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Not Played:", nullptr));
        StatsForm_PSVitaNotPlayed->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PSVitaPlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Played:", nullptr));
        StatsForm_PSVitaPlayed->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PSVitaCompleteLbl->setText(QApplication::translate("BacklogManagerForm", "Complete:", nullptr));
        StatsForm_PSVitaComplete->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PSVitaAbandonedLbl->setText(QApplication::translate("BacklogManagerForm", "Abandoned:", nullptr));
        StatsForm_PSVitaAbandoned->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        StatsForm_PSVitaPercentLbl->setText(QApplication::translate("BacklogManagerForm", "Done Percentage:", nullptr));
        StatsForm_PSVitaPercent->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_GameListGroup->setTitle(QApplication::translate("BacklogManagerForm", "Game List", nullptr));
        QTableWidgetItem *___qtablewidgetitem = BacklogManagerForm_GameList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BacklogManagerForm", "Game Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = BacklogManagerForm_GameList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BacklogManagerForm", "Platform", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = BacklogManagerForm_GameList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("BacklogManagerForm", "Play Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = BacklogManagerForm_GameList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("BacklogManagerForm", "Owned", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = BacklogManagerForm_GameList->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("BacklogManagerForm", "Added", nullptr));
        menuFile->setTitle(QApplication::translate("BacklogManagerForm", "File", nullptr));
        menuFilters->setTitle(QApplication::translate("BacklogManagerForm", "Filters", nullptr));
        menuPlayed_Status->setTitle(QApplication::translate("BacklogManagerForm", "Played Status", nullptr));
        menuPlatform->setTitle(QApplication::translate("BacklogManagerForm", "Platform", nullptr));
        menuOwned_Status->setTitle(QApplication::translate("BacklogManagerForm", "Owned Status", nullptr));
        menuHelp->setTitle(QApplication::translate("BacklogManagerForm", "Help", nullptr));
        toolBar->setWindowTitle(QApplication::translate("BacklogManagerForm", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BacklogManagerForm: public Ui_BacklogManagerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKLOGMANAGERFORM_H
