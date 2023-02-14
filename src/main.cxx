#include <iostream>

#include <board/board.hxx>
#include <board/cell/cell.hxx>
#include <pieces/piece.hxx>

int main(){
  Coordinates baseCoord, secondCoord;
  
  baseCoord.X = 1;
  baseCoord.Y = 2;
  secondCoord.X = 1;
  secondCoord.Y = 3;  


  
  King king(PieceColor::White);
  Queen queen(PieceColor::White);

  Cell baseCell(&king), secondCell(&queen), emptyCell();

  queen.move(baseCell.getCoordinates(), secondCell.getCoordinates());
  return 0;
}
