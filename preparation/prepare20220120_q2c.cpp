#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{46, 23, 78, 81, 95};
    sort(v.begin(), v.end(), greater<int>());
    for (vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl;
    }
    int c = count_if(v.begin(), v.end(), [](int x)
                     { return x % 2 == 0; });
    cout << "plithos artiwn timwn = " << c << endl;
}

/*
95
81
78
46
23
plithos artiwn timwn = 2
*/