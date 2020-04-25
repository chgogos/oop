#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2{1, 2, 3, 4, 5};
    vector<int> v3{1, 2, 6, 4, 5};

    bool f1 = v1 == v2;
    cout << f1 << endl;
    bool f2 = equal(begin(v1), begin(v1), begin(v2), end(v2));
    cout << f2 << endl;

    auto diff = mismatch(begin(v1), end(v1), begin(v3));
    cout << *(diff.first) << " - " << *(diff.second) << endl;
}

/*
1
0
3 - 6
*/