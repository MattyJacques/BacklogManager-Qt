//==============================================================================
//
// Title: Defines.h
// Description: Misc defines for the application
//
//==============================================================================


#pragma once


#include <QString>               // Strings
#include <QFileInfo>             // File manipulation
#include <QVector>               // Game collection

// Dialog mode defines
enum DialogMode { ADD, EDIT };

// Game Data defines
enum PlayStatus { NOTPLAYED = 0, PLAYED = 1, ABANDONED = 2, COMPLETE = 3 };

const QString STATUSNOTPLAYED = "Not Played";
const QString STATUSPLAYED    = "Played";
const QString STATUSCOMPLETE  = "Complete";
const QString STATUSABANDONED = "Abandoned";
const QString PLATFORMDEFAULT = "";
const QString PLATFORMPS3     = "PS3";
const QString PLATFORMPS4     = "PS4";
const QString PLATFORMPC      = "PC";
const QString PLATFORMPSVITA  = "PS Vita";

// Table indexes
const int TABLECOLAMOUNT = 5;
const int NAMETABLEINDEX = 0;
const int PLATFORMTABLEINDEX = 1;
const int STATUSTABLEINDEX = 2;
const int OWNEDTABLEINDEX = 3;
const int ADDEDDATETABLEINDEX = 4;

// DB indexes
const int NAMEDBINDEX = 0;
const int ADDEDDATEDBINDEX = 1;
const int PCDBINDEX = 2;
const int PS3DBINDEX = 3;
const int PS4DBINDEX = 4;
const int PSVITADBINDEX = 5;
const int OWNEDDBINDEX = 6;
const int STATUSDBINDEX = 7;
const int SETTINGVALUEDBINDEX = 1;

// Stats indexes
const int PCNOTPLAYEDINDEX = 0;
const int PS4NOTPLAYEDINDEX = 1;
const int PS3NOTPLAYEDINDEX = 2;
const int PSVITANOTPLAYEDINDEX = 3;
const int TOTALNOTPLAYEDINDEX = 4;
const int PCPLAYEDINDEX = 5;
const int PS4PLAYEDINDEX = 6;
const int PS3PLAYEDINDEX = 7;
const int PSVITAPLAYEDINDEX = 8;
const int TOTALPLAYEDINDEX = 9;
const int PCCOMPLETEINDEX = 10;
const int PS4COMPLETEINDEX = 11;
const int PS3COMPLETEINDEX = 12;
const int PSVITACOMPLETEINDEX = 13;
const int TOTALCOMPLETEINDEX = 14;
const int PCABANDONEDINDEX = 15;
const int PS4ABANDONEDINDEX = 16;
const int PS3ABANDONEDINDEX = 17;
const int PSVITAABANDONEDINDEX = 18;
const int TOTALABANDONEDINDEX = 19;
const int PCPERCENTINDEX = 20;
const int PS4PERCENTINDEX = 21;
const int PS3PERCENTINDEX = 22;
const int PSVITAPERCENTINDEX = 23;
const int TOTALPERCENTINDEX = 24;

// Database settings keys
const QString NEXTGAMEKEY = "NextGameName";
const QString BACKUPPATHKEY = "BackupPath";

//Misc
const int INVALIDINDEX = -1;

struct Game
{
  QString    m_GameName = "";
  bool       m_PlatformPC = false;
  bool       m_PlatformPS3 = false;
  bool       m_PlatformPS4 = false;
  bool       m_PlatformPSVita = false;
  bool       m_Owned = false;
  PlayStatus m_Status = NOTPLAYED;
  QString    m_AddedDate;
};

typedef QVector<Game> GameVector;
