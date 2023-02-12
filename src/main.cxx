#include <iostream>

#include <board/board.hxx>
#include <board/cell.hxx>
#include <pieces/piece.hxx>

int main(){
  Cell baseCell, secondCell;
  
  baseCell.X = 1;
  baseCell.Y = 2;
  secondCell.X = 1;
  secondCell.Y = 3;  

  King king(PieceColor::White, baseCell);
  Queen queen(PieceColor::White, secondCell);

  queen.move(baseCell);

  return 0;
}
