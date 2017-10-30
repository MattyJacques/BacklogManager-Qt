//==============================================================================
//
// Title: SQLDatabase.cpp
// Name: Matthew Jacques
// Description: Interface for QSqlDatabase to improve abstraction
//
//==============================================================================


#include <QSqlQuery>          // SQL queries
#include <QSqlError>          // SQL errors
#include <QFile>              // File manipulation
#include <QSqlDriver>         // SQLite driver
#include <QDebug>             // qWarning()
#include <QSqlRecord>         // SQL Records
#include "SQLDatabase.h"      // Header
#include "../Utilities.h"     // Data manipulation


SQLDatabase::SQLDatabase(const QFileInfo& a_FilePath)
  : m_DBPath(a_FilePath)
{ // Add the database, setting name and path
  m_DB = QSqlDatabase::addDatabase("QSQLITE");
  m_DB.setDatabaseName(a_FilePath.absoluteFilePath());
} // SQLDatabase()


bool SQLDatabase::Open()
{ // Open the DB connection
  return m_DB.open();
} // Open()


void SQLDatabase::Close()
{ // Close the DB connection
  m_DB.close();
} // Close()


bool SQLDatabase::Create()
{ // Create the database, deletes if already exists

  bool result = false;                        // Return value
  QSqlQuery query;                            // Execute queries
  QFile filePath;                             // File checking
  filePath.setFileName(m_DBPath.absolutePath());

  if (filePath.exists())
  {
    filePath.remove();
  }

  if (Open())
  {
    result = query.exec("CREATE TABLE Games (\
                       GameName text NOT NULL PRIMARY KEY,\
                       AddedDate text NOT NULL,\
                       PC text NOT NULL,\
                       PS3 text NOT NULL,\
                       PS4 text NOT NULL,\
                       PSVita text NOT NULL,\
                       OwnedStatus text,\
                       PlayedStatus text NOT NULL);");

    result &= query.exec("CREATE TABLE Settings (\
                       Key text NOT NULL PRIMARY KEY,\
                       Value text NOT NULL);");

    if (result)
    {
      QFileInfo checkFile(m_DB.databaseName());
      result = checkFile.exists() && checkFile.isFile();
    }
    else
    {
      qDebug() << "SQLite error:" << query.lastError().text() \
        << ", SqLite error code:" << query.lastError().number();
      qDebug() << "SQLite query:" << query.lastQuery();
    }

    Close(); // Close DB after use
  }
  else
  {
    qWarning() << "SQLDatabase::Create() failed to open database";
  }

  return result;
} // Create()


