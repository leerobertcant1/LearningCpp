//#include <iostream>
//#include <string>
//#include "src/Log.h"
//
///*
//   String operations can be slow.
//
//   Can use malloc and check the size.
//   Good to debug, must check the memory allocations.
//   Also can put timers to check the time on performance.
//
//   Look at the data see what i'm doing, see if better
//   ways to do things. Substring for example creates whole new strings.
//
//   CPP 17 can use stringview to look.
//   Pointer to existing string + size.
//   StringView has no allocations.
//
//   Const char* more efficient than string.
//   String View also stores memory address.
//*/
//
//int main()
//{
//    const char* me = "Lee";
//    std::string_view me2(me, 4);
//
//    std::cin.get();
//}