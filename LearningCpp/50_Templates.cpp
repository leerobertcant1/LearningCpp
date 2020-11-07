#include <iostream>
#include <string>;
#include "src/Log.h";

/*
	Not generics, more powerful in cpp.
	Can do anything not limited by type system.
	Gets the compiler to write code for us based on set of rules.
	Useful when function take in function but with different types.
	Reduces code. Evaluated at compile time.
	Template doesn't exist until we call it.
	Can use to declare the size of arrays.
	Alternative to the constructor.
	Useful for logging, better than writing an overload for each item.
	Don't go too far with them, it's very easy.
*/

class Types
{
	public:
		template<typename T>
		void LogType(T value) 
		{
			Log(typeid(value).name());
		}
};

int main()
{
	Types* types = new Types();

	types->LogType<std::string>("Ayup");

	delete types;

	std::cin.get();
}

