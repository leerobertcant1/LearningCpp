//#include <iostream>
//#include "src/Log.h";
//
///*
//	Pointers are the basis for arrays.
//	Collection of items. Zero index in most languages.
//
//	Should always write inside the array.
//	Faster on heap but we need to free up resources.
//	Heap needed when we pass about, when passing 
//	function data better to pass memory address.
//
//	sizeof(stackarray) / sizeof(int) 
//	tells us the elements total. Doesn't work with pointers.
//
//	Generally better to use std:array	
//*/
//
//int main()
//{
//	static const int heapSize = 5;
//
//	int integers[5];//stack
//	int* heapIntegers = new int[heapSize]; // heap
//
//	integers[0] = 5;
//
//	LogNumber(integers[0]);
//
//	//Always use less than otherwise slight performance hit
//	for (int i = 0; i < 5; i++)
//	{
//		if (i == 1) 
//		{
//			integers[i] = 20;
//			heapIntegers[i] = 20;
//			LogNumber(integers[i]);
//			LogNumber(heapIntegers[i]);
//			continue;
//		}
//			
//		integers[i] = 10;
//		heapIntegers[i] = 10;
//		LogNumber(integers[i]);
//		LogNumber(heapIntegers[i]);
//	}
//
//	delete heapIntegers;
//
//	std::cin.get();
//}