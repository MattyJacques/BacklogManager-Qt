//==============================================================================
//
// Title: SQLDatabase.h
// Description: Interface for QSqlDatabase to improve abstraction
//
//==============================================================================


#pragma once


#include <QString>              // Strings
#include <QSqlDatabase>         // SQL functionality
#include <QFileInfo>            // File checking
#include "../Defines.h"         // Game definition


class SQLDatabase
{
public:
  SQLDatabase(const QFileInfo& a_FilePath);

  bool Open();   // Open the DB connection
  void Close();  // Close the DB connection

  const inline QFileInfo& GetDBPath() { return m_DBPath; };

  bool Create();               // Create the database, deletes if already exists
  bool InsertGame(const Game& a_Game);       // Add/edit a game in the database
  bool DeleteGame(const QString a_GameName); // Delete a game in the database
  QVector<Game> GetGames();                  // Get all games from the database
    
  // Insert a new play status for a game record
  bool InsertPlayStatus(const QString a_GameName,
                        const QString a_PlayStatus);

  // Update/Return the stored setting
  bool UpdateSetting(const QString& a_SettingKey,
                     const QString& a_SettingValue);
  QString GetSetting(const QString& a_SettingKey);

  // Copy the database to the given path
  bool DoBackup(const QString& a_Path);

  ~SQLDatabase();

private:
  QSqlDatabase m_DB;
  QFileInfo m_DBPath;                  // DB path
};

