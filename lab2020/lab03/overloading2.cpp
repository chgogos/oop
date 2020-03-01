// o τελεστής == είναι υπεφορτωμένος από τη C++

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int i1 = 1;
    int i2 = 1;
    string s1 = "arta";
    string s2 = "arta";
    vector v1{10, 20, 30};
    vector v2{10, 20, 30};

    if (i1 == i2)
    {
        cout << "EQUAL" << endl;
    }

    if (s1 == s2)
    {
        cout << "EQUAL" << endl;
    }

    if (v1 == v2)
    {
        cout << "EQUAL" << endl;
    }
}
