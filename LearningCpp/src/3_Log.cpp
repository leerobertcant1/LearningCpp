#include <iostream>

void Log(const char* message)
{
	std::cout << message << std::endl;
}

void LogConstNumber(const int& number)
{
	std::cout << number << std::endl;
}

void LogNumber(int& number)
{
	std::cout << number << std::endl;
}

void LogNothing(const char* message)
{
	return;
}

void LogString(const std::string& message)
{
	std::cout << message << std::endl;
}