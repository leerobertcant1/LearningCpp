#include <algorithm>
#include <iostream>
#include <string>
#include "src/Log.h"
#include <vector>

/*
    Best to avoid own algorithm.
    Use Vectors and inbuilt collection types.

    We just need to provide iterators.

    Can also use predicates and lambdas like Linq in C sharp.
*/

//int main()
//{
//    std::vector<int> values = { 2, 4, 3, 1, 5 };
//
//    std::sort(values.begin(), values.end());
//
//    for (int i = 0; i < 5; i++)
//    {
//        LogNumber(values[i]);
//    }
//
//    std::cin.get();
//}