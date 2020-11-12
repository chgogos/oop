// https://floating-point-gui.de/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setprecision(100) << 0.1 + 0.2 << endl;
    cout << setprecision(100) << 0.1f + 0.2f << endl;
}

/*
0.3000000000000000444089209850062616169452667236328125
0.300000011920928955078125
*/