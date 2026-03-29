/**
 * @file timer.cpp
 * @author focusedcord1337
 * @brief Source file for timer.h
 * @version 0.1
 * @date 2026-03-29
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>
#include <string>
#include <chrono>
#include "timer.h"

using namespace std;

namespace my_timer
{
    auto time_now = []{ return std::chrono::steady_clock::now(); };

    void time_test(const string &t, const long long unsigned &n)
    {
        Timer time(t);
        long long unsigned i {0};
        while (i++ < n) {}
    }
 
    Timer::Timer(void) : msg(""), start(time_now()) {};

    Timer::Timer(const string &cmsg) : msg(cmsg), start(time_now()) {};

    float Timer::total_time(float f = 0.0)
    {

        static float total_tm;
        if (f > 0.0f)
        {
            total_tm += f;
        }

        return total_tm;
    }

    float Timer::get_total_t(void)
    {
        return Timer::total_time(0.0f);
    }    

    Timer::~Timer(void)
    {
        end = time_now();
        duration = end - start;
        float ms = duration.count() * 10.0f;
        cout << ((msg.length() > 0) ? (msg + ": ") : ("Time passed: ")) << ms << std::endl;
        Timer::total_time(ms);
    };
}