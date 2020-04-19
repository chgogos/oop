#include <iostream>
#include <vector>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

int main()
{
    any x, y;
    x = 42;
    cout << any_cast<int>(x) << " " << x.type().name() << endl;
    try
    {
        cout << any_cast<float>(x) << endl;
    }
    catch (bad_any_cast &e)
    {
        cout << "bad type" << endl;
    }

    y = "test";
    cout << any_cast<const char *>(y) << " " << y.type().name() << endl;

    vector<any> v;
    v.push_back(x);
    v.push_back(y);
    for (auto a : v)
    {
        int *px = any_cast<int>(&a);
        if (px != nullptr)
            cout << *px << endl;

        const char **ppc = any_cast<const char *>(&a);
        if (ppc != nullptr)
            cout << *ppc << endl;
    }
}

/*
42 i
bad type
test PKc
42
test
*/