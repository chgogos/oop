#include <iostream>
#include <utility>
#include <tuple>

// επιστροφή δύο αποτελεσμάτων από συνάρτηση με 7 διαφορετικούς τρόπους

int fun1(int x, int &out)
{
    out = x * 2;
    return x * 3;
}

struct two_results
{
    int result1;
    int result2;
};

struct two_results fun2(int x)
{
    return two_results{x * 2, x * 3};
}

std::tuple<int, int> fun3(int x)
{
    return std::make_tuple(x * 2, x * 3);
}

std::pair<int, int> fun4(int x)
{
    return std::make_pair(x * 2, x * 3);
}

// ugly!!!
void fun5(int x, int r[2])
{
    r[0] = x * 2;
    r[1] = x * 3;
}

// ugly!!!
void fun6(int x, int* r)
{
    r[0] = x * 2;
    r[1] = x * 3;
}

// super ugly!!!
int *fun7(int x)
{
    int *r = new int[2];
    r[0] = x * 2;
    r[1] = x * 3;
    return r;
}

int main()
{
    int x = 5;
    int result1, result2;

    result2 = fun1(x, result1);
    std::cout << "1 . result 1: " << result1 << " result 2: " << result2 << std::endl;

    two_results results = fun2(x);
    std::cout << "2 . result 1: " << results.result1 << " result 2: " << results.result2 << std::endl;

    std::tie(result1, result2) = fun3(x);
    std::cout << "3a. result 1: " << result1 << " result 2: " << result2 << std::endl;

    auto [r1, r2] = fun3(x); // c++17 (structured bindings)
    std::cout << "3b. result 1: " << r1 << " result 2: " << r2 << std::endl;

    std::tie(result1, result2) = fun4(x);
    std::cout << "4a. result 1: " << result1 << " result 2: " << result2 << std::endl;

    auto [r4, r5] = fun4(x); // c++17 (structured bindings)
    std::cout << "4b. result 1: " << r4 << " result 2: " << r5 << std::endl;

    int a1[2];
    fun5(x, a1);
    std::cout << "5a. result 1: " << a1[0] << " result 2: " << a1[1] << std::endl;

    int a2[2];
    fun6(x, a2);
    std::cout << "5b. result 1: " << a2[0] << " result 2: " << a2[1] << std::endl;

    int *pr1 = new int[2];
    fun6(x, pr1);
    std::cout << "5c. result 1: " << pr1[0] << " result 2: " << pr1[1] << std::endl;
    delete[] pr1;

    int *pr2 = fun7(x);
    std::cout << "5d. result 1: " << pr2[0] << " result 2: " << pr2[1] << std::endl;
    delete[] pr2;

    return 0;
}
