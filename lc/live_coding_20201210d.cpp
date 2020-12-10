#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> v{"arta", "ioannina", "athens", "patra"};
    cout << "####################" << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // 1. ταξινόμηση λίστας αλφαβητική

    cout << "####################" << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    
    // 2. ταξινόμηση λίστας αλφαβητική σε φθίνουσα σειρά

    cout << "####################" << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // 3. ταξινόμηση λίστας σε φθίνουσα σειρά πλήθους χαρακτήρων
    
    cout << "####################" << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}
