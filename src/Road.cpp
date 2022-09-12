#include <raylib.h>
#include "Road.h"

Road::Road(): width(100) {}
Road::~Road() = default;

void Road::draw() const
{
  DrawRectangle((320 / 2) - (width / 2), 0, width, 240, GRAY);
}
