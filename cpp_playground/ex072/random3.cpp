#include <iostream>
#include <random>
#include <chrono>

int main()
{
    std::mt19937 engine(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_real_distribution<double> distribution(0.0, 10.0);
    for (int i = 0; i < 10; i++)
    {
        std::cout << distribution(engine) << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
7.26249 9.15339 5.94324 5.15358 9.75149 6.61561 5.28652 7.88493 0.741007 3.2985 <-- changes in each run
*/
