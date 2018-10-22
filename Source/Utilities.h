//==============================================================================
//
// Title: Utilities.h
// Description: Misc methods for this project
//
//==============================================================================


#pragma once


#include "Defines.h"                // Game definition


class Utilities
{
public:
  // Covert the data in the Game struct into strings for the table
  static bool ConvertGameToStrings(const Game& a_Game,
                                   QStringList* a_GameData);

  // Convert played status to string
  static QString GetStatusString(const PlayStatus& a_PlayStatus);

  // Convert played status string to enum
  static PlayStatus GetStatusEnum(const QString a_Status);

  // Convert the platforms data to a string
  static QString GetPlatformString(const Game& a_Game);
};

