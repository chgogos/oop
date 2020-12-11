#include <iostream>
#include <exception>
using namespace std;

int main()
{
    try
    {
        cout << "AAAA" << endl;
        cout << "AAAA" << endl;
        throw(std::exception());
        cout << "AAAA" << endl;
        cout << "AAAA" << endl;
    }
    catch (std::exception)
    {
        cout << "BBBBB" << endl;
    }
    catch (...)
    {
        cout << "CCCCC" << endl;
    }
    cout << "DDDDD" << endl;
}