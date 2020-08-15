//#include <iostream>
//#include "src/Log.h";
//
///*
//	Static local can declare var that has lifetime of programme
//	Limited to the scope.
//
//	Useful for Singletons and also init functions.
//*/
//
//class Singleton
//{
//	public:
//		static Singleton& Get() 
//		{ 
//			//Static needed otherwise gets destroyed when we hit the scope
//			static Singleton _SingletonThis;
//
//			return _SingletonThis;
//		}
//};
//
//
//void LocalFunctionWithStaticScope() 
//{
//	static int value = 12;
//
//	LogNumber(value);
//}
//
//
//int main()
//{
//	LocalFunctionWithStaticScope();
//
//	Singleton::Get();
//	
//	std::cin.get();
//}