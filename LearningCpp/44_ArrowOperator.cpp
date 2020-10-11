#include <iostream>
#include <string>;
#include "src/Log.h";
#include <memory>;

/*
	if pointer arrow operator needed as a pointer, need to dereference
	Arrow operator nicer than dereferencing, can overload it as an operator and use it to make code tidier.
*/

//class Person
//{
//	public:
//		std::string m_name;
//
//		Person(const std::string& name)
//		{
//			Log("Created");
//			this->m_name = name;
//		}
//};
//
//int main()
//{
//	Person* me = new Person("Lee");
//	Person& meDereferenced = *me;
//
//	//Dereferenced values.
//	LogString(meDereferenced.m_name);
//	LogString((*me).m_name);
//	LogString(me->m_name);
//
//	std::cin.get();
//}