#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MyFunctorClass
{
public:
    int operator()(int x)
    {
        return x * 2;
    }
};

int fun(int x)
{
    return 2 * x;
}

int main()
{
    vector<int> v;

    // lambda
    v.assign({5, 2, 4, 7, 1, 9, 8});
    transform(v.begin(), v.end(), v.begin(), [](int x) { return 2 * x; });
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // functor = function object
    v.assign({5, 2, 4, 7, 1, 9, 8});
    transform(v.begin(), v.end(), v.begin(), MyFunctorClass());
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // function pointer
    v.assign({5, 2, 4, 7, 1, 9, 8});
    transform(v.begin(), v.end(), v.begin(), fun);
    // transform(v.begin(), v.end(), v.begin(), &fun);
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // function pointer
    int (*fp)(int) = fun;
    v.assign({5, 2, 4, 7, 1, 9, 8});
    transform(v.begin(), v.end(), v.begin(), fp);
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // function pointer
    function<int(int)> fp2 = fun;
    v.assign({5, 2, 4, 7, 1, 9, 8});
    transform(v.begin(), v.end(), v.begin(), fp2);
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

/*
10 4 8 14 2 18 16 
10 4 8 14 2 18 16 
10 4 8 14 2 18 16 
10 4 8 14 2 18 16 
10 4 8 14 2 18 16 
*/