#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> v{4, 3, 6, 1, 2, 8, 7};
    for_each(v.begin(), v.end(), [](int &x) { x++; });
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    int c = 0;
    for_each(v.begin(), v.end(), [&c](const int &x) { c += x % 2 == 0; });
    cout << "\nEvens: " << c << endl;
}

/*
5 4 7 2 3 9 8 
Evens: 3
*/