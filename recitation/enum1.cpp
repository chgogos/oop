#include <iostream>

using namespace std;

enum state
{
    ON,
    OFF
};

int main()
{
    state a[5] = {ON, OFF, ON, ON, ON};

    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == ON)
        {
            c++;
        }
    }

    cout << c << endl;
}

/*
4
*/