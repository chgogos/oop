#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 engine{rd()};
    std::uniform_real_distribution<double> distribution(0.0, 1.0);
    int h = 0, t = 0;
    for (int i = 0; i < 10000; i++)
    {
        double x = distribution(engine);
        if (x < 0.6)
        {
            std::cout << "head" << std::endl;
            h++;
        }
        else
        {
            std::cout << "tails" << std::endl;
            t++;
        }
    }
    std::cout << "HEADS=" << h << " TAILS=" << t << std::endl;
    return 0;
}
