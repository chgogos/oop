#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{3, 1, 6, 7, 2, 4, 5, 8, 9, 4};
    int c = count_if(v.begin(), v.end(), [](int x){return x%2==0;});
    cout << "EVEN NUMBERS=" << c << endl;
}

/*
EVEN NUMBERS=5
*/