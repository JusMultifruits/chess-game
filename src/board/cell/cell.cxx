#include <iostream>

#include <board/cell/cell.hxx>

Cell::Cell(){
  this->currentPiece = NULL;
}

Cell::Cell(Piece* piece) {
  this->currentPiece = piece;
}

Coordinates Cell::getCoordinates() {
  return this->coord;
}

Piece* Cell::getPiece() {
  return this->currentPiece;
}

