#include <iostream>
#include <string>;
#include "src/Log.h";

/*
	Memory matters in CPP, else why write in CPP?

	New matters especially in a managed language.
	Allocates memory on the heap.
	New int = 4 bytes of memory, then it needs to find it.
	Once found then gets a pointer to that address.
	New takes time to find; freelist maintains free bytes.

	New is just an operator which means we can overload it.
	Just has a size, to allocate bytes.

	Calls the underlying C function malloc in addition to the
	constructor.

	Delete calls the free function afterwards, needs to be called.
	Delete with [] with arrays.

	New can decide where the memory comes from, via new(var)
*/

//class Person
//{
//	private:
//		std::string m_name;
//
//	public:
//		Person()
//		{
//			m_name = "No name";
//		}
//
//		Person(const std::string& name)
//		{
//			m_name = name;
//		}
//
//		const std::string& GetName()
//		{
//			return m_name;
//		}
//};
//
//int main()
//{
//	//Creates then asks for that block of bytes.
//	//Also calls constructor.
//	Person* me = new Person("Lee");
//
//	LogString(me->GetName());
//	
//	delete me;
//
//	std::cin.get();
//}