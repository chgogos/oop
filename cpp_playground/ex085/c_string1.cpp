#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const char *c_s{"This is a test"};

    for (int i = 0; i < strlen(c_s); i++)
    {
        cout << "'" << c_s[i] << "' " << (int)c_s[i] << endl;
    }

    char dest[50];
    strcpy(dest, c_s);
    cout << dest << endl;

    string s{"another text"};
    cout << s << endl;
    cout << s.length() << endl;
    cout << strlen(s.c_str()) << endl; // μετατροπή std::string σε c-string έτσι ώστε να χρησιμοποιηθεί η strlen
}

/*
'T' 84
'h' 104
'i' 105
's' 115
' ' 32
'i' 105
's' 115
' ' 32
'a' 97
' ' 32
't' 116
'e' 101
's' 115
't' 116
This is a test
another text
12
12
*/