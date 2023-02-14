#pragma once

#include <unordered_set>

#include <board/cell/cell.hxx>

class Player {
public:
  Player();
  void playTurn();
private:
  std::unordered_set<Cell, Cell::HashFunction> controlledCells;
  bool isCellControlled(Cell target);
};
