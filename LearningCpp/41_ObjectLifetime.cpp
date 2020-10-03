//#include <iostream>
//#include <string>;
//#include "src/Log.h";
//
///*
//	How they live on the Stack.
//	Need to know this so the code doesnt crash.
//	Data structure, like stack of books.
//
//	In a scrope we have a Stack frame, like adding
//	a book to the pile, each var inside the book is gone.
//	So when class dies so does var.
//
//	Smart pointers delete when out of scope.
//*/
//
//class Person
//{
//	public:
//		int age;
//
//	Person(int age)
//	{
//		this->age = age;
//	}
//
//	Person() 
//	{
//		Log("Entity created");
//	}
//
//	~Person()
//	{
//		Log("Entity destroyed");
//	}
//};
//
//int main()
//{
//	//scope, with a pointer we need to delete manually.
//	{
//		Person p;
//	}
//
//	{
//		Person* pe = new Person();
//		delete pe;
//	}
//
//	std::cin.get();
//}