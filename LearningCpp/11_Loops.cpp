#include <iostream>
#include "src/Log.h";
#include "src/Maths.h";

/*
	src now needed due to the new project structure.
	
	For and while loops.
	Index; condition; iterator
	You can put conditions outside of the body, but pointless might as well use while.
	For loops very powerful can use anything - can have endless loop as: for(;;)
	Ideal for Arrays.

	Generally for and while are convention, running vars then while.
	For when going through a list of items.

	Do whiles execute at least once.
*/

//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		Log("for");
//	}
//
//	bool isOutputOccurred = false;
//
//	while (!isOutputOccurred)
//	{
//		Log("while");
//
//		isOutputOccurred = true;
//	}
//
//	//Already set to false but it will execute once the first time.
//	do
//	{
//		Log("dowhile");
//	} while (!isOutputOccurred);
//
//	std::cin.get();
//}