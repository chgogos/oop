/*
εύρεση ελάχιστου και μέγιστου σε vector με 5 τρόπους
*/

#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    vector<int> v{5, 16, 2, 3, 1, 8, 7};

    cout << "1." << endl;
    int min = v[0];
    int max = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    cout << "MIN: " << min << endl;
    cout << "MAX: " << max << endl;

    cout << "2." << endl;
    cout << "MIN: " << *min_element(v.begin(), v.end()) << endl;
    cout << "MAX: " << *max_element(v.begin(), v.end()) << endl;

    cout << "3." << endl;
    auto p = minmax_element(v.begin(), v.end());
    cout << "MIN: " << *(p.first) << endl;
    cout << "MAX: " << *(p.second) << endl;

    cout << "4." << endl;
    min = accumulate(v.begin(), v.end(), v[0], [](int a, int b) {if (a<b) return a; else return b; });
    max = accumulate(v.begin(), v.end(), v[0], [](int a, int b) {if (a>b) return a; else return b; });
    cout << "MIN: " << min << endl;
    cout << "MAX: " << max << endl;

    cout << "5." << endl;
    sort(v.begin(), v.end());
    cout << "MIN: " << v.front() << endl;
    cout << "MAX: " << v.back() << endl;
}

/*
1.
MIN: 1
MAX: 16
2.
MIN: 1
MAX: 16
3.
MIN: 1
MAX: 16
4.
MIN: 1
MAX: 16
5.
MIN: 1
MAX: 16
*/