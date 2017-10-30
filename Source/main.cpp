//==============================================================================
//
// Title: main.cpp
// Name: Matthew Jacques
// Description: Main application method
//
//==============================================================================


#include <QApplication>                 // Qt application
#include "BacklogManager.h"             // Main window


int main(int argc, 
         char *argv[])
{ // Main application method
    QApplication a(argc, argv);
    BacklogManager w;
    w.show();
    return a.exec();
}
