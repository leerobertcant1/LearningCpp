#include <iostream>
#include <string>;
#include <Vector>;
#include "src/Log.h";

/*
	Vector allocates new memory when it exceeds the size and deletes the old memory.
	Reallocating is continually, how do we avoid copying when dealing with objects.
	Better to define the class, we don't have to though.

	Better to predfine based on number of objects.
	Emplace back only assures one copy occurs.
*/

//struct Coordinates 
//{
//	float m_x, m_y;
//
//	public:
//		float x, y;
//
//	Coordinates(float x, float y) :m_x(x), m_y(y){}
//
//	//Copy constructor
//	Coordinates(const Coordinates& coordinates) :m_x(x), m_y(y) 
//	{
//		Log("Copied");
//	}
//};
//
//int main()
//{	
//	std::vector<Coordinates> coordinates;
//
//	//reserve creates the predefined size.
//	coordinates.reserve(3);
//
//	coordinates.emplace_back(1, 2);
//	coordinates.emplace_back(3, 4);
//	
//	std::cin.get();
//}