#pragma once

class Window
{
private:
    int _width;
    int _height;
    const char *_title;

public:
    Window(int w, int h, const char *title);
    ~Window();
};
