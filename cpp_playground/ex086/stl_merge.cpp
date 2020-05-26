#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> v1{1, 3, 5, 7, 9};
    vector<int> v2{0, 2, 4, 6, 8};
    vector<int> v3(10);
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, " "));
}

/*
0 1 2 3 4 5 6 7 8 9 
*/