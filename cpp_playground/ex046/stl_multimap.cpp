#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<string, string> a_map{{"000", "aaa"}, {"000", "bbb"}, {"000", "ccc"}, {"001", "ddd"}, {"002", "eee"}};
    auto result_pair = a_map.equal_range("000");
    for (auto itr = result_pair.first; itr != result_pair.second; itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
}

/*
000 aaa
000 bbb
000 ccc
*/