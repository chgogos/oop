#include <iostream>
#include <stdexcept>

using namespace std;

double divide(double n, double d)
{
    if (d == 0)
    {
        throw domain_error("Divide by zero");
    }
    else
    {
        return n / d;
    }
}

int main()
{
    try
    {
        double x = divide(10.0, 0.0);
        cout << x << endl;
    }
    catch (exception &ex)
    {
        cout << "Exception: " << ex.what() << endl;
    }
}

/*
Exception: Divide by zero
*/