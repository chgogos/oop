#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v1{2, 4, 6, 8, 10};

    cout << all_of(begin(v1), end(v1), [](int elem) { return elem % 2 != 0; }) << endl;
    cout << any_of(begin(v1), end(v1), [](int elem) { return elem % 2 != 0; }) << endl;
    cout << none_of(begin(v1), end(v1), [](int elem) { return elem % 2 != 0; }) << endl;
}

/*
0
0
1
*/