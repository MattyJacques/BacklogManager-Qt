/********************************************************************************
** Form generated from reading UI file 'FilterForm.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERFORM_H
#define UI_FILTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FilterForm
{
public:
    QDialogButtonBox *FilterForm_ButtonBox;
    QGroupBox *FilterForm_PlayStatusGrp;
    QVBoxLayout *verticalLayout;
    QCheckBox *FilterForm_NotPlayed;
    QCheckBox *FilterForm_Played;
    QCheckBox *FilterForm_Complete;
    QCheckBox *FilterForm_Abandoned;
    QGroupBox *FilterForm_PlatformGrp;
    QCheckBox *FilterForm_PC;
    QCheckBox *FilterForm_PS4;
    QCheckBox *FilterForm_PS3;
    QCheckBox *FilterForm_PSVita;
    QGroupBox *FilterForm_OwnedGrp;
    QCheckBox *FilterForm_Owned;
    QCheckBox *FilterForm_NotOwned;

    void setupUi(QDialog *FilterForm)
    {
        if (FilterForm->objectName().isEmpty())
            FilterForm->setObjectName(QStringLiteral("FilterForm"));
        FilterForm->resize(492, 187);
        FilterForm->setMinimumSize(QSize(492, 187));
        FilterForm->setMaximumSize(QSize(492, 187));
        FilterForm_ButtonBox = new QDialogButtonBox(FilterForm);
        FilterForm_ButtonBox->setObjectName(QStringLiteral("FilterForm_ButtonBox"));
        FilterForm_ButtonBox->setGeometry(QRect(10, 150, 471, 32));
        FilterForm_ButtonBox->setOrientation(Qt::Horizontal);
        FilterForm_ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        FilterForm_PlayStatusGrp = new QGroupBox(FilterForm);
        FilterForm_PlayStatusGrp->setObjectName(QStringLiteral("FilterForm_PlayStatusGrp"));
        FilterForm_PlayStatusGrp->setGeometry(QRect(10, 10, 143, 134));
        FilterForm_PlayStatusGrp->setMinimumSize(QSize(143, 134));
        FilterForm_PlayStatusGrp->setMaximumSize(QSize(143, 134));
        QFont font;
        font.setPointSize(10);
        FilterForm_PlayStatusGrp->setFont(font);
        verticalLayout = new QVBoxLayout(FilterForm_PlayStatusGrp);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        FilterForm_NotPlayed = new QCheckBox(FilterForm_PlayStatusGrp);
        FilterForm_NotPlayed->setObjectName(QStringLiteral("FilterForm_NotPlayed"));
        FilterForm_NotPlayed->setMinimumSize(QSize(119, 20));
        FilterForm_NotPlayed->setFont(font);

        verticalLayout->addWidget(FilterForm_NotPlayed);

        FilterForm_Played = new QCheckBox(FilterForm_PlayStatusGrp);
        FilterForm_Played->setObjectName(QStringLiteral("FilterForm_Played"));
        FilterForm_Played->setMinimumSize(QSize(119, 20));
        FilterForm_Played->setFont(font);

        verticalLayout->addWidget(FilterForm_Played);

        FilterForm_Complete = new QCheckBox(FilterForm_PlayStatusGrp);
        FilterForm_Complete->setObjectName(QStringLiteral("FilterForm_Complete"));
        FilterForm_Complete->setMinimumSize(QSize(119, 20));
        FilterForm_Complete->setFont(font);

        verticalLayout->addWidget(FilterForm_Complete);

        FilterForm_Abandoned = new QCheckBox(FilterForm_PlayStatusGrp);
        FilterForm_Abandoned->setObjectName(QStringLiteral("FilterForm_Abandoned"));
        FilterForm_Abandoned->setMinimumSize(QSize(119, 20));
        FilterForm_Abandoned->setFont(font);

        verticalLayout->addWidget(FilterForm_Abandoned);

        FilterForm_PlatformGrp = new QGroupBox(FilterForm);
        FilterForm_PlatformGrp->setObjectName(QStringLiteral("FilterForm_PlatformGrp"));
        FilterForm_PlatformGrp->setGeometry(QRect(160, 10, 171, 131));
        FilterForm_PlatformGrp->setMinimumSize(QSize(171, 131));
        FilterForm_PlatformGrp->setMaximumSize(QSize(171, 131));
        FilterForm_PlatformGrp->setFont(font);
        FilterForm_PC = new QCheckBox(FilterForm_PlatformGrp);
        FilterForm_PC->setObjectName(QStringLiteral("FilterForm_PC"));
        FilterForm_PC->setGeometry(QRect(10, 26, 119, 20));
        FilterForm_PC->setMinimumSize(QSize(119, 20));
        FilterForm_PC->setFont(font);
        FilterForm_PS4 = new QCheckBox(FilterForm_PlatformGrp);
        FilterForm_PS4->setObjectName(QStringLiteral("FilterForm_PS4"));
        FilterForm_PS4->setGeometry(QRect(10, 52, 131, 20));
        FilterForm_PS4->setMinimumSize(QSize(119, 20));
        FilterForm_PS4->setFont(font);
        FilterForm_PS3 = new QCheckBox(FilterForm_PlatformGrp);
        FilterForm_PS3->setObjectName(QStringLiteral("FilterForm_PS3"));
        FilterForm_PS3->setGeometry(QRect(10, 78, 131, 20));
        FilterForm_PS3->setMinimumSize(QSize(119, 20));
        FilterForm_PS3->setFont(font);
        FilterForm_PSVita = new QCheckBox(FilterForm_PlatformGrp);
        FilterForm_PSVita->setObjectName(QStringLiteral("FilterForm_PSVita"));
        FilterForm_PSVita->setGeometry(QRect(10, 104, 146, 20));
        FilterForm_PSVita->setMinimumSize(QSize(119, 20));
        FilterForm_PSVita->setFont(font);
        FilterForm_OwnedGrp = new QGroupBox(FilterForm);
        FilterForm_OwnedGrp->setObjectName(QStringLiteral("FilterForm_OwnedGrp"));
        FilterForm_OwnedGrp->setGeometry(QRect(340, 10, 139, 134));
        FilterForm_OwnedGrp->setMinimumSize(QSize(139, 134));
        FilterForm_OwnedGrp->setMaximumSize(QSize(139, 134));
        FilterForm_OwnedGrp->setFont(font);
        FilterForm_Owned = new QCheckBox(FilterForm_OwnedGrp);
        FilterForm_Owned->setObjectName(QStringLiteral("FilterForm_Owned"));
        FilterForm_Owned->setGeometry(QRect(10, 26, 119, 20));
        FilterForm_Owned->setMinimumSize(QSize(119, 20));
        FilterForm_Owned->setMaximumSize(QSize(119, 20));
        FilterForm_Owned->setFont(font);
        FilterForm_NotOwned = new QCheckBox(FilterForm_OwnedGrp);
        FilterForm_NotOwned->setObjectName(QStringLiteral("FilterForm_NotOwned"));
        FilterForm_NotOwned->setGeometry(QRect(10, 52, 119, 20));
        FilterForm_NotOwned->setMinimumSize(QSize(119, 20));
        FilterForm_NotOwned->setMaximumSize(QSize(119, 20));
        FilterForm_NotOwned->setFont(font);

        retranslateUi(FilterForm);
        QObject::connect(FilterForm_ButtonBox, SIGNAL(accepted()), FilterForm, SLOT(accept()));
        QObject::connect(FilterForm_ButtonBox, SIGNAL(rejected()), FilterForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(FilterForm);
    } // setupUi

    void retranslateUi(QDialog *FilterForm)
    {
        FilterForm->setWindowTitle(QApplication::translate("FilterForm", "Dialog", nullptr));
        FilterForm_PlayStatusGrp->setTitle(QApplication::translate("FilterForm", "Play Status", nullptr));
        FilterForm_NotPlayed->setText(QApplication::translate("FilterForm", "Show Not Played", nullptr));
        FilterForm_Played->setText(QApplication::translate("FilterForm", "Show Played", nullptr));
        FilterForm_Complete->setText(QApplication::translate("FilterForm", "Show Complete", nullptr));
        FilterForm_Abandoned->setText(QApplication::translate("FilterForm", "Show Abandoned", nullptr));
        FilterForm_PlatformGrp->setTitle(QApplication::translate("FilterForm", "Platform", nullptr));
        FilterForm_PC->setText(QApplication::translate("FilterForm", "Show PC", nullptr));
        FilterForm_PS4->setText(QApplication::translate("FilterForm", "Show Playstation 4", nullptr));
        FilterForm_PS3->setText(QApplication::translate("FilterForm", "Show Playstation 3", nullptr));
        FilterForm_PSVita->setText(QApplication::translate("FilterForm", "Show Playstation Vita", nullptr));
        FilterForm_OwnedGrp->setTitle(QApplication::translate("FilterForm", "Owned Status", nullptr));
        FilterForm_Owned->setText(QApplication::translate("FilterForm", "Show Owned", nullptr));
        FilterForm_NotOwned->setText(QApplication::translate("FilterForm", "Show Not Owned", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterForm: public Ui_FilterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERFORM_H
