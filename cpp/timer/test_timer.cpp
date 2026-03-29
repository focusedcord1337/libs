/**
 * @file test_timer.cpp
 * @author focusedcoprd1337
 * @brief Test the timer lib
 * @version 0.1
 * @date 2026-03-29
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include <atomic>
#include <mutex>
#include <shared_mutex>
#include <condition_variable>
#include "timer.h"

using namespace my_timer;

int main(void)
{
    std::thread t1{time_test, "t1", 1'000'000'000ULL};
    
    time_test("Main thread", 1'000'000'000ULL);
    t1.join();
    
    cout << "Total time passed: " << Timer::get_total_t() << endl;
    return 0;
}