#pragma once

#include <board/cell/cell.hxx>
#include <iostream>
#include <map>

class Board
{
public:
  Board();
  void displayBoard();
  Cell* getCell(Coordinates);

private:
  std::map<Coordinates, Cell*> mCells;
  std::array<Cell*, 2> kingsCells;
  std::map<Coordinates, Cell*> initCells();
};
