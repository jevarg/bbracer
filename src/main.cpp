#include <iostream>
#include <unistd.h>

#include "Window.h"

int main(int argc, char const *argv[])
{
    std::cout << "Hello world!" << std::endl;

    Window win(320, 240, "bbracer");

    return 0;
}
