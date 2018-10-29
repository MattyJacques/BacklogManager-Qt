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
    QGroupBox *BacklogManagerForm_PCStats;
    QFormLayout *formLayout_4;
    QLabel *BacklogManagerForm_PCNotPlayedLbl;
    QLabel *BacklogManagerForm_PCNotPlayed;
    QLabel *BacklogManagerForm_PCPlayedLbl;
    QLabel *BacklogManagerForm_PCPlayed;
    QLabel *BacklogManagerForm_PCCompleteLbl;
    QLabel *BacklogManagerForm_PCComplete;
    QLabel *BacklogManagerForm_PCAbandonedLbl;
    QLabel *BacklogManagerForm_PCAbandoned;
    QLabel *BacklogManagerForm_PCPercentLbl;
    QLabel *BacklogManagerForm_PCPercent;
    QGroupBox *BacklogManagerForm_PS4Stats;
    QFormLayout *formLayout_3;
    QLabel *BacklogManagerForm_PS4NotPlayedLbl;
    QLabel *BacklogManagerForm_PS4NotPlayed;
    QLabel *BacklogManagerForm_PS4PlayedLbl;
    QLabel *BacklogManagerForm_PS4Played;
    QLabel *BacklogManagerForm_PS4CompleteLbl;
    QLabel *BacklogManagerForm_PS4Complete;
    QLabel *BacklogManagerForm_PS4AbandonedLbl;
    QLabel *BacklogManagerForm_PS4Abandoned;
    QLabel *BacklogManagerForm_PS4PercentLbl;
    QLabel *BacklogManagerForm_PS4Percent;
    QGroupBox *BacklogManagerForm_PS3Stats;
    QFormLayout *formLayout_2;
    QLabel *BacklogManagerForm_PS3NotPlayedLbl;
    QLabel *BacklogManagerForm_PS3NotPlayed;
    QLabel *BacklogManagerForm_PS3PlayedLbl;
    QLabel *BacklogManagerForm_PS3Played;
    QLabel *BacklogManagerForm_PS3CompleteLbl;
    QLabel *BacklogManagerForm_PS3Complete;
    QLabel *BacklogManagerForm_PS3AbandonedLbl;
    QLabel *BacklogManagerForm_PS3Abandoned;
    QLabel *BacklogManagerForm_PS3PercentLbl;
    QLabel *BacklogManagerForm_PS3Percent;
    QGroupBox *BacklogManagerForm_PSVitaStats;
    QFormLayout *formLayout;
    QLabel *BacklogManagerForm_PSVitaNotPlayedLbl;
    QLabel *BacklogManagerForm_PSVitaNotPlayed;
    QLabel *BacklogManagerForm_PSVitaPlayedLbl;
    QLabel *BacklogManagerForm_PSVitaPlayed;
    QLabel *BacklogManagerForm_PSVitaCompleteLbl;
    QLabel *BacklogManagerForm_PSVitaComplete;
    QLabel *BacklogManagerForm_PSVitaAbandonedLbl;
    QLabel *BacklogManagerForm_PSVitaAbandoned;
    QLabel *BacklogManagerForm_PSVitaPercentLbl;
    QLabel *BacklogManagerForm_PSVitaPercent;
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
        BacklogManagerForm_PCStats = new QGroupBox(BacklogManagerForm_StatsGroup);
        BacklogManagerForm_PCStats->setObjectName(QStringLiteral("BacklogManagerForm_PCStats"));
        QFont font1;
        font1.setPointSize(10);
        BacklogManagerForm_PCStats->setFont(font1);
        formLayout_4 = new QFormLayout(BacklogManagerForm_PCStats);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        BacklogManagerForm_PCNotPlayedLbl = new QLabel(BacklogManagerForm_PCStats);
        BacklogManagerForm_PCNotPlayedLbl->setObjectName(QStringLiteral("BacklogManagerForm_PCNotPlayedLbl"));
        BacklogManagerForm_PCNotPlayedLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PCNotPlayedLbl->setFont(font1);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, BacklogManagerForm_PCNotPlayedLbl);

        BacklogManagerForm_PCNotPlayed = new QLabel(BacklogManagerForm_PCStats);
        BacklogManagerForm_PCNotPlayed->setObjectName(QStringLiteral("BacklogManagerForm_PCNotPlayed"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, BacklogManagerForm_PCNotPlayed);

        BacklogManagerForm_PCPlayedLbl = new QLabel(BacklogManagerForm_PCStats);
        BacklogManagerForm_PCPlayedLbl->setObjectName(QStringLiteral("BacklogManagerForm_PCPlayedLbl"));
        BacklogManagerForm_PCPlayedLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PCPlayedLbl->setFont(font1);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, BacklogManagerForm_PCPlayedLbl);

        BacklogManagerForm_PCPlayed = new QLabel(BacklogManagerForm_PCStats);
        BacklogManagerForm_PCPlayed->setObjectName(QStringLiteral("BacklogManagerForm_PCPlayed"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, BacklogManagerForm_PCPlayed);

        BacklogManagerForm_PCCompleteLbl = new QLabel(BacklogManagerForm_PCStats);
        BacklogManagerForm_PCCompleteLbl->setObjectName(QStringLiteral("BacklogManagerForm_PCCompleteLbl"));
        BacklogManagerForm_PCCompleteLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PCCompleteLbl->setFont(font1);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, BacklogManagerForm_PCCompleteLbl);

        BacklogManagerForm_PCComplete = new QLabel(BacklogManagerForm_PCStats);
        BacklogManagerForm_PCComplete->setObjectName(QStringLiteral("BacklogManagerForm_PCComplete"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, BacklogManagerForm_PCComplete);

        BacklogManagerForm_PCAbandonedLbl = new QLabel(BacklogManagerForm_PCStats);
        BacklogManagerForm_PCAbandonedLbl->setObjectName(QStringLiteral("BacklogManagerForm_PCAbandonedLbl"));
        BacklogManagerForm_PCAbandonedLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PCAbandonedLbl->setFont(font1);

        formLayout_4->setWidget(3, QFormLayout::LabelRole, BacklogManagerForm_PCAbandonedLbl);

        BacklogManagerForm_PCAbandoned = new QLabel(BacklogManagerForm_PCStats);
        BacklogManagerForm_PCAbandoned->setObjectName(QStringLiteral("BacklogManagerForm_PCAbandoned"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, BacklogManagerForm_PCAbandoned);

        BacklogManagerForm_PCPercentLbl = new QLabel(BacklogManagerForm_PCStats);
        BacklogManagerForm_PCPercentLbl->setObjectName(QStringLiteral("BacklogManagerForm_PCPercentLbl"));
        BacklogManagerForm_PCPercentLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PCPercentLbl->setFont(font1);

        formLayout_4->setWidget(4, QFormLayout::LabelRole, BacklogManagerForm_PCPercentLbl);

        BacklogManagerForm_PCPercent = new QLabel(BacklogManagerForm_PCStats);
        BacklogManagerForm_PCPercent->setObjectName(QStringLiteral("BacklogManagerForm_PCPercent"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, BacklogManagerForm_PCPercent);


        horizontalLayout_2->addWidget(BacklogManagerForm_PCStats);

        BacklogManagerForm_PS4Stats = new QGroupBox(BacklogManagerForm_StatsGroup);
        BacklogManagerForm_PS4Stats->setObjectName(QStringLiteral("BacklogManagerForm_PS4Stats"));
        BacklogManagerForm_PS4Stats->setFont(font1);
        formLayout_3 = new QFormLayout(BacklogManagerForm_PS4Stats);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        BacklogManagerForm_PS4NotPlayedLbl = new QLabel(BacklogManagerForm_PS4Stats);
        BacklogManagerForm_PS4NotPlayedLbl->setObjectName(QStringLiteral("BacklogManagerForm_PS4NotPlayedLbl"));
        BacklogManagerForm_PS4NotPlayedLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PS4NotPlayedLbl->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, BacklogManagerForm_PS4NotPlayedLbl);

        BacklogManagerForm_PS4NotPlayed = new QLabel(BacklogManagerForm_PS4Stats);
        BacklogManagerForm_PS4NotPlayed->setObjectName(QStringLiteral("BacklogManagerForm_PS4NotPlayed"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, BacklogManagerForm_PS4NotPlayed);

        BacklogManagerForm_PS4PlayedLbl = new QLabel(BacklogManagerForm_PS4Stats);
        BacklogManagerForm_PS4PlayedLbl->setObjectName(QStringLiteral("BacklogManagerForm_PS4PlayedLbl"));
        BacklogManagerForm_PS4PlayedLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PS4PlayedLbl->setFont(font1);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, BacklogManagerForm_PS4PlayedLbl);

        BacklogManagerForm_PS4Played = new QLabel(BacklogManagerForm_PS4Stats);
        BacklogManagerForm_PS4Played->setObjectName(QStringLiteral("BacklogManagerForm_PS4Played"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, BacklogManagerForm_PS4Played);

        BacklogManagerForm_PS4CompleteLbl = new QLabel(BacklogManagerForm_PS4Stats);
        BacklogManagerForm_PS4CompleteLbl->setObjectName(QStringLiteral("BacklogManagerForm_PS4CompleteLbl"));
        BacklogManagerForm_PS4CompleteLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PS4CompleteLbl->setFont(font1);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, BacklogManagerForm_PS4CompleteLbl);

        BacklogManagerForm_PS4Complete = new QLabel(BacklogManagerForm_PS4Stats);
        BacklogManagerForm_PS4Complete->setObjectName(QStringLiteral("BacklogManagerForm_PS4Complete"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, BacklogManagerForm_PS4Complete);

        BacklogManagerForm_PS4AbandonedLbl = new QLabel(BacklogManagerForm_PS4Stats);
        BacklogManagerForm_PS4AbandonedLbl->setObjectName(QStringLiteral("BacklogManagerForm_PS4AbandonedLbl"));
        BacklogManagerForm_PS4AbandonedLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PS4AbandonedLbl->setFont(font1);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, BacklogManagerForm_PS4AbandonedLbl);

        BacklogManagerForm_PS4Abandoned = new QLabel(BacklogManagerForm_PS4Stats);
        BacklogManagerForm_PS4Abandoned->setObjectName(QStringLiteral("BacklogManagerForm_PS4Abandoned"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, BacklogManagerForm_PS4Abandoned);

        BacklogManagerForm_PS4PercentLbl = new QLabel(BacklogManagerForm_PS4Stats);
        BacklogManagerForm_PS4PercentLbl->setObjectName(QStringLiteral("BacklogManagerForm_PS4PercentLbl"));
        BacklogManagerForm_PS4PercentLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PS4PercentLbl->setFont(font1);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, BacklogManagerForm_PS4PercentLbl);

        BacklogManagerForm_PS4Percent = new QLabel(BacklogManagerForm_PS4Stats);
        BacklogManagerForm_PS4Percent->setObjectName(QStringLiteral("BacklogManagerForm_PS4Percent"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, BacklogManagerForm_PS4Percent);


        horizontalLayout_2->addWidget(BacklogManagerForm_PS4Stats);

        BacklogManagerForm_PS3Stats = new QGroupBox(BacklogManagerForm_StatsGroup);
        BacklogManagerForm_PS3Stats->setObjectName(QStringLiteral("BacklogManagerForm_PS3Stats"));
        BacklogManagerForm_PS3Stats->setFont(font1);
        formLayout_2 = new QFormLayout(BacklogManagerForm_PS3Stats);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        BacklogManagerForm_PS3NotPlayedLbl = new QLabel(BacklogManagerForm_PS3Stats);
        BacklogManagerForm_PS3NotPlayedLbl->setObjectName(QStringLiteral("BacklogManagerForm_PS3NotPlayedLbl"));
        BacklogManagerForm_PS3NotPlayedLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PS3NotPlayedLbl->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, BacklogManagerForm_PS3NotPlayedLbl);

        BacklogManagerForm_PS3NotPlayed = new QLabel(BacklogManagerForm_PS3Stats);
        BacklogManagerForm_PS3NotPlayed->setObjectName(QStringLiteral("BacklogManagerForm_PS3NotPlayed"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, BacklogManagerForm_PS3NotPlayed);

        BacklogManagerForm_PS3PlayedLbl = new QLabel(BacklogManagerForm_PS3Stats);
        BacklogManagerForm_PS3PlayedLbl->setObjectName(QStringLiteral("BacklogManagerForm_PS3PlayedLbl"));
        BacklogManagerForm_PS3PlayedLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PS3PlayedLbl->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, BacklogManagerForm_PS3PlayedLbl);

        BacklogManagerForm_PS3Played = new QLabel(BacklogManagerForm_PS3Stats);
        BacklogManagerForm_PS3Played->setObjectName(QStringLiteral("BacklogManagerForm_PS3Played"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, BacklogManagerForm_PS3Played);

        BacklogManagerForm_PS3CompleteLbl = new QLabel(BacklogManagerForm_PS3Stats);
        BacklogManagerForm_PS3CompleteLbl->setObjectName(QStringLiteral("BacklogManagerForm_PS3CompleteLbl"));
        BacklogManagerForm_PS3CompleteLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PS3CompleteLbl->setFont(font1);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, BacklogManagerForm_PS3CompleteLbl);

        BacklogManagerForm_PS3Complete = new QLabel(BacklogManagerForm_PS3Stats);
        BacklogManagerForm_PS3Complete->setObjectName(QStringLiteral("BacklogManagerForm_PS3Complete"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, BacklogManagerForm_PS3Complete);

        BacklogManagerForm_PS3AbandonedLbl = new QLabel(BacklogManagerForm_PS3Stats);
        BacklogManagerForm_PS3AbandonedLbl->setObjectName(QStringLiteral("BacklogManagerForm_PS3AbandonedLbl"));
        BacklogManagerForm_PS3AbandonedLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PS3AbandonedLbl->setFont(font1);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, BacklogManagerForm_PS3AbandonedLbl);

        BacklogManagerForm_PS3Abandoned = new QLabel(BacklogManagerForm_PS3Stats);
        BacklogManagerForm_PS3Abandoned->setObjectName(QStringLiteral("BacklogManagerForm_PS3Abandoned"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, BacklogManagerForm_PS3Abandoned);

        BacklogManagerForm_PS3PercentLbl = new QLabel(BacklogManagerForm_PS3Stats);
        BacklogManagerForm_PS3PercentLbl->setObjectName(QStringLiteral("BacklogManagerForm_PS3PercentLbl"));
        BacklogManagerForm_PS3PercentLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PS3PercentLbl->setFont(font1);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, BacklogManagerForm_PS3PercentLbl);

        BacklogManagerForm_PS3Percent = new QLabel(BacklogManagerForm_PS3Stats);
        BacklogManagerForm_PS3Percent->setObjectName(QStringLiteral("BacklogManagerForm_PS3Percent"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, BacklogManagerForm_PS3Percent);


        horizontalLayout_2->addWidget(BacklogManagerForm_PS3Stats);

        BacklogManagerForm_PSVitaStats = new QGroupBox(BacklogManagerForm_StatsGroup);
        BacklogManagerForm_PSVitaStats->setObjectName(QStringLiteral("BacklogManagerForm_PSVitaStats"));
        BacklogManagerForm_PSVitaStats->setFont(font1);
        formLayout = new QFormLayout(BacklogManagerForm_PSVitaStats);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        BacklogManagerForm_PSVitaNotPlayedLbl = new QLabel(BacklogManagerForm_PSVitaStats);
        BacklogManagerForm_PSVitaNotPlayedLbl->setObjectName(QStringLiteral("BacklogManagerForm_PSVitaNotPlayedLbl"));
        BacklogManagerForm_PSVitaNotPlayedLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PSVitaNotPlayedLbl->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, BacklogManagerForm_PSVitaNotPlayedLbl);

        BacklogManagerForm_PSVitaNotPlayed = new QLabel(BacklogManagerForm_PSVitaStats);
        BacklogManagerForm_PSVitaNotPlayed->setObjectName(QStringLiteral("BacklogManagerForm_PSVitaNotPlayed"));

        formLayout->setWidget(0, QFormLayout::FieldRole, BacklogManagerForm_PSVitaNotPlayed);

        BacklogManagerForm_PSVitaPlayedLbl = new QLabel(BacklogManagerForm_PSVitaStats);
        BacklogManagerForm_PSVitaPlayedLbl->setObjectName(QStringLiteral("BacklogManagerForm_PSVitaPlayedLbl"));
        BacklogManagerForm_PSVitaPlayedLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PSVitaPlayedLbl->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, BacklogManagerForm_PSVitaPlayedLbl);

        BacklogManagerForm_PSVitaPlayed = new QLabel(BacklogManagerForm_PSVitaStats);
        BacklogManagerForm_PSVitaPlayed->setObjectName(QStringLiteral("BacklogManagerForm_PSVitaPlayed"));

        formLayout->setWidget(1, QFormLayout::FieldRole, BacklogManagerForm_PSVitaPlayed);

        BacklogManagerForm_PSVitaCompleteLbl = new QLabel(BacklogManagerForm_PSVitaStats);
        BacklogManagerForm_PSVitaCompleteLbl->setObjectName(QStringLiteral("BacklogManagerForm_PSVitaCompleteLbl"));
        BacklogManagerForm_PSVitaCompleteLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PSVitaCompleteLbl->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, BacklogManagerForm_PSVitaCompleteLbl);

        BacklogManagerForm_PSVitaComplete = new QLabel(BacklogManagerForm_PSVitaStats);
        BacklogManagerForm_PSVitaComplete->setObjectName(QStringLiteral("BacklogManagerForm_PSVitaComplete"));

        formLayout->setWidget(2, QFormLayout::FieldRole, BacklogManagerForm_PSVitaComplete);

        BacklogManagerForm_PSVitaAbandonedLbl = new QLabel(BacklogManagerForm_PSVitaStats);
        BacklogManagerForm_PSVitaAbandonedLbl->setObjectName(QStringLiteral("BacklogManagerForm_PSVitaAbandonedLbl"));
        BacklogManagerForm_PSVitaAbandonedLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PSVitaAbandonedLbl->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, BacklogManagerForm_PSVitaAbandonedLbl);

        BacklogManagerForm_PSVitaAbandoned = new QLabel(BacklogManagerForm_PSVitaStats);
        BacklogManagerForm_PSVitaAbandoned->setObjectName(QStringLiteral("BacklogManagerForm_PSVitaAbandoned"));

        formLayout->setWidget(3, QFormLayout::FieldRole, BacklogManagerForm_PSVitaAbandoned);

        BacklogManagerForm_PSVitaPercentLbl = new QLabel(BacklogManagerForm_PSVitaStats);
        BacklogManagerForm_PSVitaPercentLbl->setObjectName(QStringLiteral("BacklogManagerForm_PSVitaPercentLbl"));
        BacklogManagerForm_PSVitaPercentLbl->setMinimumSize(QSize(121, 21));
        BacklogManagerForm_PSVitaPercentLbl->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, BacklogManagerForm_PSVitaPercentLbl);

        BacklogManagerForm_PSVitaPercent = new QLabel(BacklogManagerForm_PSVitaStats);
        BacklogManagerForm_PSVitaPercent->setObjectName(QStringLiteral("BacklogManagerForm_PSVitaPercent"));

        formLayout->setWidget(4, QFormLayout::FieldRole, BacklogManagerForm_PSVitaPercent);


        horizontalLayout_2->addWidget(BacklogManagerForm_PSVitaStats);


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
        BacklogManagerForm_PCStats->setTitle(QApplication::translate("BacklogManagerForm", "PC", nullptr));
        BacklogManagerForm_PCNotPlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Not Played:", nullptr));
        BacklogManagerForm_PCNotPlayed->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PCPlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Played:", nullptr));
        BacklogManagerForm_PCPlayed->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PCCompleteLbl->setText(QApplication::translate("BacklogManagerForm", "Complete:", nullptr));
        BacklogManagerForm_PCComplete->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PCAbandonedLbl->setText(QApplication::translate("BacklogManagerForm", "Abandoned:", nullptr));
        BacklogManagerForm_PCAbandoned->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PCPercentLbl->setText(QApplication::translate("BacklogManagerForm", "Done Percentage:", nullptr));
        BacklogManagerForm_PCPercent->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PS4Stats->setTitle(QApplication::translate("BacklogManagerForm", "Playstation 4", nullptr));
        BacklogManagerForm_PS4NotPlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Not Played:", nullptr));
        BacklogManagerForm_PS4NotPlayed->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PS4PlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Played:", nullptr));
        BacklogManagerForm_PS4Played->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PS4CompleteLbl->setText(QApplication::translate("BacklogManagerForm", "Complete:", nullptr));
        BacklogManagerForm_PS4Complete->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PS4AbandonedLbl->setText(QApplication::translate("BacklogManagerForm", "Abandoned:", nullptr));
        BacklogManagerForm_PS4Abandoned->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PS4PercentLbl->setText(QApplication::translate("BacklogManagerForm", "Done Percentage:", nullptr));
        BacklogManagerForm_PS4Percent->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PS3Stats->setTitle(QApplication::translate("BacklogManagerForm", "Playstation 3", nullptr));
        BacklogManagerForm_PS3NotPlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Not Played:", nullptr));
        BacklogManagerForm_PS3NotPlayed->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PS3PlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Played:", nullptr));
        BacklogManagerForm_PS3Played->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PS3CompleteLbl->setText(QApplication::translate("BacklogManagerForm", "Complete:", nullptr));
        BacklogManagerForm_PS3Complete->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PS3AbandonedLbl->setText(QApplication::translate("BacklogManagerForm", "Abandoned:", nullptr));
        BacklogManagerForm_PS3Abandoned->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PS3PercentLbl->setText(QApplication::translate("BacklogManagerForm", "Done Percentage:", nullptr));
        BacklogManagerForm_PS3Percent->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PSVitaStats->setTitle(QApplication::translate("BacklogManagerForm", "Playstation Vita", nullptr));
        BacklogManagerForm_PSVitaNotPlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Not Played:", nullptr));
        BacklogManagerForm_PSVitaNotPlayed->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PSVitaPlayedLbl->setText(QApplication::translate("BacklogManagerForm", "Played:", nullptr));
        BacklogManagerForm_PSVitaPlayed->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PSVitaCompleteLbl->setText(QApplication::translate("BacklogManagerForm", "Complete:", nullptr));
        BacklogManagerForm_PSVitaComplete->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PSVitaAbandonedLbl->setText(QApplication::translate("BacklogManagerForm", "Abandoned:", nullptr));
        BacklogManagerForm_PSVitaAbandoned->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
        BacklogManagerForm_PSVitaPercentLbl->setText(QApplication::translate("BacklogManagerForm", "Done Percentage:", nullptr));
        BacklogManagerForm_PSVitaPercent->setText(QApplication::translate("BacklogManagerForm", "Empty", nullptr));
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
