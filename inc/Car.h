#pragma once

#include "Entity.h"

class Car: public Entity
{
private:
  Vector2 _velocity;
  float _speed;

public:
    Car();
    ~Car();

    const Vector2 &getPosition() const override;
    void update(float delta) override;
    void draw() override;
};
