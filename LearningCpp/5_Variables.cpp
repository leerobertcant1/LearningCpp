#include <iostream>

void Log(const char* message);

/*
		ints are 4 bytes large - neg 2bn to pos 2bn.
		Compiler tells me the size.
		1 byte = 8 bits of data.
		signed = negative sign (1 bits for the sign, 31 bits for the number)
		2 to the power or 31
		can use unsigned number so we have 32 bits to play with.

		char 1 byte, short 2 bytes, long 4 bytes, long lone 8 bytes.
		float 4 bytes = 5.5 is a double, double 8 bytes.
		bool 1 byte, can't be bit for the memory location; can store 8 bools in 1 byte.
		unsigned so can have a larger number.

		char can store numbers as well as characters.

		how we use data types is upto us, so not that many rules in C++.
		What truly matters is the memory stored.

		sizeof(bool) tells us the size.
	*/

//int main()
//{
//	
//
//	unsigned int primitiveType = 20;
//	char character = 'a';
//	float _double = 5.5;
//	float _float = 5.5f; //Floats need an f at the end.
//
//	std::cout << sizeof(primitiveType) << std::endl;
//	std::cout << sizeof(character) << std::endl;
//	std::cout << sizeof(_double) << std::endl;
//	std::cout << sizeof(_float) << std::endl;
//
//	//waits for a key press.
//	std::cin.get();
//}

/*
	Variables store data, stored in Stack or heap.
	Basic data types or primitive and have a basic purpose.
	We don't need to store data for that purpose.
*/