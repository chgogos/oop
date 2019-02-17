#include <iostream>

using namespace std;

bool isShorter(const string &s1,
               const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    string str1 = "apple";
    string str2 = "nut";
    cout << str1 << "<" << str2 << ": " <<  isShorter(str1, str2);
}