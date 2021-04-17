#include <bitset>
#include <iostream>
#include <string>
#include "src/Log.h"

/*
	& - AND
	| - OR
	^ - XOR
	~ - NOT

	&& - Logical.
	& - Bitwise operator.
	0 & 0 = 0 (both have to be true).
	0 & 1 = 0. 
	1 & 1 = 1.
	0101 & 1101 = 0101 (Binary adding).
	Can use a Bit Mask - We put a 1 and everywhere else as a 0.
	eg 001100101 & 000100000 = 000100000
	Useful with if statements and clearing groups of bits, etc.

	OR - if either are true.
	0 | 0 = 0
	0 | 1 = 1
	1010 | 0110 = 1110
	Opposite to and - so good if we want to reverse calculations.

	XOR - ~ Mainly used for cacheing. Only true if bits comparing different.
	0 ^ 0 = 0
	0 ^ 1 = 1
	1 ^ 0 - 1
	1 ^ 1 = 0 (Same so returns 0)


	NOT - Combines with AND to toggle on and off.
	000100000 = 111011111

*/

int main()
{	
	//0b makes binary
	unsigned int bitAnd = 0b0011 & 0b0001; // 0001 (1)
	auto bitAndResult = std::bitset<4>(bitAnd);

	unsigned int bitOr = 0b1010 | 0b0110; //1110 (14)
	auto bitOrResult = std::bitset<4>(bitOr);

	unsigned int bitXor = 0b0011 ^ 0b0101; //0110 (6)
	auto bitXorResult = std::bitset<4>(bitXor);

	unsigned int bitNot = ~ 0b0011; //1100 (12)
	auto bitNotResult = std::bitset<4>(bitNot);

	std::cin.get();
}