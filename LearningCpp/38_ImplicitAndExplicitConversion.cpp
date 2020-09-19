#include <iostream>
#include <string>;
#include "src/Log.h";

/*
	Implicit auto.
	Explicit - stops implicit conversion.
*/

class Person
{
	private:
		std::string m_name;
		int m_age;

	public:
		Person()
		{
			m_name = "No name";
		}

		Person(const std::string& name)
		{
			m_name = name;
		}

		explicit Person(int age)
		{
			m_age = age;
		}

		const std::string& GetName()
		{
			return m_name;
		}

		int GetAge()
		{
			return m_age;
		}
};


int main()
{
	Person me = Person("Lee");

	//implicit conversion - poor form.
	//explicit stops conversion.
	//Person n_me = 15;

	std::cin.get();
}