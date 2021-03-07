//#include <array>
//#include <iostream>
//#include <string>
//#include "src/Log.h"
//
///*
//   Have to be careful with Vectors, allocated on the heap.
//*/
//
//template<typename T, size_t S>
//class _Array 
//{
//	public:
//		int Size() const
//		{
//			return S;
//		}
//	private:
//		int m_Data;
//};
//
//
//int main()
//{
//	//Slower
//	int* heapArray = new int[5];
//
//	//better to use because might be right there on the stack
//	int stackArray[10];
//
//	std::array<int, 10> stdArray;
//	_Array<int, 10> templatedArray;
//
//	LogConstNumber(templatedArray.Size());
//
//	std::cin.get();
//}