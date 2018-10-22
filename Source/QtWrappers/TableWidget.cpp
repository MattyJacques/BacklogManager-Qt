//==============================================================================
//
// Title: TableWidget.cpp
// Description: Wrapper for QTableWidget to expand functionality
//
//==============================================================================


#include <QCheckBox>           // Checkbox control
#include <QDebug>              // Debug messages
#include "TableWidget.h"       // Table widget
#include "../Utilities.h"      // Data manipulation


TableWidget::TableWidget()
{
} // TableWidget()


void TableWidget::AddRow(const Game& a_Game)
{ // Add the game to the table

  if (!a_Game.m_GameName.isEmpty())
  {
    int rowIndex = rowCount();
    insertRow(rowIndex);
    AddDataToRow(rowIndex, a_Game);
  }
  else
  {
    qWarning() << "TableWidget::AddRow() a_Game does not have name";
  }

} // AddToTable()


void TableWidget::EditRow(const QString& a_GameName,
                          const Game& a_Game)
{ // Edit an existing game in the table

  if (!a_GameName.isEmpty() || !a_Game.m_GameName.isEmpty())
  {
    int rowIndex = GetRowIndex(a_GameName);
    if (rowIndex != INVALIDINDEX)
    {
      AddDataToRow(rowIndex, a_Game);
    }
  }
  else
  {
    qWarning() << "TableWidget::EditRow() a_Game does not have name";
  }

} // EditRow()


Game TableWidget::GetRow(int a_Index) const
{ // Return a Game record filled with data from the row at the index given

  Game result;

  if (a_Index > INVALIDINDEX && a_Index < rowCount())
  {
    result.m_GameName = item(a_Index, NAMETABLEINDEX)->text();
    result.m_PlatformPC = item(a_Index, PLATFORMTABLEINDEX)->text().contains(PLATFORMPC);
    result.m_PlatformPS3 = item(a_Index, PLATFORMTABLEINDEX)->text().contains(PLATFORMPS3);
    result.m_PlatformPS4 = item(a_Index, PLATFORMTABLEINDEX)->text().contains(PLATFORMPS4);
    result.m_PlatformPSVita = item(a_Index, PLATFORMTABLEINDEX)->text().contains(PLATFORMPSVITA);
    result.m_Owned = item(a_Index, OWNEDTABLEINDEX)->checkState() == Qt::CheckState::Checked;
    result.m_Status = Utilities::GetStatusEnum(item(a_Index, STATUSTABLEINDEX)->text());
  }
  else
  {
    qWarning() << "TableWidget::GetRow() index was " + QString::number(a_Index) <<
      " and rowCount() was " + QString::number(rowCount());
  }

  return result;

} // GetRow()


void TableWidget::DeleteRow(const QString& a_GameName)
{ // Use the game name to delete a row in the table

  if (!a_GameName.isEmpty())
  {
    int rowIndex = GetRowIndex(a_GameName);
    if (rowIndex != INVALIDINDEX)
    {
      removeRow(rowIndex);
    }
  }
  else
  {
    qWarning() << "TableWidget::EditRow() a_Game does not have name";
  }
} // DeleteRow()


int TableWidget::GetRowIndex(const QString& a_GameName)
{ // Get the row index of the game with the name given as a parameter
   
  int rowIndex = INVALIDINDEX;

  if (!a_GameName.isEmpty())
  {
    int rows = rowCount();

    for (int i = 0; i < rows; ++i)
    { // Loop through rows, checking row index
      if (item(i, NAMETABLEINDEX)->text() == a_GameName)
      {
        //we have found our value so we can update 'i' row
        rowIndex = i;
        break;
      }
    }
  }
  else
  {
    qWarning() << "TableWidget::GetRowIndex() game name was empty";
  }

  return rowIndex;
 } // GetRowIndex()


void TableWidget::AddDataToRow(const int a_RowIndex,
                                const Game& a_Game)
{ // Add the data from the game struct to the row at the index provided
 
  QStringList gameData;
  QTableWidgetItem* currItem = nullptr;

  bool result = Utilities::ConvertGameToStrings(a_Game, &gameData);

  if (result)
  {
    setSortingEnabled(false);   // Keep rows at the same index while adding

    for (int i = 0; i < TABLECOLAMOUNT; i++)
    { // New the items in the row
      QTableWidgetItem* newItem = new QTableWidgetItem;
      newItem->setTextAlignment(Qt::AlignCenter);
      setItem(a_RowIndex, i, newItem);
    }

    for (int i = 0; i < OWNEDTABLEINDEX; i++)
    {
      currItem = item(a_RowIndex, i);
      if (currItem)
      {
        currItem->setText(gameData[i]);
      }
    }

    // Setup owned cell
    QCheckBox* newCheckBox = new QCheckBox;
    newCheckBox->setStyleSheet("margin-left:45%; margin-right:50%;");
    newCheckBox->setChecked(a_Game.m_Owned);
    setCellWidget(a_RowIndex, OWNEDTABLEINDEX, newCheckBox);

    // Setup added date cell
    currItem = item(a_RowIndex, ADDEDDATETABLEINDEX);
    if (currItem)
    {
      currItem->setText(gameData.back());
    }

    setSortingEnabled(true);     // Enable sorting again after data added
  }
} // AddDataToRow()


 void TableWidget::UpdatePlayStatus(int a_Index, 
                                    const QString a_PlayStatus)
 { // Update the row of the index provided with the new play status

   if (a_Index > INVALIDINDEX && a_Index < rowCount())
   {
     item(a_Index, STATUSTABLEINDEX)->setText(a_PlayStatus);
   }
   else
   {
     qWarning() << "TableWidget::UpdatePlayStatus() index was " + 
       QString::number(a_Index) << " and rowCount() was " + 
       QString::number(rowCount());
   }
 } // UpdatePlayStatus()


 TableWidget::~TableWidget()
 {
 } // ~TableWidget()
