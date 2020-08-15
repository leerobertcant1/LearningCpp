#include <iostream>
#include "src/Log.h";

/*
	Inheritance prevents code duplication and extends when needed.
*/

class Entity
{
	private:
		int m_X;

	public:
		Entity()
		{
			m_X = 20;
			Log("Object initialised");
		}

		~Entity()
		{
			Log("Object destructed");
		}

		//Log needs to be different or you get an unhandled exception, Stack Overflow.
		void LogMessage(const char* message) 
		{
			Log(message);
		}
};

//Public needed to give access to the data.
class ChildEntity : public Entity
{
	
};

int main()
{
	ChildEntity childEntity;

	childEntity.LogMessage("Child entity data");

	std::cin.get();
}