#include <iostream>
#include <functional>

using namespace std;
int main()
{
    function<int(int,int)> f = [](int x, int y)->int {if (x>y)return x; else return y; };
    // auto f = [](int x, int y) {if (x>y)return x; else return y; };
    cout << f(5, 7);
}

/*
7
*/