#include <iostream>
#include <map>
using namespace std;
int main()
{
    std::map<std::string, int> months = {
        {"Jan", 31},
        {"Feb", 28},
        {"Mar", 31},
        {"Apr", 30},
    };

    map<string, int>::iterator itr = months.begin();
    while (itr != months.end())
    {
        if (itr->second == 31)
            itr = months.erase(itr);
        else
            ++itr;
    }

    for (auto itr = months.cbegin(); itr != months.cend(); ++itr)
    {
        cout << itr->first << " " << itr->second << endl;
    }
}