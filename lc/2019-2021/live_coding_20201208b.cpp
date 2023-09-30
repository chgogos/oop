#include <iostream>

using namespace std;

int main()
{
    string s = "this is a dummy text";
    cout << s.size() << endl;
    cout << s.length() << endl;

    int pos = s.find("dummy");
    if (pos == string::npos) // 
    {
        cout << "not found";
    }
    else
    {
        cout << "found at position " << pos << endl;
    }

    cout << s.substr(5, 4) << endl;
}
