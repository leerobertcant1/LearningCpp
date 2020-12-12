#include <chrono>
#include <iostream>
#include <string>
#include "src/Log.h"
#include <thread>

/*
    Useful for evaluating performance, benchmarking
    or how long it takes to do something.

    Can use Chrono.

    std::endl is slow don't use.
*/

//int main()
//{
//    using namespace std::literals::chrono_literals;
//
//    auto clockStart = std::chrono::high_resolution_clock::now();
//    std::this_thread::sleep_for(2s);
//    auto clockEnd = std::chrono::high_resolution_clock::now();
//
//    std::chrono::duration<float> duration = clockStart - clockEnd;
//    auto dur = duration.count() * 1000.0f;
//
//    LogFloat(dur);
//
//    std::cin.get();
//}