bool SQLDatabase::InsertGame(const Game& a_Game)
{ // Add/edit a game in the database
  
  bool result = false;             // Return value
  
  if (Open())
  {
    QSqlQuery query;                 // Execute SQL
    result = query.prepare("INSERT OR REPLACE INTO Games(GameName, AddedDate, PC,\
                            PS3, PS4, PSVita, OwnedStatus, PlayedStatus) \
                            VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue(a_Game.m_GameName);
    query.addBindValue(a_Game.m_AddedDate);
    query.addBindValue(a_Game.m_PlatformPC ? "true" : "false");
    query.addBindValue(a_Game.m_PlatformPS3 ? "true" : "false");
    query.addBindValue(a_Game.m_PlatformPS4 ? "true" : "false");
    query.addBindValue(a_Game.m_PlatformPSVita ? "true" : "false");
    query.addBindValue(a_Game.m_Owned ? "true" : "false");
    query.addBindValue(Utilities::GetStatusString(a_Game.m_Status));
  
    result = result && query.exec();

    if (!result)
    {
      qDebug() << "SQLite error:" << query.lastError().text() \
        << ", SqLite error code:" << query.lastError().number();
      qDebug() << "SQLite query:" << query.lastQuery();
    }

    Close();
  }
  else
  {
    qWarning() << "SQLDatabase::InsertGame() failed to open database";
  }
  return result;
} // AddGame()


bool SQLDatabase::DeleteGame(const QString a_GameName)
{ // Delete a game in the database
  
  bool result = false;             // Return value

  if (Open())
  {
    QSqlQuery query;                 // Execute SQL
    result = query.prepare("DELETE FROM Games WHERE GameName = ?");
    query.addBindValue(a_GameName);

    result = result && query.exec();

    if (!result)
    {
      qDebug() << "SQLite error:" << query.lastError().text() \
        << ", SqLite error code:" << query.lastError().number();
      qDebug() << "SQLite query:" << query.lastQuery();
    }

    Close();
  }
  else
  {
    qWarning() << "SQLDatabase::DeleteGame() failed to open database";
  }
  return result;

} // DeleteGame()


QVector<Game> SQLDatabase::GetGames()
{ // Get all games from the database

  QVector<Game> gameCollection;
  bool result = false;

  if (Open())
  {
    QSqlQuery query;                 // Execute SQL
    result = query.exec("SELECT * FROM Games");

    if (result)
    {
      while (query.next())
      {
        if (query.isValid())
        { // If we have a valid record, add data to game object
          Game newGame;
          newGame.m_GameName = query.record().value(NAMEDBINDEX).toString();
          newGame.m_AddedDate = query.record().value(ADDEDDATEDBINDEX).toString();
          newGame.m_PlatformPC = query.record().value(PCDBINDEX).toString() == "true";
          newGame.m_PlatformPS3 = query.record().value(PS3DBINDEX).toString() == "true";
          newGame.m_PlatformPS4 = query.record().value(PS4DBINDEX).toString() == "true";
          newGame.m_PlatformPSVita = query.record().value(PSVITADBINDEX).toString() == "true";
          newGame.m_Owned = query.record().value(OWNEDDBINDEX).toString() == "true";
          newGame.m_Status = Utilities::GetStatusEnum(query.record().
            value(STATUSDBINDEX).toString());
          gameCollection.push_back(newGame);
        }
      }
    }
    else
    {
      qDebug() << "SQLite error:" << query.lastError().text() \
        << ", SqLite error code:" << query.lastError().number();
      qDebug() << "SQLite query:" << query.lastQuery();
    }

    Close();
  }
  else
  {
    qWarning() << "SQLDatabase::GetGames() failed to open database";
  }
  

  return gameCollection;
} // GetGames()


bool SQLDatabase::InsertPlayStatus(const QString a_GameName, 
                                   const QString a_PlayStatus)
{ // Insert a new play status for a game record

  bool result = false;

  if (Open())
  {
    QSqlQuery query;                 // Execute SQL
    result = query.prepare("INSERT OR REPLACE INTO Games(GameName, PlayedStatus) \
                            VALUES (?, ?)");
    query.addBindValue(a_GameName);
    query.addBindValue(a_PlayStatus);

    result = result && query.exec();

    if (!result)
    {
      qDebug() << "SQLite error:" << query.lastError().text() \
        << ", SqLite error code:" << query.lastError().number();
      qDebug() << "SQLite query:" << query.lastQuery();
    }

    Close();
  }
  else
  {
    qWarning() << "SQLDatabase::InsertPlayStatus() failed to open database";
  }
  return result;
} // InsertPlayStatus()


bool SQLDatabase::UpdateSetting(const QString& a_SettingKey, 
                                const QString& a_SettingValue)
{ // Update the setting in the database with the given key and value

  bool result = false;
  if (Open())
  {
    QSqlQuery query;                 // Execute SQL
    result = query.prepare("INSERT OR REPLACE INTO Settings (Key, Value) \
                            VALUES (?, ?)");
    query.addBindValue(a_SettingKey);
    query.addBindValue(a_SettingValue);
    result &= query.exec();

    if (!result)
    {
      qDebug() << "SQLite error:" << query.lastError().text() \
        << ", SqLite error code:" << query.lastError().number();
      qDebug() << "SQLite query:" << query.lastQuery();
    }

    Close();
  }
  else
  {
    qWarning() << "SQLDatabase::UpdateNextGame() failed to open database";
  }
  return result;

} // UpdateSetting()


QString SQLDatabase::GetSetting(const QString& a_SettingKey)
{ // Return the stored setting with the given key

  QString gameName;

  if (Open())
  {
    QSqlQuery query;                 // Execute SQL
    bool result = query.prepare("SELECT Key, Value FROM Settings \
                              WHERE Key = ?");
    query.addBindValue(a_SettingKey);
    result &= query.exec();

    if (result)
    {
      query.next();
      if (query.isValid())
      { // If we have a valid record, add data to game object
        gameName = query.record().value(SETTINGVALUEDBINDEX).toString();
      }
    }
    else
    {
      qDebug() << "SQLite error:" << query.lastError().text() \
        << ", SqLite error code:" << query.lastError().number();
      qDebug() << "SQLite query:" << query.lastQuery();
    }

    Close();
  }
  else
  {
    qWarning() << "SQLDatabase::GetNextGame() failed to open database";
  }
  return gameName;
} // GetSetting


bool SQLDatabase::DoBackup(const QString& a_Path)
{ // Copy the database to the given path
  
  if (QFile::exists(a_Path))
  {
    QFile::remove(a_Path);
  }

  return QFile::copy(m_DBPath.absoluteFilePath(), a_Path);
} // DoBackup()


SQLDatabase::~SQLDatabase()
{ // Make sure database is closed
  QString connectionName = m_DB.connectionName();
  Close();
  m_DB = QSqlDatabase(); // Some hack to help close the db, blame Qt
  QSqlDatabase::removeDatabase(connectionName);
} // ~SQLDatabase()
