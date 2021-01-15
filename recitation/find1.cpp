#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{3, 1, 6, 7, 2, 4, 5, 8, 9, 4};
    int avg = 0;
    for (int i = 0; i < v.size(); i++)
    {
        avg += v[i];
    }
    avg /= v.size();
    cout << "AVERAGE=" << avg << endl;
    vector<int>::iterator itr = find(v.begin(), v.end(), avg);

    cout << boolalpha << "EXISTS=" << (itr != v.end()) << endl;
}

/*
AVERAGE=4
EXISTS=true
*/