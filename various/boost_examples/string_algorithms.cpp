#include <iostream>
#include <string>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/trim_all.hpp>

using namespace std;
using namespace boost::algorithm;

int main()
{
    string s1= "test    ";
    cout << "<" << s1 << ">" << endl;
    trim(s1);
    cout << "<" << s1 << ">" << endl;
    string s2 = " this is  a   test  ";
    trim_all(s2);
    cout << "<" << s2 << ">" << endl;
    to_upper(s2);
    cout << "<" << s2 << ">" << endl;
}