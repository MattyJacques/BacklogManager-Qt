//==============================================================================
//
// Title: TableWidget.h
// Name: Matthew Jacques
// Description: Wrapper for QTableWidget to expand functionality
//
//==============================================================================

#pragma once


#include <QTableWidget>        // Table widget
#include "../Defines.h"        // Game struct

class TableWidget : public QTableWidget
{
public:
  TableWidget();

  void AddRow(const Game& a_Game);
  void EditRow(const QString& a_GameName,
               const Game& a_Game);
  Game GetRow(int a_Index) const;
  void DeleteRow(const QString& a_GameName);

  // Get the row index of the game with the name given as a parameter
  int GetRowIndex(const QString& a_GameName);

  // Update the row of the index provided with the new play status
  void UpdatePlayStatus(int a_Index,
                        const QString a_PlayStatus);

  ~TableWidget();

private: 
  // Add the data from the game struct to the row at the index provided
  void AddDataToRow(const int a_RowIndex,
                    const Game& a_Game);
};

