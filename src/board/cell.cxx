#include <board/cell.hxx>

Cell::Cell(){
  
}

Cell::Cell(Piece* piece) {
  this->currentPiece = piece;
}
