/********************************************************************************
** Form generated from reading UI file 'GameStats.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESTATS_H
#define UI_GAMESTATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StatsForm
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *StatsForm_PCStats;
    QGridLayout *gridLayout;
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
    QGridLayout *gridLayout_2;
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
    QGridLayout *gridLayout_3;
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
    QGridLayout *gridLayout_4;
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
    QGroupBox *StatsForm_TotalStats;
    QGridLayout *gridLayout_5;
    QLabel *StatsForm_TotalNotPlayedLbl;
    QLabel *StatsForm_TotalNotPlayed;
    QLabel *StatsForm_TotalPlayedLbl;
    QLabel *StatsForm_TotalPlayed;
    QLabel *StatsForm_TotalCompleteLbl;
    QLabel *StatsForm_TotalComplete;
    QLabel *StatsForm_TotalAbandonedLbl;
    QLabel *StatsForm_TotalAbandoned;
    QLabel *StatsForm_TotalPercentLbl;
    QLabel *StatsForm_TotalPercent;

    void setupUi(QDialog *StatsForm)
    {
        if (StatsForm->objectName().isEmpty())
            StatsForm->setObjectName(QString::fromUtf8("StatsForm"));
        StatsForm->resize(236, 890);
        StatsForm->setMinimumSize(QSize(236, 890));
        StatsForm->setMaximumSize(QSize(236, 890));
        verticalLayout = new QVBoxLayout(StatsForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        StatsForm_PCStats = new QGroupBox(StatsForm);
        StatsForm_PCStats->setObjectName(QString::fromUtf8("StatsForm_PCStats"));
        QFont font;
        font.setPointSize(10);
        StatsForm_PCStats->setFont(font);
        gridLayout = new QGridLayout(StatsForm_PCStats);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        StatsForm_PCNotPlayedLbl = new QLabel(StatsForm_PCStats);
        StatsForm_PCNotPlayedLbl->setObjectName(QString::fromUtf8("StatsForm_PCNotPlayedLbl"));
        StatsForm_PCNotPlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PCNotPlayedLbl->setFont(font);

        gridLayout->addWidget(StatsForm_PCNotPlayedLbl, 0, 0, 1, 1);

        StatsForm_PCNotPlayed = new QLabel(StatsForm_PCStats);
        StatsForm_PCNotPlayed->setObjectName(QString::fromUtf8("StatsForm_PCNotPlayed"));
        StatsForm_PCNotPlayed->setMinimumSize(QSize(71, 21));

        gridLayout->addWidget(StatsForm_PCNotPlayed, 0, 1, 1, 1);

        StatsForm_PCPlayedLbl = new QLabel(StatsForm_PCStats);
        StatsForm_PCPlayedLbl->setObjectName(QString::fromUtf8("StatsForm_PCPlayedLbl"));
        StatsForm_PCPlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PCPlayedLbl->setFont(font);

        gridLayout->addWidget(StatsForm_PCPlayedLbl, 1, 0, 1, 1);

        StatsForm_PCPlayed = new QLabel(StatsForm_PCStats);
        StatsForm_PCPlayed->setObjectName(QString::fromUtf8("StatsForm_PCPlayed"));
        StatsForm_PCPlayed->setMinimumSize(QSize(71, 21));

        gridLayout->addWidget(StatsForm_PCPlayed, 1, 1, 1, 1);

        StatsForm_PCCompleteLbl = new QLabel(StatsForm_PCStats);
        StatsForm_PCCompleteLbl->setObjectName(QString::fromUtf8("StatsForm_PCCompleteLbl"));
        StatsForm_PCCompleteLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PCCompleteLbl->setFont(font);

        gridLayout->addWidget(StatsForm_PCCompleteLbl, 2, 0, 1, 1);

        StatsForm_PCComplete = new QLabel(StatsForm_PCStats);
        StatsForm_PCComplete->setObjectName(QString::fromUtf8("StatsForm_PCComplete"));
        StatsForm_PCComplete->setMinimumSize(QSize(71, 21));

        gridLayout->addWidget(StatsForm_PCComplete, 2, 1, 1, 1);

        StatsForm_PCAbandonedLbl = new QLabel(StatsForm_PCStats);
        StatsForm_PCAbandonedLbl->setObjectName(QString::fromUtf8("StatsForm_PCAbandonedLbl"));
        StatsForm_PCAbandonedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PCAbandonedLbl->setFont(font);

        gridLayout->addWidget(StatsForm_PCAbandonedLbl, 3, 0, 1, 1);

        StatsForm_PCAbandoned = new QLabel(StatsForm_PCStats);
        StatsForm_PCAbandoned->setObjectName(QString::fromUtf8("StatsForm_PCAbandoned"));
        StatsForm_PCAbandoned->setMinimumSize(QSize(71, 21));

        gridLayout->addWidget(StatsForm_PCAbandoned, 3, 1, 1, 1);

        StatsForm_PCPercentLbl = new QLabel(StatsForm_PCStats);
        StatsForm_PCPercentLbl->setObjectName(QString::fromUtf8("StatsForm_PCPercentLbl"));
        StatsForm_PCPercentLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PCPercentLbl->setFont(font);

        gridLayout->addWidget(StatsForm_PCPercentLbl, 4, 0, 1, 1);

        StatsForm_PCPercent = new QLabel(StatsForm_PCStats);
        StatsForm_PCPercent->setObjectName(QString::fromUtf8("StatsForm_PCPercent"));
        StatsForm_PCPercent->setMinimumSize(QSize(71, 21));

        gridLayout->addWidget(StatsForm_PCPercent, 4, 1, 1, 1);


        verticalLayout->addWidget(StatsForm_PCStats);

        StatsForm_PS4Stats = new QGroupBox(StatsForm);
        StatsForm_PS4Stats->setObjectName(QString::fromUtf8("StatsForm_PS4Stats"));
        StatsForm_PS4Stats->setFont(font);
        gridLayout_2 = new QGridLayout(StatsForm_PS4Stats);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        StatsForm_PS4NotPlayedLbl = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4NotPlayedLbl->setObjectName(QString::fromUtf8("StatsForm_PS4NotPlayedLbl"));
        StatsForm_PS4NotPlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS4NotPlayedLbl->setFont(font);

        gridLayout_2->addWidget(StatsForm_PS4NotPlayedLbl, 0, 0, 1, 1);

        StatsForm_PS4NotPlayed = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4NotPlayed->setObjectName(QString::fromUtf8("StatsForm_PS4NotPlayed"));
        StatsForm_PS4NotPlayed->setMinimumSize(QSize(71, 21));

        gridLayout_2->addWidget(StatsForm_PS4NotPlayed, 0, 1, 1, 1);

        StatsForm_PS4PlayedLbl = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4PlayedLbl->setObjectName(QString::fromUtf8("StatsForm_PS4PlayedLbl"));
        StatsForm_PS4PlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS4PlayedLbl->setFont(font);

        gridLayout_2->addWidget(StatsForm_PS4PlayedLbl, 1, 0, 1, 1);

        StatsForm_PS4Played = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4Played->setObjectName(QString::fromUtf8("StatsForm_PS4Played"));
        StatsForm_PS4Played->setMinimumSize(QSize(71, 21));

        gridLayout_2->addWidget(StatsForm_PS4Played, 1, 1, 1, 1);

        StatsForm_PS4CompleteLbl = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4CompleteLbl->setObjectName(QString::fromUtf8("StatsForm_PS4CompleteLbl"));
        StatsForm_PS4CompleteLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS4CompleteLbl->setFont(font);

        gridLayout_2->addWidget(StatsForm_PS4CompleteLbl, 2, 0, 1, 1);

        StatsForm_PS4Complete = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4Complete->setObjectName(QString::fromUtf8("StatsForm_PS4Complete"));
        StatsForm_PS4Complete->setMinimumSize(QSize(71, 21));

        gridLayout_2->addWidget(StatsForm_PS4Complete, 2, 1, 1, 1);

        StatsForm_PS4AbandonedLbl = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4AbandonedLbl->setObjectName(QString::fromUtf8("StatsForm_PS4AbandonedLbl"));
        StatsForm_PS4AbandonedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS4AbandonedLbl->setFont(font);

        gridLayout_2->addWidget(StatsForm_PS4AbandonedLbl, 3, 0, 1, 1);

        StatsForm_PS4Abandoned = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4Abandoned->setObjectName(QString::fromUtf8("StatsForm_PS4Abandoned"));
        StatsForm_PS4Abandoned->setMinimumSize(QSize(71, 21));

        gridLayout_2->addWidget(StatsForm_PS4Abandoned, 3, 1, 1, 1);

        StatsForm_PS4PercentLbl = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4PercentLbl->setObjectName(QString::fromUtf8("StatsForm_PS4PercentLbl"));
        StatsForm_PS4PercentLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS4PercentLbl->setFont(font);

        gridLayout_2->addWidget(StatsForm_PS4PercentLbl, 4, 0, 1, 1);

        StatsForm_PS4Percent = new QLabel(StatsForm_PS4Stats);
        StatsForm_PS4Percent->setObjectName(QString::fromUtf8("StatsForm_PS4Percent"));
        StatsForm_PS4Percent->setMinimumSize(QSize(71, 21));

        gridLayout_2->addWidget(StatsForm_PS4Percent, 4, 1, 1, 1);


        verticalLayout->addWidget(StatsForm_PS4Stats);

        StatsForm_PS3Stats = new QGroupBox(StatsForm);
        StatsForm_PS3Stats->setObjectName(QString::fromUtf8("StatsForm_PS3Stats"));
        StatsForm_PS3Stats->setFont(font);
        gridLayout_3 = new QGridLayout(StatsForm_PS3Stats);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        StatsForm_PS3NotPlayedLbl = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3NotPlayedLbl->setObjectName(QString::fromUtf8("StatsForm_PS3NotPlayedLbl"));
        StatsForm_PS3NotPlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS3NotPlayedLbl->setFont(font);

        gridLayout_3->addWidget(StatsForm_PS3NotPlayedLbl, 0, 0, 1, 1);

        StatsForm_PS3NotPlayed = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3NotPlayed->setObjectName(QString::fromUtf8("StatsForm_PS3NotPlayed"));
        StatsForm_PS3NotPlayed->setMinimumSize(QSize(71, 21));

        gridLayout_3->addWidget(StatsForm_PS3NotPlayed, 0, 1, 1, 1);

        StatsForm_PS3PlayedLbl = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3PlayedLbl->setObjectName(QString::fromUtf8("StatsForm_PS3PlayedLbl"));
        StatsForm_PS3PlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS3PlayedLbl->setFont(font);

        gridLayout_3->addWidget(StatsForm_PS3PlayedLbl, 1, 0, 1, 1);

        StatsForm_PS3Played = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3Played->setObjectName(QString::fromUtf8("StatsForm_PS3Played"));
        StatsForm_PS3Played->setMinimumSize(QSize(71, 21));

        gridLayout_3->addWidget(StatsForm_PS3Played, 1, 1, 1, 1);

        StatsForm_PS3CompleteLbl = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3CompleteLbl->setObjectName(QString::fromUtf8("StatsForm_PS3CompleteLbl"));
        StatsForm_PS3CompleteLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS3CompleteLbl->setFont(font);

        gridLayout_3->addWidget(StatsForm_PS3CompleteLbl, 2, 0, 1, 1);

        StatsForm_PS3Complete = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3Complete->setObjectName(QString::fromUtf8("StatsForm_PS3Complete"));
        StatsForm_PS3Complete->setMinimumSize(QSize(71, 21));

        gridLayout_3->addWidget(StatsForm_PS3Complete, 2, 1, 1, 1);

        StatsForm_PS3AbandonedLbl = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3AbandonedLbl->setObjectName(QString::fromUtf8("StatsForm_PS3AbandonedLbl"));
        StatsForm_PS3AbandonedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS3AbandonedLbl->setFont(font);

        gridLayout_3->addWidget(StatsForm_PS3AbandonedLbl, 3, 0, 1, 1);

        StatsForm_PS3Abandoned = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3Abandoned->setObjectName(QString::fromUtf8("StatsForm_PS3Abandoned"));
        StatsForm_PS3Abandoned->setMinimumSize(QSize(71, 21));

        gridLayout_3->addWidget(StatsForm_PS3Abandoned, 3, 1, 1, 1);

        StatsForm_PS3PercentLbl = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3PercentLbl->setObjectName(QString::fromUtf8("StatsForm_PS3PercentLbl"));
        StatsForm_PS3PercentLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PS3PercentLbl->setFont(font);

        gridLayout_3->addWidget(StatsForm_PS3PercentLbl, 4, 0, 1, 1);

        StatsForm_PS3Percent = new QLabel(StatsForm_PS3Stats);
        StatsForm_PS3Percent->setObjectName(QString::fromUtf8("StatsForm_PS3Percent"));
        StatsForm_PS3Percent->setMinimumSize(QSize(71, 21));

        gridLayout_3->addWidget(StatsForm_PS3Percent, 4, 1, 1, 1);


        verticalLayout->addWidget(StatsForm_PS3Stats);

        StatsForm_PSVitaStats = new QGroupBox(StatsForm);
        StatsForm_PSVitaStats->setObjectName(QString::fromUtf8("StatsForm_PSVitaStats"));
        StatsForm_PSVitaStats->setFont(font);
        gridLayout_4 = new QGridLayout(StatsForm_PSVitaStats);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        StatsForm_PSVitaNotPlayedLbl = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaNotPlayedLbl->setObjectName(QString::fromUtf8("StatsForm_PSVitaNotPlayedLbl"));
        StatsForm_PSVitaNotPlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PSVitaNotPlayedLbl->setFont(font);

        gridLayout_4->addWidget(StatsForm_PSVitaNotPlayedLbl, 0, 0, 1, 1);

        StatsForm_PSVitaNotPlayed = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaNotPlayed->setObjectName(QString::fromUtf8("StatsForm_PSVitaNotPlayed"));
        StatsForm_PSVitaNotPlayed->setMinimumSize(QSize(71, 21));

        gridLayout_4->addWidget(StatsForm_PSVitaNotPlayed, 0, 1, 1, 1);

        StatsForm_PSVitaPlayedLbl = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaPlayedLbl->setObjectName(QString::fromUtf8("StatsForm_PSVitaPlayedLbl"));
        StatsForm_PSVitaPlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PSVitaPlayedLbl->setFont(font);

        gridLayout_4->addWidget(StatsForm_PSVitaPlayedLbl, 1, 0, 1, 1);

        StatsForm_PSVitaPlayed = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaPlayed->setObjectName(QString::fromUtf8("StatsForm_PSVitaPlayed"));
        StatsForm_PSVitaPlayed->setMinimumSize(QSize(71, 21));

        gridLayout_4->addWidget(StatsForm_PSVitaPlayed, 1, 1, 1, 1);

        StatsForm_PSVitaCompleteLbl = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaCompleteLbl->setObjectName(QString::fromUtf8("StatsForm_PSVitaCompleteLbl"));
        StatsForm_PSVitaCompleteLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PSVitaCompleteLbl->setFont(font);

        gridLayout_4->addWidget(StatsForm_PSVitaCompleteLbl, 2, 0, 1, 1);

        StatsForm_PSVitaComplete = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaComplete->setObjectName(QString::fromUtf8("StatsForm_PSVitaComplete"));
        StatsForm_PSVitaComplete->setMinimumSize(QSize(71, 21));

        gridLayout_4->addWidget(StatsForm_PSVitaComplete, 2, 1, 1, 1);

        StatsForm_PSVitaAbandonedLbl = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaAbandonedLbl->setObjectName(QString::fromUtf8("StatsForm_PSVitaAbandonedLbl"));
        StatsForm_PSVitaAbandonedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PSVitaAbandonedLbl->setFont(font);

        gridLayout_4->addWidget(StatsForm_PSVitaAbandonedLbl, 3, 0, 1, 1);

        StatsForm_PSVitaAbandoned = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaAbandoned->setObjectName(QString::fromUtf8("StatsForm_PSVitaAbandoned"));
        StatsForm_PSVitaAbandoned->setMinimumSize(QSize(71, 21));

        gridLayout_4->addWidget(StatsForm_PSVitaAbandoned, 3, 1, 1, 1);

        StatsForm_PSVitaPercentLbl = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaPercentLbl->setObjectName(QString::fromUtf8("StatsForm_PSVitaPercentLbl"));
        StatsForm_PSVitaPercentLbl->setMinimumSize(QSize(121, 21));
        StatsForm_PSVitaPercentLbl->setFont(font);

        gridLayout_4->addWidget(StatsForm_PSVitaPercentLbl, 4, 0, 1, 1);

        StatsForm_PSVitaPercent = new QLabel(StatsForm_PSVitaStats);
        StatsForm_PSVitaPercent->setObjectName(QString::fromUtf8("StatsForm_PSVitaPercent"));
        StatsForm_PSVitaPercent->setMinimumSize(QSize(71, 21));

        gridLayout_4->addWidget(StatsForm_PSVitaPercent, 4, 1, 1, 1);


        verticalLayout->addWidget(StatsForm_PSVitaStats);

        StatsForm_TotalStats = new QGroupBox(StatsForm);
        StatsForm_TotalStats->setObjectName(QString::fromUtf8("StatsForm_TotalStats"));
        StatsForm_TotalStats->setFont(font);
        gridLayout_5 = new QGridLayout(StatsForm_TotalStats);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        StatsForm_TotalNotPlayedLbl = new QLabel(StatsForm_TotalStats);
        StatsForm_TotalNotPlayedLbl->setObjectName(QString::fromUtf8("StatsForm_TotalNotPlayedLbl"));
        StatsForm_TotalNotPlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_TotalNotPlayedLbl->setFont(font);

        gridLayout_5->addWidget(StatsForm_TotalNotPlayedLbl, 0, 0, 1, 1);

        StatsForm_TotalNotPlayed = new QLabel(StatsForm_TotalStats);
        StatsForm_TotalNotPlayed->setObjectName(QString::fromUtf8("StatsForm_TotalNotPlayed"));
        StatsForm_TotalNotPlayed->setMinimumSize(QSize(71, 21));

        gridLayout_5->addWidget(StatsForm_TotalNotPlayed, 0, 1, 1, 1);

        StatsForm_TotalPlayedLbl = new QLabel(StatsForm_TotalStats);
        StatsForm_TotalPlayedLbl->setObjectName(QString::fromUtf8("StatsForm_TotalPlayedLbl"));
        StatsForm_TotalPlayedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_TotalPlayedLbl->setFont(font);

        gridLayout_5->addWidget(StatsForm_TotalPlayedLbl, 1, 0, 1, 1);

        StatsForm_TotalPlayed = new QLabel(StatsForm_TotalStats);
        StatsForm_TotalPlayed->setObjectName(QString::fromUtf8("StatsForm_TotalPlayed"));
        StatsForm_TotalPlayed->setMinimumSize(QSize(71, 21));

        gridLayout_5->addWidget(StatsForm_TotalPlayed, 1, 1, 1, 1);

        StatsForm_TotalCompleteLbl = new QLabel(StatsForm_TotalStats);
        StatsForm_TotalCompleteLbl->setObjectName(QString::fromUtf8("StatsForm_TotalCompleteLbl"));
        StatsForm_TotalCompleteLbl->setMinimumSize(QSize(121, 21));
        StatsForm_TotalCompleteLbl->setFont(font);

        gridLayout_5->addWidget(StatsForm_TotalCompleteLbl, 2, 0, 1, 1);

        StatsForm_TotalComplete = new QLabel(StatsForm_TotalStats);
        StatsForm_TotalComplete->setObjectName(QString::fromUtf8("StatsForm_TotalComplete"));
        StatsForm_TotalComplete->setMinimumSize(QSize(71, 21));

        gridLayout_5->addWidget(StatsForm_TotalComplete, 2, 1, 1, 1);

        StatsForm_TotalAbandonedLbl = new QLabel(StatsForm_TotalStats);
        StatsForm_TotalAbandonedLbl->setObjectName(QString::fromUtf8("StatsForm_TotalAbandonedLbl"));
        StatsForm_TotalAbandonedLbl->setMinimumSize(QSize(121, 21));
        StatsForm_TotalAbandonedLbl->setFont(font);

        gridLayout_5->addWidget(StatsForm_TotalAbandonedLbl, 3, 0, 1, 1);

        StatsForm_TotalAbandoned = new QLabel(StatsForm_TotalStats);
        StatsForm_TotalAbandoned->setObjectName(QString::fromUtf8("StatsForm_TotalAbandoned"));
        StatsForm_TotalAbandoned->setMinimumSize(QSize(71, 21));

        gridLayout_5->addWidget(StatsForm_TotalAbandoned, 3, 1, 1, 1);

        StatsForm_TotalPercentLbl = new QLabel(StatsForm_TotalStats);
        StatsForm_TotalPercentLbl->setObjectName(QString::fromUtf8("StatsForm_TotalPercentLbl"));
        StatsForm_TotalPercentLbl->setMinimumSize(QSize(121, 21));
        StatsForm_TotalPercentLbl->setFont(font);

        gridLayout_5->addWidget(StatsForm_TotalPercentLbl, 4, 0, 1, 1);

        StatsForm_TotalPercent = new QLabel(StatsForm_TotalStats);
        StatsForm_TotalPercent->setObjectName(QString::fromUtf8("StatsForm_TotalPercent"));
        StatsForm_TotalPercent->setMinimumSize(QSize(71, 21));

        gridLayout_5->addWidget(StatsForm_TotalPercent, 4, 1, 1, 1);


        verticalLayout->addWidget(StatsForm_TotalStats);


        retranslateUi(StatsForm);

        QMetaObject::connectSlotsByName(StatsForm);
    } // setupUi

    void retranslateUi(QDialog *StatsForm)
    {
        StatsForm->setWindowTitle(QApplication::translate("StatsForm", "Game Stats", nullptr));
        StatsForm_PCStats->setTitle(QApplication::translate("StatsForm", "PC", nullptr));
        StatsForm_PCNotPlayedLbl->setText(QApplication::translate("StatsForm", "Not Played:", nullptr));
        StatsForm_PCNotPlayed->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PCPlayedLbl->setText(QApplication::translate("StatsForm", "Played:", nullptr));
        StatsForm_PCPlayed->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PCCompleteLbl->setText(QApplication::translate("StatsForm", "Complete:", nullptr));
        StatsForm_PCComplete->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PCAbandonedLbl->setText(QApplication::translate("StatsForm", "Abandoned:", nullptr));
        StatsForm_PCAbandoned->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PCPercentLbl->setText(QApplication::translate("StatsForm", "Done Percentage:", nullptr));
        StatsForm_PCPercent->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PS4Stats->setTitle(QApplication::translate("StatsForm", "Playstation 4", nullptr));
        StatsForm_PS4NotPlayedLbl->setText(QApplication::translate("StatsForm", "Not Played:", nullptr));
        StatsForm_PS4NotPlayed->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PS4PlayedLbl->setText(QApplication::translate("StatsForm", "Played:", nullptr));
        StatsForm_PS4Played->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PS4CompleteLbl->setText(QApplication::translate("StatsForm", "Complete:", nullptr));
        StatsForm_PS4Complete->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PS4AbandonedLbl->setText(QApplication::translate("StatsForm", "Abandoned:", nullptr));
        StatsForm_PS4Abandoned->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PS4PercentLbl->setText(QApplication::translate("StatsForm", "Done Percentage:", nullptr));
        StatsForm_PS4Percent->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PS3Stats->setTitle(QApplication::translate("StatsForm", "Playstation 3", nullptr));
        StatsForm_PS3NotPlayedLbl->setText(QApplication::translate("StatsForm", "Not Played:", nullptr));
        StatsForm_PS3NotPlayed->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PS3PlayedLbl->setText(QApplication::translate("StatsForm", "Played:", nullptr));
        StatsForm_PS3Played->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PS3CompleteLbl->setText(QApplication::translate("StatsForm", "Complete:", nullptr));
        StatsForm_PS3Complete->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PS3AbandonedLbl->setText(QApplication::translate("StatsForm", "Abandoned:", nullptr));
        StatsForm_PS3Abandoned->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PS3PercentLbl->setText(QApplication::translate("StatsForm", "Done Percentage:", nullptr));
        StatsForm_PS3Percent->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PSVitaStats->setTitle(QApplication::translate("StatsForm", "Playstation Vita", nullptr));
        StatsForm_PSVitaNotPlayedLbl->setText(QApplication::translate("StatsForm", "Not Played:", nullptr));
        StatsForm_PSVitaNotPlayed->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PSVitaPlayedLbl->setText(QApplication::translate("StatsForm", "Played:", nullptr));
        StatsForm_PSVitaPlayed->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PSVitaCompleteLbl->setText(QApplication::translate("StatsForm", "Complete:", nullptr));
        StatsForm_PSVitaComplete->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PSVitaAbandonedLbl->setText(QApplication::translate("StatsForm", "Abandoned:", nullptr));
        StatsForm_PSVitaAbandoned->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_PSVitaPercentLbl->setText(QApplication::translate("StatsForm", "Done Percentage:", nullptr));
        StatsForm_PSVitaPercent->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_TotalStats->setTitle(QApplication::translate("StatsForm", "Total", nullptr));
        StatsForm_TotalNotPlayedLbl->setText(QApplication::translate("StatsForm", "Not Played:", nullptr));
        StatsForm_TotalNotPlayed->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_TotalPlayedLbl->setText(QApplication::translate("StatsForm", "Played:", nullptr));
        StatsForm_TotalPlayed->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_TotalCompleteLbl->setText(QApplication::translate("StatsForm", "Complete:", nullptr));
        StatsForm_TotalComplete->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_TotalAbandonedLbl->setText(QApplication::translate("StatsForm", "Abandoned:", nullptr));
        StatsForm_TotalAbandoned->setText(QApplication::translate("StatsForm", "Empty", nullptr));
        StatsForm_TotalPercentLbl->setText(QApplication::translate("StatsForm", "Done Percentage:", nullptr));
        StatsForm_TotalPercent->setText(QApplication::translate("StatsForm", "Empty", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatsForm: public Ui_StatsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESTATS_H
