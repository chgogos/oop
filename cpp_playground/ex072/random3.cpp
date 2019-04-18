#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 engine{rd()};
    std::uniform_real_distribution<double> distribution(0.0, 10.0);
    for (int i = 0; i < 10; i++)
    {
        std::cout << distribution(engine) << " ";
    }
    std::cout << std::endl;

    return 0;
}
