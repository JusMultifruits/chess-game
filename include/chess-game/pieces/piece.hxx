#pragma once

enum PieceType { King, Queen, Rook, Bishop, Knight, Pawn };
enum PieceColor { White, Black };

class Piece {
public:
  Piece(PieceType type, PieceColor color);
private:
  PieceType type;
  PieceColor color;
};


