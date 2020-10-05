// 4.1.6
#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

template <class T>
void print(const T &value)
{
    cout << value << " ";
}

struct Generate
{
    int n;
    Generate() : n(0) {}
    int calculate(int number)
    {
        if (number == 0)
            return 0;
        if (number == 1)
            return 1;
        int n1 = 1, n2 = 0, nn = 0;
        for (int i = 2; i <= number; ++i)
        {
            nn = n1 + n2;
            n2 = n1;
            n1 = nn;
        }

        return nn;
    }
    int operator()()
    {
        n++;
        return calculate(n - 1);
    }
};

int main()
{
    deque<int> d1(10);
    cout << "Source collection - default values:\n";
    cout << "d1: ";
    for_each(d1.begin(), d1.end(), print<int>);
    cout << endl
         << endl;

    cout << "Filling collection with value 1\n";
    fill(d1.begin(), d1.end(), 1);
    cout << "d1: ";
    for_each(d1.begin(), d1.end(), print<int>);
    cout << endl;
    cout << "Filling half of the collection with value 10:\n";
    fill_n(d1.begin(), 5, 10);
    cout << "d1: ";
    for_each(d1.begin(), d1.end(), print<int>);
    cout << endl
         << endl;

    cout << "Generate:\n";
    cout << "Filling the whole collection with Fibonacci numbers:\n";
    generate(d1.begin(), d1.end(), Generate());
    cout << "d1: ";
    for_each(d1.begin(), d1.end(), print<int>);
    cout << endl;

    cout << "Filling the whole collection with Fibonacci numbers - generate_n:\n";
    generate_n(d1.begin(), 10, Generate());
    cout << "d1: ";
    for_each(d1.begin(), d1.end(), print<int>);
    cout << endl
         << endl;

    return 0;
}

/*
Source collection - default values:
d1: 0 0 0 0 0 0 0 0 0 0

Filling collection with value 1
d1: 1 1 1 1 1 1 1 1 1 1
Filling half of the collection with value 10:
d1: 10 10 10 10 10 1 1 1 1 1

Generate:
Filling the whole collection with Fibonacci numbers:
d1: 0 1 1 2 3 5 8 13 21 34
Filling the whole collection with Fibonacci numbers - generate_n:
d1: 0 1 1 2 3 5 8 13 21 34
*/