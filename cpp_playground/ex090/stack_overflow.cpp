#include <iostream>
using namespace std;

// int counter = 100;  // ok
int counter = 100000; // stack overflow

void countdown()
{
    if (counter == 0)
        return;
    else
    {
        counter--;
        cout << counter << endl;
        countdown();
    }
}

int main()
{
    countdown();
}