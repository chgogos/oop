// NSDMI = Non-Static Data Member Initialisation

#include <iostream>

using namespace std;

class A
{
public:
    int x = 42;
    A() = default;
};

int main()
{
    A obj;
    cout << obj.x << endl;
}