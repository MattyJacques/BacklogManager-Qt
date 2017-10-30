//==============================================================================
//
// Title: ImportCSV.cpp
// Name: Matthew Jacques
// Description: Import games from CSV format
//
//==============================================================================


#include <QStringList>       // String list for parsed data
#include <QFile>             // Handling CSV file
#include <QMessageBox>       // Error message box
#include <QDebug>            // Debug warnings
#include <QDateTime>         // Added date
#include "ImportCSV.h"       // Header
#include "Utilities.h"       // Convert string to enum


enum State { NONQUOTED, QUOTED };     // Data type
const int CSVCOLAMOUNT = 7;           // Amount of columns in CSV
const char TRUECHAR = 'y';            // Char that means true in CSV


ImportCSV::ImportCSV()
{
} // ImportCSV()


bool ImportCSV::ImportGames(const QString& a_FileName,
                            GameVector* a_GameColl) const
{ // Import the games from the CSV file. Skips first line.
  // Column 1: Game Name (String)
  // Column 2: PC Platform (Not empty is true)
  // Column 3: PS4 Platform (Not empty is true)
  // Column 4: PS3 Platform (Not empty is true)
  // Column 5: PS Vita Platform (Not empty is true)
  // Column 6: Owned  (Not empty is true)
  // Column 7: Play State (String from drop down)
  
  bool result = false;

  if (!a_FileName.isEmpty())
  {
    QString dataString;
    if (RetrieveDataFromFile(a_FileName, &dataString))
    {
      QStringList parsedData = SplitData(dataString);
      if (ConvertGameStrings(parsedData, a_GameColl))
      {
        result = true;
      }
    }
  }
  else 
  {
    qDebug() << "ImportCSV::ImportGames() empty filename";
  }

  return result;
} // ImportGames()


bool ImportCSV::RetrieveDataFromFile(const QString& a_FileName,
                                     QString* a_Data) const
{ // Get data string from file

  bool result = false;

  if (!a_FileName.isEmpty())
  {
    QFile fileHandler(a_FileName);

    result = fileHandler.open(QIODevice::ReadOnly);
    if (result)
    { // File opened, continue to retrieve data

      *a_Data = fileHandler.readAll();
      fileHandler.close();
    }
    else
    { // Failed to open file
      qDebug() << "Failed to open CSV file: " << a_FileName;
    }
  }
  else
  {
    qWarning() << "ImportCSV::RetrieveDataFromFile() file name was empty";
  }
  return a_Data;

} // RetrieveDataFromFile()


QStringList ImportCSV::SplitData(const QString& a_Data) const
{ // Split the data string into a string list
  
  QStringList parsedData;

  if (!a_Data.isEmpty())
  {
    State dataType = NONQUOTED;
    QString currentField;

    int i = a_Data.indexOf('\n') + 1;  // Skip first line
    for (; i < a_Data.size(); i++)
    {
      QChar current = a_Data.at(i);

      // Normal state
      if (dataType == NONQUOTED)
      {
        if (current == ',')
        { // Comma found, save field
          currentField.remove('\r');
          currentField.remove('\n');
          if (!currentField.isEmpty())
          {
            parsedData.append(currentField);
            currentField.clear();
          }
        }
        else if (current == '"')
        { // Double quote found, set data type
          dataType = QUOTED;
        }
        else
        { // Still in current field, continue
          currentField += current;
        }
      }
      else if (dataType == QUOTED)
      { // Found quoted data
        if (current == '"')
        {
          if (i + 1 < a_Data.size())
          {
            QChar next = a_Data.at(i + 1);

            if (next == '"')
            { // Double double quote, add to current field
              currentField += '"';
              i++;
            }
            else
            {
              dataType = NONQUOTED;
            }
          }
        }
        else
        { // Still in current field, continue
          currentField += current;
        }
      }
    }

    currentField.remove('\r');
    currentField.remove('\n');
    if (!currentField.isEmpty())
    {
      parsedData.append(currentField);
    }
  } 
  else
  {
    qWarning() << "ImportCSV::SplitData() data was empty";
  }
  
  return parsedData;
} // SplitData()


bool ImportCSV::ConvertGameStrings(const QStringList& a_GameData, 
                                   GameVector* a_Games) const
{ // Convert the QStringList into Game records

  bool result = false;

  if (a_GameData.size() > 0)
  { // We have some data, lets convert it

    if (a_GameData.size() % 7 == 0)
    {
      QDate qDate = QDate::currentDate();         // Get current date

      for (int i = 0; i < a_GameData.size(); i += CSVCOLAMOUNT)
      {
          Game newGame;
          newGame.m_GameName = a_GameData[i];
          newGame.m_PlatformPC = a_GameData[i + 1] == TRUECHAR;
          newGame.m_PlatformPS4 = a_GameData[i + 2] == TRUECHAR;
          newGame.m_PlatformPS3 = a_GameData[i + 3] == TRUECHAR;
          newGame.m_PlatformPSVita = a_GameData[i + 4] == TRUECHAR;
          newGame.m_Owned = a_GameData[i + 5] == TRUECHAR;
          newGame.m_Status = Utilities::GetStatusEnum(a_GameData[i + 6]);
          newGame.m_AddedDate = qDate.toString(QString("dd/MM/yyyy"));
          a_Games->push_back(newGame);
      }
      result = true;
    }
    else 
    { // Maybe found incorrect fields
      QMessageBox messageBox;
      messageBox.setText("CSV has incorrect number of fields, are any blank?");
      messageBox.exec();
      qDebug() << "a_GameData.size() % 7 is " \
        << QString(a_GameData.size() % 7 == 0);
    }
  }

  return result;
} // ConvertGameStrings()
