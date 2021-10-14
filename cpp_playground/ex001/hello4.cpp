#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{"Hello", "World", "again!"};
    for (const string &w : msg)
    {
        cout << w << " ";
    }
    cout << endl;
}