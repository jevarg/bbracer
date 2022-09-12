#include <raylib.h>
#include <raymath.h>
#include "Car.h"

Car::Car(): Entity(), _velocity({}), _speed(50)
{
}

Car::~Car() = default;

const Vector2 &Car::getPosition() const
{
  return _position;
}

void Car::update(float delta)
{
  bool moveRight = IsKeyDown(KEY_RIGHT);
  bool moveLeft = IsKeyDown(KEY_LEFT);

  if (moveRight || moveLeft) {
    if (moveRight) {
      _velocity.x = _speed * delta;
    }

    if (moveLeft) {
      _velocity.x = -_speed * delta;
    }
  } else {
    _velocity.x = 0;
  }

  _position = Vector2Add(_position, _velocity);
}

void Car::draw()
{
  DrawRectangleV(_position, {.x = 40, .y = 30}, RED);
}
