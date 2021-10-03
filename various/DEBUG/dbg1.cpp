#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{"Hello", "World", "from", "C++"};
    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
