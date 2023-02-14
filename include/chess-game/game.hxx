#pragma once

#include <array>

#include <board/board.hxx>
#include <pieces/piece.hxx>
#include <player/player.hxx>

class Game{
public:
  Game();
  void startGame();
private:
  Board board;
  std::array <Player, 2> players;
};
