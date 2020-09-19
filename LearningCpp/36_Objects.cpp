#include <iostream>
#include <string>;
#include "src/Log.h";

/*
	Instantiate except Static.

	Occupies memory even when empty, goes into Stack/ Heap.
	Stack - automatic, scope declared then destroyed.
	Heap - big mysterious place, sits until we delete.

	Always create objects without new, as fastest and most managed.
	If passing objects around functions then need to use new.

	Don't use Heap code(new) where possible, less performant.
	When I hit new, memory must be freed.

	Arrow operator de-references object for us.

	Smart pointers allocates on heap and auto-deletes.
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
//	//Calls default constructor - stack allocated.
//	Person noName;
//	LogString(noName.GetName());
//
//	//Initialised - stack allocated.
//	Person me = Person("Lee");
//	LogString(me.GetName());
//
//	// Heap needs to be a pointer and new.
//	//Looks like Java and C sharp code.
//	Person* meStack = new Person("Lee-stack");
//	LogString(meStack->GetName());
//
//	delete meStack;
//
//	std::cin.get();
//}