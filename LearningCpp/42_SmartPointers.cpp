#include <iostream>
#include <string>;
#include "src/Log.h";
#include <memory>;

/*
	Smart pointer automates memor allocation.
	With these never have to use new/ delete.

	Uniquepointer = scoped pointer.
	They can't be copied, only one reference.
	Make unique handles errors.

	Sharedpointer good for copying, uses something called
	reference counting. When reference reaches 0 it gets deleted.
	Uses control block to store reference count.
	Underlying entity deleted when reaches 0;

	Weak pointer doesnt increase ref count, useful for checking to
	see if a pointer is alive. Can check if valid/ alive.

	Should use Smart pointer all the time.
*/

class Person
{
public:
	int age;

	Person(int age)
	{
		Log("Created");
		this->age = age;
	}

	Person()
	{
		Log("Created");
	}

	~Person()
	{
		Log("Deleted");
	}
};

int main()
{
	{
		//use bottom for exception handling
		std::unique_ptr<Person> p(new Person(12));
		std::unique_ptr<Person> p2 = std::make_unique<Person>(20);

		LogNumber(p->age);
		LogNumber(p2->age);
	}

	{
		std::shared_ptr<Person> p = std::make_shared<Person>(15);
		LogNumber(p->age);

		std::shared_ptr<Person> p2 = p;
		LogNumber(p2->age);

		std::weak_ptr<Person> p3 = p;
	}

	std::cin.get();
}