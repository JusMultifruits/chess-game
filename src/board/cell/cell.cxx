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

size_t Cell::HashFunction::operator() (Cell& cell) const {
  size_t xHash = std::hash<int>()(cell.getCoordinates().X);
  size_t yHash = std::hash<int>()(cell.getCoordinates().Y);
  return xHash ^ yHash;
}
