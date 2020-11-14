//#include <iostream>
//#include <string>;
//#include "src/Log.h";
//
///*
//	Stack and Heap areas in RAM.
//	Stack predefined size - 2mb.
//	Heap can grow.
//
//	int mostly 4 bytes. 
//	Usually stored in a contiguous block.
//
//	Debug mode adds safety values between variables.
//	All close together in memory.
//	Stack normally goes stack backwards, higher then lower memory address.
//
//	A stack allocation is faster because nearer to each other.
//	
//	Smart pointers will auto-delete for us.
//	Stack auto-deletes when outside of scope (any kind of curly braces).
//	
//	New calls malloc->allocates memory on the heap.
//	Freelists are always to figure out where the memory is stored.
//
//	Differences between the 2 is the allocation.
//	Allocating memory on the stack 1 CPU instruction. Moves value into a register, that's it.
//	Allocating memory on the heap much slower Calls operator which calls malloc then records what stored. Delete also quite heavy.
//
//	When we want to store data longer it needs to go into the heap.
//	Outside the scope of the function is only when not using heap.
//*/
//
//
//int main()
//{
//	int stack = 10;
//
//	int* heap = new int;
//	*heap = 10;
//
//	delete heap;
//
//	std::cin.get();
//}