#include <iostream>

#include <pieces/piece.hxx>

/*
 * Piece Class Constructor
 */
Piece::Piece(PieceColor color, PieceType type)
  : color(color)
  , type(type)
{}

PieceColor
Piece::getColor()
{
  return this->color;
}

PieceType
Piece::getType()
{
  return this->type;
}

std::string
Piece::pieceTypeToString()
{
  switch (this->getType()) {
    case King:
      return "King";
    case Queen:
      return "Queen";
    case Rook:
      return "Rook";
    case Bishop:
      return "Bishop";
    case Knight:
      return "Knight";
    case Pawn:
      return "Pawn";
    default:
      return "";
  }
}

std::string
Piece::pieceColorToString()
{
  switch (this->getColor()) {
    case White:
      return "White";
    case Black:
      return "Black";
    default:
      return "";
  }
}

std::ostream&
operator<<(std::ostream& outs, Piece& piece)
{
  return outs << " " << piece.pieceColorToString() << "-"
              << piece.pieceTypeToString();
}
