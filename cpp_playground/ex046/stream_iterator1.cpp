#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{1,2,3,4,5};
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
}

/*
1 2 3 4 5
*/