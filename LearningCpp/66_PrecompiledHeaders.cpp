//#include <iostream>
//#include <string>
//#include "src/Log.h"

/*
    Useful for larger projects.
    Converts header files into pre-compiled, saves time.
    Each time the file read, has to re-read the entire file.
    We have lots of repetitive code.

    Good for strings, or vectors. Things in alot of places.
    Things like GLFW we compile once and we're done.

    We can check the pre-processor output to see how much
    is passed through. Need to set this up in the settings.

    Done by putting multiple using in one file.
    We test it by building and seeing how long.
*/

//int main()
//{
//    std::cin.get();
//}