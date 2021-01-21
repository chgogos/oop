// Ορίστε ένα namespace uoi και μέσα σε αυτό ένα άλλο namespace dit. 
// Ορίστε 3 συναρτήσεις με όνομα fun στο global, στο uoi και στο dit namespace. 
// Στη main καλέστε και τις 3 συναρτήσεις fun.

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