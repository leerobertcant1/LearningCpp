#include <iostream>
#include "src/Log.h";

/*
	Override method in sub class
	Dynamic dispatch, uses V table for virtual functions.

	Virtual functions are cost heavy, the V table references.
*/

//class Entity
//{
//	private:
//		int m_X;
//
//	public:
//		Entity()
//		{
//			m_X = 20;
//			Log("Object initialised");
//		}
//
//		~Entity()
//		{
//			Log("Object destructed");
//		}
//
//		//Virtual tells compiler to create a v table
//		virtual void LogMessage(const char* message) 
//		{
//			Log(message);
//		}
//};
//
//class ChildEntity : public Entity
//{
//	public:
//		void LogMessage(const char* message) override
//		{
//			const char* overrideMessage = "override message";
//			Log(overrideMessage);
//		}
//};
//
//int main()
//{
//	Entity entity;
//	ChildEntity childEntity;
//
//	entity.LogMessage("Parent entity");
//	childEntity.LogMessage("Child entity");
//
//	std::cin.get();
//}