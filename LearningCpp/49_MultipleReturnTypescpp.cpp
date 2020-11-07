//#include <iostream>
//#include <string>;
//#include "src/Log.h";
//
///*
//	Tuples good to return 2 types. Not named vars so hard to understand.
//	Can also use objects for this, depends on situation.
//	Arrays also good.	
//*/
//
//class Coordinate
//{
//	public:
//		int x, y;
//
//		Coordinate* Get()
//		{
//			Coordinate* m_coordinate = new Coordinate();
//
//			m_coordinate->x = 10;
//			m_coordinate->y = 20;
//
//			return m_coordinate;
//		}
//};
//
//int main()
//{
//	//Stack
//	Coordinate base = Coordinate();
//
//	//Heap
//	Coordinate* coords = base.Get();
//
//	LogNumber(coords->x);
//
//	delete coords;
//
//	std::cin.get();
//}
//
