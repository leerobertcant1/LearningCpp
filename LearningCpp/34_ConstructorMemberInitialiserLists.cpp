#include <iostream>
#include <string>;
#include "src/Log.h";

/*
	Clean way of initialising items, avoids 
	initialising items twice.

*/

//class Person
//{
//	private:
//		mutable std::string m_Name;
//		mutable int m_age;
//	public:
//		Person(): m_Name("Name"), m_age(18)
//		{
//		}
//
//		const std::string& GetName() const
//		{
//			return m_Name;
//		}
//
//		void SetName(std::string name) const
//		{
//			m_Name = name;
//		}
//};
//
//int main()
//{
//	Person me;
//
//	LogString(me.GetName());
//
//	std::cin.get();
//}