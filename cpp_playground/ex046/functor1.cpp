//  https://www.bogotobogo.com/cplusplus/functors.php

#include <iostream>

struct absValue
{
    float operator()(float f)
    {
        return f > 0 ? f : -f;
    }
};

int main()
{

    using namespace std;
    float f = -123.45;
    absValue aObj;
    float abs_f = aObj(f);
    cout << "f = " << f << " abs_f = " << abs_f << endl;
    return 0;
}

/*
f = -123.45 abs_f = 123.45
*/