// static inline data member
#include <iostream>

using namespace std;

struct A
{
    static inline int c = 0;
};

int main()
{
    cout << A::c << endl;
}