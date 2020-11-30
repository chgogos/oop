#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    const char *s1 = "This is a C-string"; // string literal
    cout << s1 << endl;
    if (strcmp(s1, "This is a C-string") == 0)
    {
        cout << "Equal C-strings" << endl;
    }

    cout << "------------------------" << endl;

    string s2 = "This is a std::string"; // std::string (αρχικοποίηση από ένα C-string)
    cout << s2 << endl;
    if (s2 == "This is a std::string") // σύγκριση std::string
    {
        cout << "Equal std::strings" << endl;
    }
    if (s2.compare("This is a std::string") == 0) // η σύγκριση std::string γίνεται και με τη συνάρτηση μέλος compare
    {
        cout << "Equal std::strings" << endl;
    }

    s2 += " with added text"; // συνένωση std::string
    cout << s2 << endl;
}

/*
This is a C-string
Equal C-strings
------------------------
This is a std::string
Equal std::strings
Equal std::strings
This is a std::string with added text
*/