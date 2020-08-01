#include <iostream>
#include "src/Log.h";

/*
	Pointers and references as what the computer will do.
	References are syntax sugar on top of pointers.
	A way to reference an existing variable, not new variables, don't have storage.
	Are just a reference to a variable.

	Need to send the number not the value because when passing number back and forth won't work.
*/

int main()
{
	int five = 5;
	int* memoryAddress = &five;
	int& reference = five;

	reference = 10;

	LogNumber(reference);

	std::cin.get();
}