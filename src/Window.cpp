#include "Window.h"
#include <raylib.h>

Window::Window(int w, int h, const char *title): _width(w), _height(h), _title(title)
{
  InitWindow(w, h, title);
  SetTargetFPS(60);
}

Window::~Window()
{
    CloseWindow();
}

bool Window::shouldClose() const
{
    return WindowShouldClose();
}