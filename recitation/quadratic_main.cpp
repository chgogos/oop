#include <iostream>
#include "quadratic.hpp"

using namespace std;


int main()
{
    // 2x^2+4x-4=0
    double a = 2, b = 4, c = -4;
    double x1, x2;
    int exists;
    solve(a, b, c, &exists, &x1, &x2);
    if (exists)
    {
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    }
    else
    {
        cout << "No solutions found" << endl;
    }
}

/*
$ g++ quadratic.cpp quadratic_main.cpp -o quadratic
$ quadratic.exe
x1=1.06155
x2=-3.06155
*/
