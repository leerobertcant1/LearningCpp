#include <array>
#include <iostream>
#include <string>
#include "src/Log.h"

/*
    Std array part of the std template.
    Arrays that don't grow.

    If we know the size and don't want it to change.
    Advantage of this as keeps track of size.
    More functional methods with this like .size()

    Stored on Stack and quite fast.
    Size here is a template argument not a value.
    Can read the class by right click then investigating.

    Should use this instead of normal arrays.
*/


//int main()
//{
//    std::array<int, 10> array;
//
//    for (int i = 0; i < 10; i++)
//    {
//        array[i] = i;
//    }
//
//    LogNumber(array[6]);
//
//    std::cin.get();
//}