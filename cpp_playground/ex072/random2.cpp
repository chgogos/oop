#include <iostream>
#include <random>

int main()
{
    // ρήψη "ζαριού" 10 φορές
    std::random_device rd;
    std::mt19937 engine1{rd()};
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
