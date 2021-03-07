//#include <vector>
//#include <iostream>
//#include <string>
//#include "src/Log.h"
//
///*
//   Iterate over a collection of elements - easy to overlook.
//   Probs won't use might be handy though, delete elements, etc.
//
//   Can use reverse iterators.
//   End is element after last element.
//
//   Useful with unordered maps, which have dynamic key names.
//   Can use structures bindings supports CPP17 'for(auto [key, value])'
//*/
//
//int main()
//{
//	std::vector<int> data = { 1, 2, 3, 4 };
//
//	//foreach loop
//	for (int value : data)
//	{
//		LogNumber(value);
//	}
//
//	for (std::vector<int>::iterator it = data.begin(); it != data.end(); it ++)
//	{
//		//De-reference to get the value.
//		LogNumber(*it);
//	}
//
//	std::cin.get();
//}