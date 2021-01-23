#include <iostream>
#include <string>
#include <variant>
#include "src/Log.h"

/*
    Cpp 17 feature, new class in standard library.
    List all possible types and decide what to be later.

    Unions are size of largest type. 
    Variants store all the types of separate members.

    Variants more type safe, but Unions more efficient.
    These are useful with error codes with the int.
*/

int main()
{
    std::variant<std::string, int> stuff;

    stuff = "me";
    std::get<std::string>(stuff);

    if (auto v = std::get_if<std::string>(&stuff))
    {
        //checks the correct type.
    }

    stuff = 34;
    std::get<int>(stuff);

    if (stuff.index() == 1) 
    {
        //checks of the correct index type.
    }

    std::cin.get();
}