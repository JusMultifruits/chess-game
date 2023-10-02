#pragma once

#include <board/cell/cell.hxx>
#include <iostream>
#include <map>

class Board
{
public:
  Board();
  void displayBoard();

private:
  std::map<Coordinates, Cell*> mCells;
  std::map<Coordinates, Cell*> initCells();
};
