//#include <iostream>
//#include <string>
//#include "src/Log.h"
//
///*
//  Singletons useful in games.
//  Not really used in Web Dev.
//
//  Single instance. Do we need it as a class?
//  Defeats the point of OOP.
//  CPP don't need objects, can just be functions.
//
//  Global functionality repeatedly re-use.
//  Number generators or renderers, for example.
//  THey can behave like namespaces.
//
//  We organise global vars in CPP with Singletons.
//*/
//
////no ctor
//class Singleton
//{
//    public:
//        //Delete copy constructor so not copied.
//        Singleton(const Singleton&) = delete;
//
//        static Singleton& Get()
//        {
//            return instance;
//        }
//
//        int GetNumber()
//        {
//            return  Singleton::Get().PGetNumber();
//        }
//
//
//    private:
//        Singleton() {}
//
//        int PGetNumber()
//        {
//            return 5;
//        }
//
//        static Singleton instance;
//};
//
//int main()
//{
//    //This removes the Get function
//    auto number = Singleton::GetNumber;
//
//    std::cin.get();
//}
//
////Needs defining in CPP file.
//Singleton Singleton::instance;