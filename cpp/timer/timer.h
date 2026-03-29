/**
 * @file timer.h
 * @author focusedcord1337
 * @brief A class that time its liftime/scope and print it out + any messages that you want, 
 *        Use static get func too get all the objects lifetime
 * @version 0.1
 * @date 2026-03-29
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#ifndef TIMER_H
#define TIMER_H

#include <iostream>
#include <string>
#include <chrono>

using namespace std;

namespace my_timer
{

    /**
     * @brief Test the Timer class when doing instructoon ++ for n times
     * 
     * @param t thread name
     * @param n number of ++ instructons
     */
    void time_test(const string &t,const long long unsigned &n);

    class Timer
    {
    private:
        static float total_time(float f);

        std::string msg;
        std::chrono::time_point<std::chrono::steady_clock> start, end;
        std::chrono::duration<float> duration;

        public:

        Timer(void);
        Timer(const string &cmsg);

        /**
         * @brief Get the total time of objects lifespan
         * 
         * @return float 
         */
        static float get_total_t(void);
        
        /**
         * @brief Destroy the Timer object & prints out time passed
         * 
         */
        ~Timer(void);
    };

} // namespace my_time



#endif
