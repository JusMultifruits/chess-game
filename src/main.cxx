#include <iostream>

#include <board/board.hxx>
#include <board/cell/cell.hxx>
#include <pieces/piece.hxx>

int main(){
  Board* board = new Board();
  board->displayBoard();
  return 0;
}
