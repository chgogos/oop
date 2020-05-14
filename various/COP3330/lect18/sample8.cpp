#include <iostream>
#include <stdlib.h>
#include <stdexcept>

using namespace std;

double safedivide(int top, int bottom)
{
    if (bottom <= 0)
        throw exception();
    return top / static_cast<double>(bottom);
}

main()
{
    int donuts, milk;
    double dpg;

    cout << "Enter number of donuts:\n";
    cin >> donuts;
    cout << "Enter number of glasses of milk:\n";
    cin >> milk;

    try
    {
        dpg = safedivide(donuts, milk);
    }
    catch (exception e)
    {
        cout << e.what() << " donuts. and No Milk!\n"
             << "Go buy some milk.\n";
        exit(0);
    }

    cout << donuts << " donuts.\n"
         << milk << " glasses of milk.\n"
         << "You have " << dpg << " donuts for each glass of milk.\n";
}

/*
Enter number of donuts:
10
Enter number of glasses of milk:
0
std::exception donuts. and No Milk!
Go buy some milk.
*/