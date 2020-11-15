// παραδείγματα uniform initialization
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class foo
{
    int a_;
    double b_;

public:
    foo() : a_(0), b_(0) {}
    foo(int a, double b = 0.0) : a_(a), b_(b) {}
};

int main()
{
    int i{42};
    int j = 3.14; // narrowing occurs
    // int k {3.14}; // error: narrowing conversion of '3.1400000000000001e+0' from 'double' to 'int' [-Wnarrowing]
    int arr1[3]{1, 2, 3};
    int *arr2 = new int[3]{1, 2, 3}; // πίνακας με δυναμική δέσμευση μνήμης
    vector<int> v{1, 2, 3};
    map<int, string> m{{1, "one"}, {2, "two"}};
    foo f1{1};
    foo f2{1, 2.5};
}