//#include <iostream>
//#include <string>
//#include "src/Log.h"
//
///*
//   Need for polymorphism to avoid memory leaks.
//*/
//
//class Animal
//{
//    public:
//        Animal()
//        {
//            Log("Animal created");
//        }
//
//        ~Animal()
//        {
//            Log("Animal Destroyed");
//        }
//};
//
//class Person : public Animal
//{
//    public:
//        Person()
//        {
//            Log("Person created");
//        }
//
//        virtual ~Person()
//        {
//            Log("Person Destroyed");
//        }
//};
//
//int main()
//{
//    Animal* a = new Animal();
//    delete a;
//
//    Log("-------------------");
//
//    Person* p = new Person();
//    delete p;
//
//    Log("-------------------");
//
//    //Issue arrives here, so needed a virtual destructor
//    Animal* aa = new Person();
//    delete aa;
//
//    std::cin.get();
//}