//#include <iostream>
//#include <string>
//#include <vector>
//#include "src/Log.h"
//
///*
//	Look more into the CPP standard code when understanding.
//*/
//
//template<typename T>
//class _Iterator
//{
//public:
//	_Iterator(void* ptr)
//	{
//		m_ptr = ptr;
//		Log("Created");
//	}
//
//	~_Iterator()
//	{
//		Log("Deleted");
//	}
//
//	_Iterator& operator++()
//	{
//		m_ptr++;
//		return *this;
//	}
//
//	//Needs to receive copy.
//	_Iterator& operator--(int)
//	{
//		_Iterator iterator = *this;
//		++(*this);
//		return iterator;
//	}
//
//	_Iterator& operator--()
//	{
//		m_ptr++;
//		return *this;
//	}
//
//	//Needs to receive copy.
//	_Iterator& operator++(int)
//	{
//		_Iterator iterator = *this;
//		++(*this);
//		return iterator;
//	}
//
//private:
//	void* m_ptr;
//};
//
//int main()
//{
//	{
//		std::vector<int> data = { 1, 2, 3, 4 };
//
//		for (std::vector<int>::iterator it = data.begin(); it != data.end(); it++)
//		{
//			LogNumber(*it);
//		}
//	}
//
//	std::cin.get();
//}