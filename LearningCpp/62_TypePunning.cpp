//#include <iostream>
//#include <string>
//#include "src/Log.h"
//
///*
//    Way to get around the type system.
//    Not strongly enforced, because of direct memory access.
//    Can re-interpret a class as a byte array.
//
//    Can manipulate memory easily and freely.
//*/
//
//struct Coords
//{
//    int x, y;
//};
//
//int main()
//{
//    // Converts int ito a double implicitly.
//    // can be explicit with casts.
//    int x = 20;
//    double y = x;
//
//    //Int pointer to double pointer and de-refence.
//    double z = *(double*)&x;
//    
//    //Memory address to a int pointer.
//    Coords c = { 2, 3 };
//    int* a = (int*)&c.x;
//
//    std::cin.get();
//}