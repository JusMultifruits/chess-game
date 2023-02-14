#pragma once

#include <board/cell/coordinates.hxx>

/*
 * Keep Enum to add factory later maybe?
 */
//enum PieceType { King, Queen, Rook, Bishop, Knight, Pawn };
enum PieceColor { White, Black };

class Piece {
public:
  Piece(PieceColor color);
  virtual void move(Coordinates origin, Coordinates target) = 0;
private:
  virtual bool isValidMove(Coordinates origin, Coordinates target) = 0;
  PieceColor color;
};


class King : public Piece{
  using Piece::Piece; // use Parent constructor
public:
  void move(Coordinates origin, Coordinates target) override;
private:
  bool isValidMove(Coordinates origin, Coordinates target) override;
};

class Queen : public Piece{ 
  using Piece::Piece; // use Parent constructor
public:
  void move(Coordinates origin, Coordinates target) override;
private:
  bool isValidMove(Coordinates origin, Coordinates target) override;
};

