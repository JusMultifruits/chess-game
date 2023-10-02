#include <game.hxx>

// Constructor
Game::Game()
{
  this->board = new Board();
}

void
Game::startGame()
{
  board->displayBoard();
  bool gameEnd = false;
  PieceColor currentPlayer = White;

  Coordinates coord = { 4, 5 };

  while (!gameEnd) {
    this->listAvailableMoves(this->board->getCell(coord));
    gameEnd = true;
  }
}

void
Game::playPlayerTurn(PieceColor currentPlayer)
{}

std::list<Cell*>
Game::listAvailableMoves(Cell* currentCell)
{
  Piece* currentPiece = currentCell->getPiece();
  std::list<Cell*> availableMoves;

  //  std::cout << availableMoves;

  return availableMoves;
}
