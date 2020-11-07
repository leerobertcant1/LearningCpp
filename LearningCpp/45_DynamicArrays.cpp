#include <iostream>
#include <string>;
#include <Vector>;
#include "src/Log.h";

/*
	Dynamic arrays is called Vector, bad naming.
	Can re-size unlike normal arrays, when elements exceeded, creates a new array adds to it and deletes the old one.

	More optimal better to store objects instead of pointers, try and allocate inline.
	Vector of strings may be worse when re-sizing the array. 

	Need to pass this by reference.
*/

//struct Coordinates 
//{
//	public:
//		float x, y;
//};
//
//int main()
//{	
//	//Can declare raw type using templates.
//	std::vector<Coordinates> coordinates;
//
//	coordinates.push_back({ 1, 2 });
//	coordinates.push_back({ 3, 4 });
//
//	//Property interation.
//	for (int i = 0; i < coordinates.size(); i++)
//	{
//		LogFloat(coordinates[i].x);
//	}
//
//	//Foreach loop basically.
//	for (Coordinates& coords : coordinates)
//	{
//		LogFloat(coords.y);
//	}
//
//	coordinates.clear();
//
//	std::cin.get();
//}