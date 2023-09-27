#include <board/cell/coordinates.hxx>

std::ostream& operator << (std::ostream& outs, const Coordinates coord){
  return outs << "(" << coord.X << "," << coord.Y << ")";
}

