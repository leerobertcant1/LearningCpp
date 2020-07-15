/*
	Functions are like in JS, they don't need a class.
	Can be void and doesn't need paramaters.
	Don't forget to change minor detail when copy-pasting. 

	When function called we generate a call instructions, return address put on 
	the stack, lots of jumping about. Can slow down the program.

	Prevents code duplication.

	Main function is exempt from this, auto-assumes a return of 0.
*/

#include <iostream>

int Minus(int a, int b)
{
	return a - b;
}

int main()
{
	std::cout << Minus(10, 5) << std::endl;
	
	// waits for a key press.
	std::cin.get();
}