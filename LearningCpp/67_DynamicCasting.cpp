//#include <iostream>
//#include <string>
//#include "src/Log.h"
//
///*
//   A safety net, cpp style cast only.
//   More like a function, evaluated at runtime, has a runtime cost.
//   Extra work, so small performance cost.
//
//   At runtime stores runtime type information.
//   Adds overhead with storing types.
//
//   Can turn runtime type info off if not needed.
//   We get an error if we dynamic cast though.
//*/
//
//class Human { public: virtual void Print() {} };
//class Person : public Human{};
//class God : public Human{};
//
//int main()
//{
//    Person* p = new Person();
//    Human* h = p;
//    //Dangerous as will crash.
//   /* Human* h2 = new God();*/
//
//    //Cast one type to another.
//    //Breaks SOLID principle though, recasting to top type.
//    Person* p2 = dynamic_cast<Person*>(h);
//    
//    delete h;
//    delete p;
//    delete p2;
//
//    std::cin.get();
//}