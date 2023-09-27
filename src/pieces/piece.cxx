#include <iostream>

#include <pieces/piece.hxx>

/*
 * Piece Class Constructor
 */
Piece::Piece(PieceColor color, PieceType type) : color(color), type(type) {}

PieceColor Piece::getPiece(){
  return this->color;
}

std::ostream& operator << (std::ostream& outs, Piece& piece){
  return outs << piece.getPiece();
}
