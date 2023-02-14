#include <iostream>

#include <pieces/piece.hxx>

/*
 * Piece Class Constructor
 */
Piece::Piece(PieceColor color) : color(color) {}

/*
 * King methods
 */
void King::move(Coordinates origin, Coordinates target){
  std::cout << "Worry not, for I am King";
}

bool King::isValidMove(Coordinates origin, Coordinates target){
  return true;
}

/*
 * Queen methods
 */
void Queen::move(Coordinates origin, Coordinates target){
  std::cout << "The Queen has arrived" << std::endl;
}
bool Queen::isValidMove(Coordinates origin, Coordinates target){
  return false;
}
