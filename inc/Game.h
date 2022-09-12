#pragma once

#include "Car.h"
#include "Road.h"
#include "Window.h"

class Game
{
private:
    const Window &_win;
    Car _car;
    Road _road;

public:
    explicit Game(const Window &win);
    ~Game();

    void run();
};
