#include <iostream>
#include <raylib.h>

#include "Window.h"

int main(int argc, char const *argv[])
{
    Window win(320, 240, "bbracer");

    while (!win.shouldClose())
    {
        BeginDrawing();
        {
            ClearBackground(BLUE);
        }
        EndDrawing();
    }

    return 0;
}
