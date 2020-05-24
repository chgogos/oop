#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    multiplies<int> f;
    cout << "MULTIPLIES " <<  f(4, 5) << endl;
    cout << "MULTIPLIES " <<  multiplies<int>()(4, 5) << endl; // εναλλακτικά
    cout << "MULTIPLIES " <<  multiplies<int>().operator()(4, 5) << endl; // εναλλακτικά
    cout << "DIVIDES " <<  divides<int>()(4, 5) << endl;
    cout << "PLUS " <<  plus<int>()(4, 5) << endl;
    cout << "MINUS " <<  minus<int>()(4, 5) << endl;
    cout << "MODULUS " <<  modulus<int>()(4, 5) << endl;

    vector<int> v{4, 2, 7, 1};
    for(int x: v)
        cout << x << " ";
    cout << endl;

    transform(v.begin(), v.end(), v.begin(), negate<int>());
    for(int x: v)
        cout << x << " ";
    cout << endl;

}

/*
MULTIPLIES 20
MULTIPLIES 20
MULTIPLIES 20
DIVIDES 0
PLUS 9
MINUS -1
MODULUS 4
4 2 7 1
-4 -2 -7 -1
*/