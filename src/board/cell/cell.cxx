#include <iostream>

#include <board/cell/cell.hxx>

Cell::Cell(Piece* piece, Coordinates coord) {
  this->currentPiece = piece;
  this->coord = coord;
}

Coordinates Cell::getCoordinates() {
  return this->coord;
}

Piece* Cell::getPiece() {
  return this->currentPiece;
}

// We need to override this hashfunction in order for the Cell object to be usable in a hashmap or set
size_t Cell::HashFunction::operator() (Cell& cell) const {
  size_t xHash = std::hash<int>()(cell.getCoordinates().X);
  size_t yHash = std::hash<int>()(cell.getCoordinates().Y);
  return xHash ^ yHash;
}

// overload << operator for stream rendition (~ to string)
std::ostream& operator << (std::ostream& outs, Cell& cell){
  std::cout << "Displaying a Cell...";
  return outs << cell.getCoordinates() << cell.getPiece();
}
