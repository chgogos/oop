#include <iostream>
#include <random>
#include <chrono>

int main()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 engine{seed};
    std::uniform_real_distribution<double> distribution(0.0, 10.0);
    for (int i = 0; i < 10; i++)
    {
        std::cout << distribution(engine) << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
2.95601 7.07523 9.75149 0.331689 8.4591 7.12856 9.70479 0.836574 8.73746 6.58014 
*/