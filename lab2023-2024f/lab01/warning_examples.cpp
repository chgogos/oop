#include <iostream>

using namespace std;

int main()
{
    int a = 0; //  unused variable 'a'
    int sum;
    sum += 10; // 'sum' is used uninitialized in this function
    cout << sum << endl;
    cout << "hello" << endl;
}