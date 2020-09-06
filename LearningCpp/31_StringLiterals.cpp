#include <iostream>
#include <string>;
#include "src/Log.h";
#include <stdlib.h>;

/*
	string literals are strings.
	\0 is the null character.

	strlen from stf lib C library.
	string literals are read only, stored in a const section in memory.
	Should always use a pointer char with const.

	different byte types for characters if needed.
	Can use string literals. ALWAYS readonly. 
*/

//int main()
//{
//	using namespace std::string_literals;
//
//	const char* meC = "Lee Cant";
//	const wchar_t* meW = L"Me";
//	const char16_t* me16 = u"Me"; //2 bytes(upto compiler to decide)
//	const char32_t* me32 = U"Me";
//	std:: string me = "Lee Cant";
//	std::string appendedString = "Lee"s + "Cant";
//
//	int length = strlen(meC);
//
//	LogNumber(length);
//
//	std::cin.get();
//}