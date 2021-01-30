//#include <iostream>
//#include <string>
//#include <any>
//#include "src/Log.h"
//
///*
//   Void pointers can store any data.    
//   CPP 17 version does this with std::any.
//
//   Variant a type safe Union, stores data in a Union.
//   Any small types a union, large type uses Void pointer
//   then dynamically allocates memory, bad for performance.
//
//   std:variant performs better with larger data.
//   Don't copy data for performance.
//   String always pass by reference.
//*/
//
//int main()
//{
//    std::any anyData;
//
//    anyData = 5;
//    anyData = "test";
//
//    //Exception will occur when not correct type.
//    std::string& newData = std::any_cast<std::string&>(anyData);
//
//    std::cin.get();
//}