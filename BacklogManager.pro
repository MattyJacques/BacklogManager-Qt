#-------------------------------------------------
#
# Project created by QtCreator 2017-10-25T12:09:46
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = "Backlog Manager"
TEMPLATE = app
CONFIG += c++11
win32:UI_DIR = Source/UI/GeneratedFiles

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    Source/main.cpp \
    Source/UI/GeneratedFiles/qrc_BacklogManagerForm.cpp \
    Source/AboutForm.cpp \
    Source/BacklogManager.cpp \
    Source/FilterForm.cpp \
    Source/GameCollection.cpp \
    Source/GameForm.cpp \
    Source/GameStats.cpp \
    Source/ImportCSV.cpp \
    Source/QtWrappers/SQLDatabase.cpp \
    Source/QtWrappers/TableWidget.cpp \
    Source/Utilities.cpp

HEADERS += \
    Source/UI/GeneratedFiles/ui_AboutForm.h \
    Source/UI/GeneratedFiles/ui_BacklogManagerForm.h \
    Source/UI/GeneratedFiles/ui_FilterForm.h \
    Source/UI/GeneratedFiles/ui_GameForm.h \
    Source/UI/GeneratedFiles/ui_GameStats.h \
    Source/AboutForm.h \
    Source/BacklogManager.h \
    Source/Defines.h \
    Source/FilterForm.h \
    Source/GameCollection.h \
    Source/GameForm.h \
    Source/GameStats.h \
    Source/ImportCSV.h \
    Source/QtWrappers/SQLDatabase.h \
    Source/QtWrappers/TableWidget.h \
    Source/Utilities.h \

FORMS += \
    Source/UI/FilterForm.ui \
    Source/UI/BacklogManagerForm.ui \
    Source/UI/AboutForm.ui \
    Source/UI/GameForm.ui \
    Source/UI/GameStats.ui \
    Source/UI/AddGame.ui
