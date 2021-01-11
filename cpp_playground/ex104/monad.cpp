// https://www.youtube.com/watch?v=aFvyOyVO8i0

#include <iostream>
#include <optional>

using namespace std;

optional<int> getValue(bool input)
{
    if (input)
        return 100;
    else
        return nullopt;
}

int main()
{
    optional<int> val = getValue(true);
    if (val)
    {
        cout << "Value => " << *val << endl;
    }
    return 0;
}

/*
Value => 100
*/