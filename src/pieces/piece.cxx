#include <iostream>

#include <pieces/piece.hxx>

/*
 * Piece Class Constructor
 */
Piece::Piece(PieceColor color, PieceType type) : color(color), type(type) {}

PieceColor Piece::getColor(){ return this->color; }

PieceType Piece::getType(){ return this->type; }

std::ostream& operator << (std::ostream& outs, Piece& piece){
  return outs << " " << piece.getColor() << "-" << piece.getType();
}
