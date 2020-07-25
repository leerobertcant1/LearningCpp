#include <iostream>
#include "src/Log.h";

/*
	Most important concept - simple do not overthink.
	Raw pointers not Smart Pointers.
	For CPP most important thing is memory.

	Pointer is a int which stores a memory address, that's it!
	Kinda like an IP address - each address 1 byte of data, pointers tells is where the byte is.

	Can work without them, but accessing memory increases optimisation.
	No types, types is just a fiction to make our lives easier.
	All it does is hold a memory address.

	& gives us memory address - can search for this in memory view and will tell us the value.
	number is 14000000.

	* in front of var gives me the data.
	Types we tell the compiler.
	
*/

int main()
{
	//has to find 0 - 0 memory address.
	void* typeLessPointer = NULL;
	void* typeLessPointerTwo = nullptr;

	//Stack.
	int number = 20;
	void* numberMemoryAddress = &number;

	//This is how we cast pointers.
	double* castedNumber = (double*) &number;
	int* recastedNumber = (int*) castedNumber;

	//1 byte for one 8 for 8 chars - pts to beginning of block of memeory.
	char* chars = new char[8];
	//Sets the memory.
	memset(chars, 0, 8);

	//Points to pointers, we have a pointers which points to a memory address
	char** charsChars = &chars;

	//Heap data must be deleted.
	delete[] chars;

	std::cin.get();
}