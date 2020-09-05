#include <iostream>
#include <string>;
#include "src/Log.h";

/*
	Group of characters, any type - string is an array of characters.
	Characters are various forms, encoding, etc.
	Chars typically 1 byte of memory, useful for memory buffers.

	ASCII, UTF-8,  UTF-16(8 to the power of 16) and so on.

	Normal string memory view is ASCII representation, so have number values.

	/0 null termination character to tell us the size of a string.
	pointer address to /0 how it appears in memory.

	cpp single quote, double makes it a char pointer.

	cpp uses std:string.
	w string for wide strings. Always uses std: string.

	when concatenation better to do on multiple lines or can do a string constructor.

	When passing class of string you create a copy of that class.
	String copying very slow comparatively.
	If we pass a string pass a const reference.
*/

int main()
{

	//C style way definition, immutable so better to use const in Cpp.
	//Not heap allocated - only delete when new.
	const char* me = "Lee";

	//How it appears in memory.
	char me2[4] = { 'L', 'e', 'e', '\0' };

	std::string me3 = "Lee";
	std::string me4 = std::string("Lee ") + "cant";

	LogString(me4);

	std::cin.get();
}