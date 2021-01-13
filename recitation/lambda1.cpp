#include <iostream>

using namespace std;

int main()
{
    auto lambda = [](int x, int y) {
        if (x > y)
        {
            swap(x, y);
        }
        int sum = 0;
        for (int i = x; i <= y; i++)
        {
            sum += i;
        }
        return sum;
    };

    cout << lambda(7, 10) << endl;
    cout << lambda(0, 10) << endl;
    cout << lambda(0, 1000) << endl;
}

/*
34
55
500500
*/