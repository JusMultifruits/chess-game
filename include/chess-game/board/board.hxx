#pragma once

#include <iostream>
#include <map>

#include <board/cell/cell.hxx>

class Board {
public:
  Board();
  void displayBoard();
private:
  std::map<Coordinates, Cell*> mCells;
  std::map<Coordinates, Cell*> initCells();
};
