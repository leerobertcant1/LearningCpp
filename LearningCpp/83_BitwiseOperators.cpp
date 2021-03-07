#include <iostream>
#include <string>
#include "src/Log.h"

/*
	Numbers stored in binary.
	Debug stores in hexadecimal.
	Engineering calculations: << >> shifts bits left or right by how many place we want.
	
	Bit shift operators quicker, nowadays compilers are quicker though.

*/


int main()
{
	//101 in binary.
	//int 4 bytes(allocated on stack) - 8 bits per byte.	
	unsigned int five = 5;

	//multi by x2n
	unsigned int bitShiftLeft = five << 1; //01010000 (10)

	//divide by /2n
	unsigned int bitShiftRight = five >> 1; //01000000 (2)

	std::cin.get();
}