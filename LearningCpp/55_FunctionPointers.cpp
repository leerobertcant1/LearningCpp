#include <iostream>
#include <string>
#include "src/Log.h"

/*
    Raw and comes from C.
    Way to assign a function to a variable.

    Just cpu instructions, better to use auto.
    Used to get the location.

    Useful when we want our functions to be more dynamic.
    Instead of a factory strategy for example.
    Can always use lambdas instead.
*/

//void Hi()
//{
//    Log("Hi");
//}
//
//int main()
//{
//    auto funct = Hi;
//    auto funct2 = &Hi;
//
//    funct();
//    funct2();
//
//    //When we don't want auto.
//    typedef void (*Ayup)();
//
//    Ayup ayup = Hi;
//
//    ayup();
//
//    std::cin.get();
//}