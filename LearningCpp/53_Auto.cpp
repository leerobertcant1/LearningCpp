#include <iostream>
#include <string>;
#include "src/Log.h";

/*
	Auto is basically var in C#.
	Have to be careful because myName is a pointer.

	Don't need to worry about types, even if I change the types of pre-defined items.
	Auto is mainly a style.

	Useful for APIs when return types from the API changes.
	Pros and cons here. It keeps working, but it would be good to know the type change, where it breaks further down.

	In terms of style var seems more common place in C#
	Auto not common in CPP.

	Where there are long complex type names var is useful
	Objects with lists are an example of this.

	You can also use alias or typedef for this.
	We still need to reference items for auto when not primitive variable types.
	
*/

//class Person 
//{
//	public:
//		int age;
//};
//
//int main()
//{
//	auto myName = "Lee";
//	auto myAge = 34;
//
//	using Age = Person;
//
//	Age* age;
//
//	delete age;
//	delete myName;
//
//	std::cin.get();
//}