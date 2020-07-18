#include <iostream>
#include "Log.h";

/*
	Cpp File - translation unit.
	Declare types of functions, used for declarations.
	Declarations a big thing in CPP to tell the compiler it exists.
	
	Pragma once, pre-processor only says to include once, ensures header file one per cpp file (translation unit).
	Include copies and pastes files, so you can create a chain of includes, so pragma once needed.
	Traditional way for pragma once we use ifndef _LOG_H define _LOG_H endif

	Angular brackets search all directory.
	Quotes are relative, can do "iostream" but angular brackets better practice.
	
	cpp library has no extension, c library has a .h, eg
	"iostream.h" - c, "iostream" - cpp.
*/

//
//int main()
//{
//	Log("Hi");
//
//	// waits for a key press.
//	std::cin.get();
//}
//
//struct Person{};