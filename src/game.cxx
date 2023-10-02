#include <game.hxx>

// Constructor
Game::Game() {
  this->board = new Board();
  
}

void Game::startGame() {
  board->displayBoard();
  bool gameEnd = false;
  PieceColor currentPlayer = White;
  while (!gameEnd) {
    
  }
}

void Game::playPlayerTurn(PieceColor currentPlayer) {

}
