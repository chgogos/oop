#include <iostream>
#include <stdexcept>
using namespace std;
double divide(double m, double n)
{
    if (n == 0)
    {
        throw exception();
    }
    else
    {
        return m / n;
    }
}
int main()
{
    try
    {
        cout << divide(1, 0) << endl;
    }
    catch (const exception &e)
    {
        cout << "Exception was caught!" << endl;
    }
}