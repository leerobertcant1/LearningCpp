#include <iostream>
#include "Log.h";
#include "Maths.h";

/*
	Breakpoints and memory important (other languages not memory).
	F10/F11 next step into, etc.

	Autos/Locals - maybe important variables.
	Watch - values I want to watch change.

	MemoryView - Debug/ Windows/ Memory
	Can use to debug the memory location to see anything wrong.
	Right click hex display to get the stack memory
	Pointers include the memory address.
	Use the Memory View to check when there are errors.
*/

//int main()
//{
//	const char* initialised = "Initialised";
//	Log(initialised);
//
//	for (int i = 0; i < 5; i++)
//	{
//		const char* loop = "loop";
//		Log(loop);
//
//		if (i == 4) 
//		{
//			break;
//		}
//	}
//
//	int addedNumber = Add(8,9);
//	
//	//Log(addedNumber);
//
//	// waits for a key press.
//	std::cin.get();
//}