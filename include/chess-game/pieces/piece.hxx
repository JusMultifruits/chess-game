#pragma once

#include <board/cell.hxx>

/*
 * Keep Enum to add factory later maybe?
 */
//enum PieceType { King, Queen, Rook, Bishop, Knight, Pawn };
enum PieceColor { White, Black };

class Piece {
public:
  Piece(PieceColor color);
  virtual void move(Cell origin, Cell target) = 0;
private:
  virtual bool isValidMove(Cell origin, Cell target) = 0;
  PieceColor color;
};


class King : public Piece{
  using Piece::Piece; // use Parent constructor
public:
  void move(Cell origin, Cell target) override;
private:
  bool isValidMove(Cell origin, Cell target) override;
};

class Queen : Piece{ 
  using Piece::Piece; // use Parent constructor
public:
  void move(Cell origin, Cell target) override;
private:
  bool isValidMove(Cell origin, Cell target) override;
};

