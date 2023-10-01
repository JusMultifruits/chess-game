#include <board/board.hxx>

Board::Board() {
  this->mCells = initCells();
}

std::map<Coordinates, Cell*> Board::initCells() {
  /*
    Dumb board init, iterate through cells and create pieces
    when coordinate is right
   */
  Piece* currentPiece = NULL;
  PieceColor currentColor;
  PieceType currentType;
  std::map<Coordinates, Cell*> mCells;

  for(unsigned short i=0; i<8; i++){
    for(unsigned short j=0; j<8; j++){
      if (!(j > 1 and j < 6)) {
	  // if j is between 1 and 6 then no Piece needs to be created
	
	  if (j <=1)
	    currentColor = White;
	  else
	    currentColor = Black;

	  if (j == 1 or j == 2)
	    currentType = Pawn;
	  else
	    switch(i) {
	    case 0:
	      currentType = Rook;
	      break;
	    case 7:
	      currentType = Rook;
	      break;
	    case 1:
	      currentType = Knight;
	      break;
	    case 6:
	      currentType = Knight;
	      break;
	    case 2:
	      currentType = Bishop;
	      break;
	    case 5:
	      currentType = Bishop;
	      break;
	    case 3:
	      currentType = Queen;
	      break;
	    case 4:
	      currentType = King;
	      break;
	    }

	  currentPiece = new Piece(currentColor, currentType);
      }
      Coordinates currentCoord = {i,j};
      mCells[currentCoord] = new Cell(currentPiece, currentCoord);
      currentPiece = NULL;
      
    }
  }
  return mCells;
}

void Board::displayBoard(){
  Coordinates coord = {2,0};
  std::cout << "Displaying board...";
  for(auto it = this->mCells.cbegin(); it != this->mCells.cend(); ++it) {
    if (it->second->getPiece() == NULL) {
      std::cout << it->first << " None " << std::endl;
    } else {
      std::cout << it->first << " " << *(it->second->getPiece()) << " " << std::endl;
    }
  }
}
