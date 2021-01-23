//#include <iostream>
//#include <string>
//#include <tuple>
//#include "src/Log.h"
//
///*
//    Cpp 17 thing, multiple return values better.
//    Simplify our code, make it much cleaner.
//    Useful with Structs, Tuples, etc.
//    Tuples can be expanded as many values, so dont use pair.
//*/
//
//std::tuple<std::string, int> GetPerson()
//{
//    return { "me", 34 };
//}
//
//int main()
//{
//    //Old style 1
//    auto me = GetPerson();
//    auto name = std::get<0>(me);
//
//    //Old style 2 - Javascripty.
//    std::string name;
//    int age;
//    std::tie(name, age) = GetPerson();
//
//    //new style
//    auto[name2, age2] = GetPerson();
//
//    std::cin.get();
//}