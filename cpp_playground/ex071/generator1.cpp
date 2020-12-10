#include <iostream>
#include <vector>
#include <numeric> // iota
#include <algorithm> // generate

class my_generator
{
private:
    int x{0};

public:
    int operator()()
    {
        return x++;
    }
};

int main()
{
    std::cout << "Checkpoint A" << std::endl;
    my_generator g1;
    std::cout << g1() << std::endl;
    std::cout << g1() << std::endl;
    std::cout << g1() << std::endl;

    std::cout << "Checkpoint B (using custom generator)" << std::endl;
    std::vector<int> v1(10);
    std::generate(std::begin(v1), std::end(v1), my_generator());
    for (int x : v1)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "Checkpoint C (using iota)" << std::endl;
    std::vector<int> v2(10);
    std::iota(std::begin(v2), std::end(v2), 0);
    for (int x : v2)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
