//#include <iostream>
//#include <string>
//#include "src/Log.h"
//
///*
//    Strings allocate memory. We don't want
//    heap allocation where possible.
//
//    Small strings aren't heap allocated.
//    A stack-based buffer below a certain length.
//    Visual Studio is 15 characters or less.
//    I don't need to optimise this as not a heap
//    allocation.
//
//    Can use operator new and malloc to see the size of 
//    a variable.
//*/
//
//
//int main()
//{
//    //Not heap-allocated, a small string.
//    //In statically allocated buffer.
//    std::string me = "Lee";
//
//    std::cin.get();
//}