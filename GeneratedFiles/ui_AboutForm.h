/********************************************************************************
** Form generated from reading UI file 'AboutForm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTFORM_H
#define UI_ABOUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *AboutForm_Logo;
    QLabel *AboutForm_DeveloperName;
    QLabel *AboutForm_LinkedIn;
    QLabel *AboutForm_GitHub;

    void setupUi(QDialog *AboutForm)
    {
        if (AboutForm->objectName().isEmpty())
            AboutForm->setObjectName(QStringLiteral("AboutForm"));
        AboutForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(AboutForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        AboutForm_Logo = new QLabel(AboutForm);
        AboutForm_Logo->setObjectName(QStringLiteral("AboutForm_Logo"));
        AboutForm_Logo->setMinimumSize(QSize(131, 81));
        AboutForm_Logo->setLayoutDirection(Qt::LeftToRight);
        AboutForm_Logo->setPixmap(QPixmap(QString::fromUtf8(":/BacklogManagerForm/Resources/ApplicationIcon.ico")));
        AboutForm_Logo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(AboutForm_Logo);

        AboutForm_DeveloperName = new QLabel(AboutForm);
        AboutForm_DeveloperName->setObjectName(QStringLiteral("AboutForm_DeveloperName"));
        AboutForm_DeveloperName->setMinimumSize(QSize(164, 16));
        AboutForm_DeveloperName->setMaximumSize(QSize(16777215, 16));
        QFont font;
        font.setPointSize(10);
        AboutForm_DeveloperName->setFont(font);
        AboutForm_DeveloperName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(AboutForm_DeveloperName);

        AboutForm_LinkedIn = new QLabel(AboutForm);
        AboutForm_LinkedIn->setObjectName(QStringLiteral("AboutForm_LinkedIn"));
        AboutForm_LinkedIn->setMinimumSize(QSize(140, 16));
        AboutForm_LinkedIn->setMaximumSize(QSize(16777215, 16));
        AboutForm_LinkedIn->setFont(font);
        AboutForm_LinkedIn->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(AboutForm_LinkedIn);

        AboutForm_GitHub = new QLabel(AboutForm);
        AboutForm_GitHub->setObjectName(QStringLiteral("AboutForm_GitHub"));
        AboutForm_GitHub->setMinimumSize(QSize(140, 16));
        AboutForm_GitHub->setMaximumSize(QSize(16777215, 16));
        AboutForm_GitHub->setFont(font);
        AboutForm_GitHub->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(AboutForm_GitHub);


        retranslateUi(AboutForm);

        QMetaObject::connectSlotsByName(AboutForm);
    } // setupUi

    void retranslateUi(QDialog *AboutForm)
    {
        AboutForm->setWindowTitle(QApplication::translate("AboutForm", "Dialog", Q_NULLPTR));
        AboutForm_Logo->setText(QString());
        AboutForm_DeveloperName->setText(QApplication::translate("AboutForm", "Developer: Matthew Jacques", Q_NULLPTR));
        AboutForm_LinkedIn->setText(QApplication::translate("AboutForm", "<a href=\"https://www.linkedin.com/in/matthew-jacques-94671255/\">LinkedIn</a>", Q_NULLPTR));
        AboutForm_GitHub->setText(QApplication::translate("AboutForm", "<a href=\"https://github.com/MattyJacques\">GitHub</a>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutForm: public Ui_AboutForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTFORM_H
