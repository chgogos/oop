#include <iostream>
using namespace std;

void fun()
{
    cout << "global ns" << endl;
}

namespace uoi
{
    void fun()
    {
        cout << "uoi ns" << endl;
    }
    namespace dit
    {
        void fun()
        {
            cout << "dit ns" << endl;
        }

    } // namespace dit

} // namespace uoi

int main()
{
    fun();
    uoi::fun();
    uoi::dit::fun();
}

/*
global ns
uoi ns
dit ns
*/