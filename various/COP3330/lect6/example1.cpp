#include <iostream>
#include <string>

using namespace std;

// καλούμε την ακόλουθη friend συνάρτηση της κλάσης string:
// ostream& operator<<(ostream& os, const string& s);

int main()
{
    string MyString1 = "Hello!! ";
    string MyString2 = "How are you?\n";

    cout << MyString1 << MyString2;

    cout << "********************\n";

    operator<<(operator<<(cout, MyString1), MyString2);
}

/* έξοδος
Hello!! How are you?
********************
Hello!! How are you?
*/