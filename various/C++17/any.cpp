#include <iostream>
#include <string>
#include <vector>
#include <any>

using namespace std;

int main()
{
    any x, y, z;
    x = 42;
    y = string("test");
    z = 3.14f;
    cout << any_cast<int>(x) << endl;
    cout << any_cast<string>(y) << endl;
    cout << any_cast<float>(z) << endl;

    vector<any> v;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    for (auto a : v)
    {
        if (a.type() == typeid(int))
            cout << "int value: " << any_cast<int>(a) << endl;
        else if (a.type() == typeid(float))
            cout << "float value: " << any_cast<float>(a) << endl;
        else if (a.type() == typeid(string))
            cout << "string value: " << any_cast<string>(a) << endl;
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