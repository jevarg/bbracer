#pragma once

#include <raylib.h>

class Entity
{
protected:
    Vector2 _position;

public:
    virtual const Vector2 &getPosition() const = 0;
    virtual void update(float delta) = 0;
    virtual void draw() = 0;
};