#include <iostream>

void Log(const char* message)
{
	std::cout << message << std::endl;
}

void LogNothing(const char* message)
{
	return;
}