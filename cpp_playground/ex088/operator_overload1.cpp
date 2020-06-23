// C++ Weekly - Ep 225 - Understanding Operator Overloading

#include <iostream>

using namespace std;

struct complex
{
    double r;
    double i;
};

// free function
complex operator+(const complex &lhs, const complex &rhs)
{
    return complex{lhs.r + rhs.r, lhs.i + rhs.i};
}

int main()
{
    complex c{1, 2};
    const auto result = c + complex{3, 2};
    cout << result.r << " " << result.i << endl;
}

/*
4 4
*/