#include "Window.h"

#include <raylib.h>
#include <iostream>

Window::Window(int w, int h, const char *title): _width(w), _height(h), _title(title)
{
    InitWindow(w, h, title);
}

Window::~Window()
{
    CloseWindow();
}
