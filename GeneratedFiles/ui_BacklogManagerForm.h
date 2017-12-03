/********************************************************************************
** Form generated from reading UI file 'BacklogManagerForm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
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
#include <QtWidgets/QGroupBox>
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
    QVBoxLayout *verticalLayout_2;
    QGroupBox *BacklogManagerForm_NextGameGroup;
    QLabel *BacklogManagerForm_NextGameTitle;
    QLabel *BacklogManagerForm_NextGamePlatform;
    QComboBox *BacklogManagerForm_NextGameStatus;
    QPushButton *BacklogManagerForm_NextGameChooseButton;
    QGroupBox *BacklogManagerForm_GameListGroup;
    QVBoxLayout *verticalLayout;
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
        BacklogManagerForm->resize(831, 596);
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
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        BacklogManagerForm_NextGameGroup = new QGroupBox(centralWidget);
        BacklogManagerForm_NextGameGroup->setObjectName(QStringLiteral("BacklogManagerForm_NextGameGroup"));
        BacklogManagerForm_NextGameGroup->setMinimumSize(QSize(801, 61));
        BacklogManagerForm_NextGameGroup->setMaximumSize(QSize(801, 61));
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

        verticalLayout_2->addWidget(BacklogManagerForm_NextGameGroup);

        BacklogManagerForm_GameListGroup = new QGroupBox(centralWidget);
        BacklogManagerForm_GameListGroup->setObjectName(QStringLiteral("BacklogManagerForm_GameListGroup"));
        verticalLayout = new QVBoxLayout(BacklogManagerForm_GameListGroup);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
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

        verticalLayout->addWidget(BacklogManagerForm_GameList);


        verticalLayout_2->addWidget(BacklogManagerForm_GameListGroup);

        BacklogManagerForm->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BacklogManagerForm);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 831, 21));
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
        BacklogManagerForm->setWindowTitle(QApplication::translate("BacklogManagerForm", "Backlog Manager", Q_NULLPTR));
        actionAddGame->setText(QApplication::translate("BacklogManagerForm", "Add Game", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAddGame->setToolTip(QApplication::translate("BacklogManagerForm", "Add a game to the collection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionEditGame->setText(QApplication::translate("BacklogManagerForm", "Edit Game", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionEditGame->setToolTip(QApplication::translate("BacklogManagerForm", "Edit a game in the collection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionDeleteGame->setText(QApplication::translate("BacklogManagerForm", "Delete Game", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDeleteGame->setToolTip(QApplication::translate("BacklogManagerForm", "Delete a game from the collection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionImportCSV->setText(QApplication::translate("BacklogManagerForm", "Import .CSV", Q_NULLPTR));
        actionClose->setText(QApplication::translate("BacklogManagerForm", "Close", Q_NULLPTR));
        actionFilterNotPlayed->setText(QApplication::translate("BacklogManagerForm", "Not Played", Q_NULLPTR));
        actionFilterPlayed->setText(QApplication::translate("BacklogManagerForm", "Played", Q_NULLPTR));
        actionFilterComplete->setText(QApplication::translate("BacklogManagerForm", "Complete", Q_NULLPTR));
        actionFilterAbandoned->setText(QApplication::translate("BacklogManagerForm", "Abandoned", Q_NULLPTR));
        actionFilterPC->setText(QApplication::translate("BacklogManagerForm", "PC", Q_NULLPTR));
        actionFilterPS4->setText(QApplication::translate("BacklogManagerForm", "Playstation 4", Q_NULLPTR));
        actionFilterPS3->setText(QApplication::translate("BacklogManagerForm", "Playstation 3", Q_NULLPTR));
        actionFilterPSVita->setText(QApplication::translate("BacklogManagerForm", "Playstation Vita", Q_NULLPTR));
        actionFilterOwned->setText(QApplication::translate("BacklogManagerForm", "Owned", Q_NULLPTR));
        actionFilterNotOwned->setText(QApplication::translate("BacklogManagerForm", "Not Owned", Q_NULLPTR));
        actionShowStats->setText(QApplication::translate("BacklogManagerForm", "Show Stats", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowStats->setToolTip(QApplication::translate("BacklogManagerForm", "Show the stats dialog", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSetBackupPath->setText(QApplication::translate("BacklogManagerForm", "Set Backup Path", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetBackupPath->setToolTip(QApplication::translate("BacklogManagerForm", "Backups are processed on application close", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAbout->setText(QApplication::translate("BacklogManagerForm", "About", Q_NULLPTR));
        actionFilterGames->setText(QApplication::translate("BacklogManagerForm", "actionFilterGames", Q_NULLPTR));
        BacklogManagerForm_NextGameGroup->setTitle(QApplication::translate("BacklogManagerForm", "Next Game", Q_NULLPTR));
        BacklogManagerForm_NextGameTitle->setText(QString());
        BacklogManagerForm_NextGamePlatform->setText(QString());
        BacklogManagerForm_NextGameChooseButton->setText(QApplication::translate("BacklogManagerForm", "Choose Again", Q_NULLPTR));
        BacklogManagerForm_GameListGroup->setTitle(QApplication::translate("BacklogManagerForm", "Game List", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = BacklogManagerForm_GameList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BacklogManagerForm", "Game Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = BacklogManagerForm_GameList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BacklogManagerForm", "Platform", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = BacklogManagerForm_GameList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("BacklogManagerForm", "Play Status", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = BacklogManagerForm_GameList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("BacklogManagerForm", "Owned", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = BacklogManagerForm_GameList->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("BacklogManagerForm", "Added", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("BacklogManagerForm", "File", Q_NULLPTR));
        menuFilters->setTitle(QApplication::translate("BacklogManagerForm", "Filters", Q_NULLPTR));
        menuPlayed_Status->setTitle(QApplication::translate("BacklogManagerForm", "Played Status", Q_NULLPTR));
        menuPlatform->setTitle(QApplication::translate("BacklogManagerForm", "Platform", Q_NULLPTR));
        menuOwned_Status->setTitle(QApplication::translate("BacklogManagerForm", "Owned Status", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("BacklogManagerForm", "Help", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("BacklogManagerForm", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BacklogManagerForm: public Ui_BacklogManagerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKLOGMANAGERFORM_H
