#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // c-strings
    const char* s1 = "Hello";
    char s2[100];
    strcpy(s2,s1);
    s2[0] = 'h';
    cout << s1 << endl;
    cout << s2 << endl;

    //std::string
    string s3="Hello";
    string s4;
    s4 =s3;
    s3[0]='*';
    cout << s3 << endl;
    cout << s4 << endl;

    //std::string_view (c++17)
    string_view sv1{s4};
    cout << "> " << sv1 << endl;
    s4[2]='*';
    cout << "> " << sv1 << endl;
    cout << sv1.length() << endl;


}

