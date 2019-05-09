#include <iostream>
#include <unistd.h>
#include <ctime>

void delay1()
{
    std::cout << "Press enter...";
    while (1)
    {
        if (getchar())
        {
            break;
        }
    }
}

void delay2()
{
    std::cout << "Press enter...";
    std::cin.ignore();
}

void delay3()
{
    std::cout << "Press enter...";
    std::cin.get();
}

void delay4()
{
    usleep(1000000); // sleep for 1000000 microseconds (1 second) 
}


int main()
{
    clock_t start;
    start = clock();
    // delay1();
    // delay2();
    // delay3();
    // delay4();
    double time_passed = (clock() - start) * 1000.0 / CLOCKS_PER_SEC; // ???
    std::cout << "Time passed: " << time_passed << std::endl;
    return 0;
}