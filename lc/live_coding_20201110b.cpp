#include <iostream>
using namespace std;

int g = 55; // global

void fun(int a, int b) // local
{
    int c = a+ b; // local
    cout << c << " " << g << endl;
}

int main()
{
    int x = 12; //local
    g++;
    fun(3,2);
    {
        int y = 67;
        cout << y << endl;
    }
    cout << x << " " << g << endl;
}

/*
5 56
67
12 56
*/