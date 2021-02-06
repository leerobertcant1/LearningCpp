//#include <iostream>
//#include <string>
//#include "src/Log.h"
//
///*
//    Conceptually:
//       L - leftside of equals.
//       R - rightside of equals.
//
//    R Value temp object, used for optimisation.
//*/
//
//int Get10() 
//{
//    return 10;
//}
//
//int& Get10Ref()
//{
//    static int value = 10;
//    return value;
//}
//
//int main()
//{
//    //10 is r value.
//    int index = 10;
//    //lvalue = lvalue
//    int index2 = index;
//
//    //This expression says modifiable lvalue.
//    /*Get10() = 5;*/
//
//    //Can assign to RValue with reference.
//    Get10Ref() = 10;
//
//    //Can use const to break the rule.
//    const int& number = 10;
//
//    //double & for RValue Reference.
//    int&& rValueRef = 20;
//
//    std::cin.get();
//}