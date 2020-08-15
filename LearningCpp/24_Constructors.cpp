//#include <iostream>
//#include "src/Log.h";
//
///*
//	Initialise at project creation.
//	Have to initialise otherwise will be whatever was left in memory.
//*/
//
//class Entity
//{
//	private: 
//		int m_X;
//
//	public:
//		Entity() 
//		{
//			m_X = 0;
//		}
//
//		Entity(int x)
//		{
//			m_X = x;
//		}
//
//		int& GetX() 
//		{
//			return m_X;
//		}
//
//		void SetX(int x)
//		{
//			m_X = x;
//		}
//};
//
//
//int main()
//{
//	Entity newEntity;
//
//	LogNumber(newEntity.GetX());
//
//	newEntity.SetX(10);
//
//	LogNumber(newEntity.GetX());
//
//	Entity anotherEntity(20);
//
//	LogNumber(anotherEntity.GetX());
//
//	std::cin.get();
//}