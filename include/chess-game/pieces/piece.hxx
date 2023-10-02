#pragma once

#include <board/cell/coordinates.hxx>

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
  std::string pieceTypeToString();
  std::string pieceColorToString();

private:
  PieceColor color;
  PieceType type;
};

std::ostream&
operator<<(std::ostream& outs, Piece& piece);
