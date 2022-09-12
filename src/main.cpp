#include "Window.h"
#include "Game.h"

int main(int argc, char const *argv[])
{
    Window win(320, 240, "bbracer");
    Game game(win);

    game.run();

    return 0;
}
