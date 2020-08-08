#include <iostream>
#include "src/Log.h";

/*
	Static outside - linkage internal only visible where defined
	Static inside - share memory all inside of class or struct.

	s_ is a convention
	only linked internally inside translation unit.

	extern says external.

*/

////Not available outside this file - kinda like private but for files.
//static int s_staticVariable = 10;
//
////available outside of class
//extern  int s_ExternStaticVariable = 10;
//
//int main()
//{
//	LogNumber(s_ExternStaticVariable);
//
//	std::cin.get();
//}