#pragma once

#include <ostream>

struct Coordinates {
  unsigned short X;
  unsigned short Y;

  bool operator< (Coordinates coord) const {
    return ((10*X+Y) < 10*coord.X+coord.Y);
  }

};
std::ostream& operator << (std::ostream& outs, const Coordinates coord){
  return outs << "(" << coord.X << "," << coord.Y << ")";
}

