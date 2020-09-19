#include <iostream>
#include <string>;
#include "src/Log.h";

/*
	Inline ifs - syntactic sugar.
	Doesn't create an intermediate string, so better performance.
*/

//int main()
//{
//	int age = 34;
//	std::string name = "Lee";
//
//	Log(34 > 18 ? "Adult" : "Child");
//
//	Log(34 > 18 ? name == "Lee" ? "Name: Lee" : "Name not Lee" : "Child");
//
//	std::cin.get();
//}