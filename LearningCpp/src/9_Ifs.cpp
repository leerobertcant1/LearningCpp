#include <iostream>
#include "Log.h";

/*
	Evaluation, conditional operators, standard stuff.
	Ifs use the Jump in assembler, they carry a overhead.
	We avoid branching avoid ifs as slow the performance down.

	Integers are good as comparisons as this is the raw data.

	Can right click on variable name and on Disassembly if I need
	to see what the Compiler has generated for performance.
	Jne means jump not equal and tells memory address.
	After comma in assembler tells us the value assigned.

	Boolean 0 gets loads into registry or 1 if true.	
	If we put pointer in condition it will check if null,
	makes code more readable.

	Else if is syntax sugar behind the scenes a else inside an if.
	else {if()}

	Mathematical calculations are better than If statements.
*/

//int main()
//{
//	int value = 10;
//	//Equality operator
//	bool valueIsTen = value == 10;
//
//	//Always good to use bool names as it explains the code.
//	//However not needed for optimisation.
//	if (valueIsTen)
//		Log("Ayup");
//	else
//		Log("Now then");
//
//	const char* message = "pointer message";
//
//	if (message)
//		Log(message);
//
//	std::cin.get();
//}