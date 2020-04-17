#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

int main()
{
    boost::any x, y, z;
    x = 42;
    y = string("test");
    z = 3.14f;
    cout << boost::any_cast<int>(x) << endl;
    cout << boost::any_cast<string>(y) << endl;
    cout << boost::any_cast<float>(z) << endl;
}

/*
42
test
3.14
*/