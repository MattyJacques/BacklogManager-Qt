//==============================================================================
//
// Title: ImportCSV.h
// Name: Matthew Jacques
// Description: Import games from CSV format
//
//==============================================================================


#pragma once


#include <QString>            // String functionality
#include "Defines.h"          // Game definition


class ImportCSV
{
public:
  ImportCSV();

  // Import the games from the CSV file. Skips first line.
  // Column 1: Game Name (String)
  // Column 2: PC Platform ('y' empty is true)
  // Column 3: PS4 Platform ('y' is true)
  // Column 4: PS3 Platform ('y' is true)
  // Column 5: PS Vita Platform ('y'y is true)
  // Column 6: Owned  ('y' is true)
  // Column 7: Play State (String from drop down)
  bool ImportGames(const QString& a_FileName,
                   GameVector* a_GameColl) const;

private:
  // Get data string from file
  bool RetrieveDataFromFile(const QString& a_FileName,
                               QString* a_Data) const;

  // Split the data string into a string list
  QStringList SplitData(const QString& a_Data) const;

  // Convert the QStringList into Game records
  bool ConvertGameStrings(const QStringList& a_GameData, 
                          GameVector* a_Games) const;
};

