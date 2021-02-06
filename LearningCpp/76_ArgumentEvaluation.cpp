//#include <iostream>
//#include <string>
//#include "src/Log.h"
//
///*
//    What order evaluated. We don't really know, different per compiler.
//*/
//
//void funct(int a, int b) 
//{
//    LogNumber(a);
//    LogNumber(b);
//}
//
//int main()
//{
//    int value = 1;
//
//    //Undefined behaviour, depends on CPP compiler - complete mess.
//    funct(value++, value++);
//
//    std::cin.get();
//}