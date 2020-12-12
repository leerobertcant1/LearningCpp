#include <iostream>
#include <string>
#include "src/Log.h"
#include "thread"

/*
    Useful for performance, less bottlenecks occur.
    With consoles can't do anything while waiting for input.
*/

//void ExecuteWork()
//{
//    for (int i = 0; i < 10; i++)
//    {
//        LogNumber(i);
//    }
//
//    Log("finished");
//}
//
//int main()
//{
//    //function pointer
//    std::thread work(ExecuteWork);
//
//    //A wait function
//    work.join();
//
//    Log("Thread ended");
//
//    //Won't run into thread finished.
//    std::cin.get();
//}