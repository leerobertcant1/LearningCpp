//#include <iostream>
//#include <string>;
//#include "src/Log.h";
//
///*
//	Macro, pre-processor automates things.
//	Hash is a pre-processor directive. 
//	Text-editing stage where we control what goes to the compiler.
//	Can easily overcomplicated this, only use this when needed.
//
//	Effectively replacement code, avoids code repetition.
//	Bad example below, hard to see when defined in other files.
//	Only use it when much code duplication;
//	
//	Macros can be any code.
//	Can be useful with logging systems.
//
//	IfDef can be used with various logging systems.
//	Also useful for debug logging and release logging.
//
//	Macros can be used to dynamically generate code
//	Can also declare object types in properties for if defs.
//	Backslashes for multiline macros.
//*/
//
//#define CINGET std::cin.get();
//#define LOG(msg) Log(msg);
//
//int main()
//{
//	LOG("Test");
//	CINGET;
//}