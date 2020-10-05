// windows only
// https://stackoverflow.com/questions/1739259/how-to-use-queryperformancecounter

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <chrono>
#include <random>
#include <windows.h>

/** Use to init the clock */
#define TIMER_INIT           \
    LARGE_INTEGER frequency; \
    LARGE_INTEGER t1, t2;    \
    double elapsedTime;      \
    QueryPerformanceFrequency(&frequency);

/** Use to start the performance timer */
#define TIMER_START QueryPerformanceCounter(&t1);

/** Use to stop the performance timer and output the result to the standard stream. Less verbose than \c TIMER_STOP_VERBOSE */
#define TIMER_STOP                                                         \
    QueryPerformanceCounter(&t2);                                          \
    elapsedTime = (float)(t2.QuadPart - t1.QuadPart) / frequency.QuadPart; \
    std::wcout << elapsedTime << L" sec" << endl;

using namespace std;

int main()
{

    vector<int> v(1000);
    iota(v.begin(), v.end(), 1);
    TIMER_INIT
    {
        TIMER_START
        int sum = 0;
        for (int i = 0; i < 10000; i++)
        {
            unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
            shuffle(v.begin(), v.end(), default_random_engine(seed));
            sum += v[0];
        }
        cout << "SUM=" << sum << endl;
        TIMER_STOP
    }
}