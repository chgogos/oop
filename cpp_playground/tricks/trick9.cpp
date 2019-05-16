#include <iostream>
#include <vector>

#define PRINT(A, N)               \
    for (int i = 0; i < N; i++)   \
    {                             \
        std::cout << A[i] << " "; \
    }                             \
    std::cout << std::endl;

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << "CHECKPOINT" << std::endl;
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT" << std::endl;
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v.at(i) << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT" << std::endl;
    for (int x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT" << std::endl;
    for (int &x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINΤ" << std::endl;
    for (auto &&x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT" << std::endl;
    for (auto itr = begin(v); itr != end(v); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT" << std::endl;
    for (auto itr = v.begin(); itr != v.end(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT" << std::endl;
    for (auto itr = v.cbegin(); itr != v.cend(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT" << std::endl;
    for (auto itr = v.rbegin(); itr != v.rend(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT" << std::endl;
    for (auto itr = v.crbegin(); itr != v.crend(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT" << std::endl;
    std::ostream_iterator<int> output(std::cout, " ");
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    std::cout << "CHECKPOINT" << std::endl;
    std::for_each(v.cbegin(), v.cend(), [](int i) { std::cout << i << " "; });
    std::cout << std::endl;

    std::cout << "CHECKPOINT" << std::endl;
    PRINT(v, v.size());

    return 0;
}