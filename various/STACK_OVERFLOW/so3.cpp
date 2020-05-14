// https://stackoverflow.com/questions/4745311/c-division-by-0
#include <iostream>

using namespace std;

int main()
{
    // int x = 10/0; //  crash upon division by zero with ints
    // cout << x << endl;

    double y = 10.0 / 0.0, z = -10.0 / 0.0;
    cout << y << " " << z << endl;
}

/*
inf -inf
*/