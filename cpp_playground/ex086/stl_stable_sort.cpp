#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<string> v{"a", "aaa", "aa", "bbb", "ccc", "bb", "cc", "dd", "b", "c", "ddd", "d", "ee", "eee", "e", "f", "fff", "ff"};
    sort(v.begin(), v.end(), [](string s1, string s2) { return s1.size() < s2.size(); });
    cout << "SORT" << endl;
    copy(v.begin(), v.end(), ostream_iterator<string>(cout, " "));

    cout << "\nSTABLE SORT" << endl;
    v.assign({"a", "aaa", "aa", "bbb", "ccc", "bb", "cc", "dd", "b", "c", "ddd", "d", "ee", "eee", "e", "f", "fff", "ff"});
    stable_sort(v.begin(), v.end(), [](string s1, string s2) { return s1.size() < s2.size(); });
    copy(v.begin(), v.end(), ostream_iterator<string>(cout, " "));
}

/*
SORT
a f e d c b ff ee dd cc bb aa ddd ccc eee bbb fff aaa
STABLE SORT
a b c d e f aa bb cc dd ee ff aaa bbb ccc ddd eee fff 
*/