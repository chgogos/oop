#include <iostream>
#include <random>
#include <chrono>

int main()
{
    // ρήψη "ζαριού" 10 φορές

    // std::random_device rd;
    // std::mt19937 engine1(rd()); // not working correctly for mingw (fixed since version 9.2)

    auto seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 engine1(seed);
    std::uniform_int_distribution<int> distribution(1, 6);
    for (int i = 0; i < 10; i++)
    {
        std::cout << distribution(engine1) << " ";
    }
    std::cout << std::endl;

    // ρήψη "ζαριού" 10 φορές (ίδιο αποτέλεσμα σε κάθε εκτέλεση)
    std::mt19937 engine2{123456L};
    for (int i = 0; i < 10; i++)
    {
        std::cout << distribution(engine2) << " ";
    }
    std::cout << std::endl;


    return 0;
}


/*
4 5 3 6 1 4 6 4 6 6 <-- changes in each run
1 4 6 6 2 5 6 5 3 6
*/