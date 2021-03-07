//#include <iostream>
//#include <string>
//#include "src/Log.h"
//#include "Vector.h"
//
///*
//   Only use Vector with heap allocation, otherwise use Array.
//   Vector re-sizing is slow.
//
//   Don't use smart pointers for allocations.
//*/
//
//int main()
//{
//	//Forces a delete memory block
//	{
//		//Need to re-allocate at each pushback
//		_Vector<std::string, 10> data;
//		data.PushBack("Lee");
//		data.PushBack("Cant");
//		data.PushBack("Data");
//
//		auto dataContents = data.GetData();
//		for (size_t i = 0; i < data.GetSize(); i++)
//		{
//			LogString(dataContents[i]);
//		}
//	}
//
//	std::cin.get();
//}