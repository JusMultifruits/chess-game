#pragma once

#include <board/cell.hxx>

//enum PieceType { King, Queen, Rook, Bishop, Knight, Pawn };
enum PieceColor { White, Black };

class Piece {
public:
  Piece(PieceColor color, Cell position);
  virtual void move(Cell cell) = 0;
private:
  virtual bool isMoveValid(Cell cell) = 0;
  PieceColor color;
  Cell position;
};


class King : public Piece{
  using Piece::Piece;
public:
  void move(Cell cell) override;
private:
  bool isMoveValid(Cell cell) override;
};

class Queen : Piece{
  using Piece::Piece;
public:
  void move(Cell cell) override;
private:
  bool isMoveValid(Cell cell) override;
};

