#include <iostream>

#include <board/cell.hxx>
#include <pieces/piece.hxx>

Piece::Piece(PieceColor color, Cell position) : color(color), position(position){}


void King::move(Cell cell){
  std::cout << "Worry not, for I am King";
}

bool King::isMoveValid(Cell cell){
  return true;
}


void Queen::move(Cell cell){
  std::cout << "The Queen has arrived" << std::endl;
}
bool Queen::isMoveValid(Cell cell){
  return false;
}
