#pragma once

#include <board/cell/coordinates.hxx>

/*
 * Keep Enum to add factory later maybe?
 */

enum PieceType
{
  King,
  Queen,
  Rook,
  Bishop,
  Knight,
  Pawn
};
enum PieceColor
{
  White,
  Black
};

class Piece
{
public:
  Piece(PieceColor color, PieceType type);
  PieceColor getColor();
  PieceType getType();

private:
  PieceColor color;
  PieceType type;
};

std::ostream&
operator<<(std::ostream& outs, Piece& piece);
