#include <iostream>

#include "Print.h"

using namespace std;

int main()
{
    Print("Message");
}

void Print(const char* message) 
{
    cout << message << "\n";
}

