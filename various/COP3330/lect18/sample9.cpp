#include <iostream>
#include <stdlib.h>
#include <stdexcept>

using namespace std;

// double safedivide(int top, int bottom) throw() // εναλλακτικός τρόπος δήλώσης
// double safedivide(int top, int bottom) noexcept // εναλλακτικός τρόπος δήλώσης
double safedivide(int top, int bottom) noexcept(true)
{
    if (bottom == 0)
        throw exception(); // warning: throw will always call terminate() [-Wterminate]
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
10
Enter number of glasses of milk:
0
terminate called after throwing an instance of 'std::exception'
  what():  std::exception
*/