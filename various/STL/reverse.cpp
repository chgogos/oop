#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s{"This is a test!"};

    //reverse
    reverse(begin(s), end(s));
    cout << s << endl;

    //reverse_copy
    string s2{"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    reverse_copy(begin(s), end(s), begin(s2));
    cout << s2 << endl;
}