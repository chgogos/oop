// C++17
#include <iostream>
#include <vector>
#include <random>
#include <functional>

class random_generator
{
private:
    std::random_device device;
    std::uniform_int_distribution<int> distribution;
    std::mt19937 mersenne_twister;

public:
    random_generator(int from, int to) : distribution(from, to)
    {
        mersenne_twister.seed(device());
    }
    int operator()()
    {
        return distribution(mersenne_twister);
    }
};

int main()
{
    std::vector<int> v(10);
    std::generate(std::begin(v), std::end(v), random_generator(1, 6));
    for (int x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}