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
    sort(v.begin(), v.end());
    cout << "####################" << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // 2. ταξινόμηση λίστας αλφαβητική σε φθίνουσα σειρά
    sort(v.begin(), v.end(), greater<string>());
    cout << "####################" << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // 3. ταξινόμηση λίστας σε φθίνουσα σειρά πλήθους χαρακτήρων
    sort(v.begin(), v.end(), [](string a, string b) { return a.length() > b.length(); });
    cout << "####################" << endl;
    for (auto x : v)
    {
        cout << x << "(" << x.length() << ") ";
    }
    cout << endl;
}
