#include <iostream>

#include <board/cell.hxx>
#include <pieces/piece.hxx>

/*
 * Piece Class Constructor
 */
Piece::Piece(PieceColor color) : color(color) {}

/*
 * King methods
 */
void King::move(Cell origin, Cell target){
  std::cout << "Worry not, for I am King";
}

bool King::isValidMove(Cell origin, Cell target){
  return true;
}

/*
 * Queen methods
 */
void Queen::move(Cell origin, Cell target){
  std::cout << "The Queen has arrived" << std::endl;
}
bool Queen::isValidMove(Cell origin, Cell target){
  return false;
}
