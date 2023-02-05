#pragma once

#include <pieces/piece.hxx>

class Cell {
public:
  Cell();
  Cell(Piece*);
private:
  Piece* currentPiece;
};
