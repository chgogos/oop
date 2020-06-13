#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1,2,3,4};

    cout << v[4] << endl;
    cout << v.at(4) << endl;
}

/*
0
libc++abi.dylib: terminating with uncaught exception of type std::out_of_range: vector
zsh: abort 
*/