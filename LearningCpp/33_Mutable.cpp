#include <iostream>
#include <string>;
#include "src/Log.h";

/*
	
	Mutable useful for const and lambda.
	something can change.

//	Useful with debug values inside function.
//*/
//
//class Person 
//{
//	private:
//		mutable std::string m_Name;
//	public:
//		const std::string& GetName() const
//		{
//			return m_Name;
//		}
//
//		 void SetName(std::string name) const
//		{
//			 m_Name = name;
//		}
//};
//
//int main()
//{
//	Person me;
//
//	std::string name = me.GetName();
//
//	int myAge = 34;
//
//	auto lambda = []() 
//	{
//		Log("Hi");
//	};
//
//	lambda();
//
//	std::cin.get();
//}