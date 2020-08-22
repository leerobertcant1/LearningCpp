#include <iostream>
#include "src/Log.h";
#include <string>

/*
	Who can see or call who, no effect on program performance.
	Helps us to organise/ write better code.
	Private, protected, public, etc.

	Default visibility is private for class, public for struct.
*/

//class Entity
//{
//	//Only this class accesses this if not a friend.
//	//Friends can access private members.
//	private:
//		int m_X;
//
//	protected:
//		int m_Xx;
//
//	public:
//		Entity()
//		{
//			m_X = 20;
//			m_Xx = 20;
//			Log("Object initialised");
//		}
//
//		~Entity()
//		{
//			Log("Object destructed");
//		}
//
//		virtual void LogMessage(const char* message) 
//		{
//			Log(message);
//		}
//};
//
//class ChildEntity : public Entity
//{
//	public:
//		ChildEntity()
//		{
//			m_Xx = 10;
//		}
//
//		void LogMessage(const char* message) override
//		{
//			const char* overrideMessage = std::to_string(42).c_str();
//			Log(overrideMessage);
//		}
//};
//
//int main()
//{
//	ChildEntity childEntity;
//
//	childEntity.LogMessage("Child entity");
//
//	std::cin.get();
//}