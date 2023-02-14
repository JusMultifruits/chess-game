#pragma once

#include <board/cell/coordinates.hxx>
#include <pieces/piece.hxx>
/*
 * Diff between class & struct
 * by default struct attributes are public while class' are private
 */

class Cell {
public:
  Cell();
  Cell(Piece* piece);
  Coordinates getCoordinates();
  Piece* getPiece();
  struct HashFunction {
    size_t operator()(Cell& other) const;
  };
private:
  Piece* currentPiece;
  Coordinates coord;
};
