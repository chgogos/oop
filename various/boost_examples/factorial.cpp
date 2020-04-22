https://www.boost.org/doc/libs/1_72_0/libs/multiprecision/doc/html/boost_multiprecision/tut/ints/egs/factorials.html

#include <iostream>
#include <cassert>
#include <boost/multiprecision/cpp_int.hpp>

using boost::multiprecision::cpp_int;

using namespace std;

cpp_int factorial(int n)
{
    assert(n >= 0);
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    for (int i = 0; i < 10; i++)
        cout << i << "!=" << factorial(i) << endl;
}

/*

*/