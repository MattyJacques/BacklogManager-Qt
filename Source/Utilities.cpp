//==============================================================================
//
// Title: Utilities.cpp
// Description: Misc methods for this project
//
//==============================================================================


#include <QDebug>        // Debug messages
#include "Utilities.h"   // Header file


bool Utilities::ConvertGameToStrings(const Game& a_Game,
                                     QStringList* a_GameData)
{ // Convert game data to strings for easier adding

  bool result = false;

  if (!a_Game.m_GameName.isEmpty())
  {
    a_GameData->push_back(a_Game.m_GameName);
    a_GameData->push_back(GetPlatformString(a_Game));
    a_GameData->push_back(GetStatusString(a_Game.m_Status));
    (a_Game.m_Owned) ? a_GameData->push_back("true") : a_GameData->push_back("false");
    a_GameData->push_back(a_Game.m_AddedDate);
    result = true;
  }
  else
  {
    qWarning() << "Utilities::ConvertGameToStrings() game name was empty";
  }

  return result;
} // ConvertGameToStrings()


QString Utilities::GetStatusString(const PlayStatus& a_PlayStatus)
{ // Convert played status to string

  QString playStatus;

  switch (a_PlayStatus)
  {
  case NOTPLAYED:
  {
    playStatus = STATUSNOTPLAYED;
    break;
  }
  case PLAYED:
  {
    playStatus = STATUSPLAYED;
    break;
  }
  case COMPLETE:
  {
    playStatus = STATUSCOMPLETE;
    break;
  }
  case ABANDONED:
  {
    playStatus = STATUSABANDONED;
    break;
  }
  default:
  {
    qWarning() << "GetStatusString() reached default";
    break;
  }
  } //  switch (a_Platform)

  return playStatus;
} // GetStatusString()


PlayStatus Utilities::GetStatusEnum(const QString a_Status)
{ // Convert played status string to enum

  PlayStatus result;

  if (!a_Status.isEmpty())
  {
    if (a_Status == STATUSNOTPLAYED)
    {
      result = NOTPLAYED;
    }
    else if (a_Status == STATUSPLAYED)
    {
      result = PLAYED;
    }
    else if (a_Status == STATUSCOMPLETE)
    {
      result = COMPLETE;
    }
    else if (a_Status == STATUSABANDONED)
    {
      result = ABANDONED;
    }
  }
  else
  {
    qWarning() << "Utilities::GetStatusEnum() status string was empty";
  }

  return result;
} // GetStatusEnum()


QString Utilities::GetPlatformString(const Game & a_Game)
{ // Convert the platforms data to a string
  
  QString platform;

  if (a_Game.m_PlatformPC)
  {
    platform += PLATFORMPC;
  }
  if (a_Game.m_PlatformPS3)
  {
    if (!platform.isEmpty())
    {
      platform += " / ";
    }
    platform += PLATFORMPS3;
  }
  if (a_Game.m_PlatformPS4)
  {
    if (!platform.isEmpty())
    {
      platform += " / ";
    }
    platform += PLATFORMPS4;
  }
  if (a_Game.m_PlatformPSVita)
  {
    if (!platform.isEmpty())
    {
      platform += " / ";
    }
    platform += PLATFORMPSVITA;
  }

  return platform;

} // GetPlatformString()
