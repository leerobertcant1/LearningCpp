#include <iostream>
#include <string>;
#include "src/Log.h";
#include <memory>;

/*
	Copying data/ memory.
	Want to avoid copying where possible due to performance.
	When use assignment operator with *, always copying the value.

	Old way example below.

	Can use friend to access a private member.

	Read the callstack for errors.
	When copying arrays, allocate a new one.

	Shallow copy, copies pointers - so same memory address.
	Deep copy copies the entire object

	With strings always pass with const reference.
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
//
//		//Deep copy
//		Person(const Person& me2)  :m_name(me2.m_name)
//		{
//			//typically array data put here.
//		}
//
//		//Deep copy - doesnt copy with delete.
//		//Person(const Person& me2) = delete;
//};

//int main()
//{
//	Person me = Person("Lee");
//
//	std::string name = me.m_name;
//	LogString(name);
//
//	me.m_name = "Leo";
//	std::string name2 = me.m_name;
//
//	LogString(name2);
//
//	std::cin.get();
//}