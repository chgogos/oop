#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{2, 4, 2, 5, 2, 5, 6, 2};
    int odds = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 != 0)
        {
            odds++;
        }
    }
    cout << "Odds = " << odds << endl;

    odds = count_if(begin(v), end(v), [](int elem) { return elem % 2 != 0; });
    cout << "Odds = " << odds << endl; 
} 
