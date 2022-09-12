#include "Game.h"
#include <raylib.h>

Game::Game(const Window &win): _win(win), _car(), _road()
{
}

Game::~Game() = default;

void Game::run()
{
    while (!_win.shouldClose())
    {
        BeginDrawing();
        {
            ClearBackground(BLUE);
            _car.update(GetFrameTime());

            _road.draw();
            _car.draw();
        }
        EndDrawing();
    }
}
