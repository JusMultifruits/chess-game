#include <game.hxx>

// Constructor
Game::Game()
{
  this->board = new Board();
}

/*
 * Public
 */

void
Game::startGame()
{
  //  board->displayBoard();
  bool gameEnd = false;
  PieceColor currentPlayer = White;

  Coordinates coord = { 1, 0 };
  std::cout << *(this->board->getCell(coord)->getPiece()) << " - " << coord
            << std::endl;
  while (!gameEnd) {
    std::list<Cell*> moves =
      this->computeAvailableMoves(this->board->getCell(coord));
    std::cout << "Chosen coords (" << moves.size() << ") : " << std::endl;
    for (auto const& i : moves) {
      std::cout << i->getCoordinates() << std::endl;
    }
    gameEnd = true;
  }
}

/*
 * Private
 */

void
Game::playPlayerTurn(PieceColor currentPlayer)
{}

std::list<Cell*>
Game::computeAvailableMoves(Cell* currentCell)
{
  /*
   * Compute possible movements from a cell according to current cell type
   */

  Piece* currentPiece = currentCell->getPiece();
  std::list<Cell*> availableMoves;
  switch (currentPiece->getType()) {
    case King:
      break;
    case Queen:
      break;
    case Rook:
      break;
    case Bishop:
      break;
    case Knight:
      availableMoves = computeMovesKnight(currentCell);
      break;
    case Pawn:
      break;
  }
  return availableMoves;
}

std::list<Cell*>
Game::computeMovesKnight(Cell* currentCell)
{
  Coordinates currentCoord = currentCell->getCoordinates();
  std::list<Cell*> computedMoves;
  std::cout << "Candidate coords : ";
  for (short i = -2; i < 3; i++) {
    for (short j = -2; j < 3; j++) {
      if ((std::abs(i) != std::abs(j)) and
          (currentCoord.X + i <= 7 and currentCoord.X + i >= 0) and
          (currentCoord.Y + j <= 7 and currentCoord.Y + j >= 0) and
          (std::abs(j) + std::abs(i)) == 3) {
        Coordinates tmpCoordinates = { currentCoord.X + i, currentCoord.Y + j };
        std::cout << tmpCoordinates << std::endl;
        Cell* tmpCell = this->board->getCell(tmpCoordinates);

        if (tmpCell->getPiece() != NULL) {
          std::cout << "Piece is not null : " << *(tmpCell->getPiece())
                    << std::endl;
          if ((tmpCell->getPiece()->getColor() !=
               currentCell->getPiece()->getColor()) and
              tmpCell->getPiece()->getType() != King) {
            computedMoves.push_back(tmpCell);
          }
        } else {
          computedMoves.push_back(tmpCell);
        }
      }
    }
  }
  return computedMoves;
}
