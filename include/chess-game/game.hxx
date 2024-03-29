#pragma once

#include <array>
#include <list>

#include <board/board.hxx>
#include <pieces/piece.hxx>

class Game
{
public:
  Game();
  void startGame();

private:
  Board* board;
  void playPlayerTurn(PieceColor);
  std::list<Cell*> computeAvailableMoves(Cell*);
  std::list<Cell*> computeMovesKnight(Cell*);
  std::list<Cell*> computeMovesPawn(Cell*);
};
