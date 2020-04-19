#include <iostream>
#include <string>
#include <vector>
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

    vector<boost::any> v;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    for (auto a : v)
    {
        if (a.type() == typeid(int))
            cout << "int value: " << boost::any_cast<int>(a) << endl;
        else if (a.type() == typeid(float))
            cout << "float value: " << boost::any_cast<float>(a) << endl;
        else if (a.type() == typeid(string))
            cout << "string value: " << boost::any_cast<string>(a) << endl;
    }
}

/*
42
test
3.14
int value: 42
string value: test
float value: 3.14
*/