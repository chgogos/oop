// https://www.learncpp.com/cpp-tutorial/4-4b-an-introduction-to-stdstring/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    cout << "Input a word: ";
    cin >> s1;
    cin.ignore(32767, '\n'); // αν ακολουθεί getline μετά το cin
    string s2;
    cout << "Input a line: ";
    getline(cin, s2);

    cout << s1 << endl;
    cout << s2 << endl;

    string s3 = s1 + s2; // append strings 
    cout << s3 << " " << s3.length() << endl; 

    cout << s3.substr(0, s3.find(' '));

    return 0;
}


/*
Input a word: aaa
Input a line: bbb ccc
aaa
bbb ccc
aaabbb ccc 10
aaabbb
*/