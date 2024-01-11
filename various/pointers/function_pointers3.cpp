#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int compare_string_by_length(string s1, string s2)
{
    return s1.length() - s2.length();
}

int main()
{
    vector<string> v = {"christos", "maria", "nikos", "aristea"};
    sort(v.begin(), v.end());
    for (string s : v)
    {
        cout << s << " ";
    }
    cout << endl;

    // ταξινόμηση με βάση το μήκος λεκτικών (αύξουσα)
    // 1
    int (*cfs)(string, string) = compare_string_by_length; // προσοχή στη θέση δήλωσης της μεταβλητής cfs
    sort(v.begin(), v.end(), cfs);

    // 2
    auto cfs2 = compare_string_by_length;
    sort(v.begin(), v.end(), cfs2);

    // 3
    sort(v.begin(), v.end(), compare_string_by_length);

    // 4
    auto lfn = [](string s1, string s2) { return s1.length() - s2.length(); };
    sort(v.begin(), v.end(), lfn);

    // 5 
    sort(v.begin(), v.end(), [](string s1, string s2) { return s1.length() - s2.length(); });

    for (string s : v)
    {
        cout << s << " ";
    }
    cout << endl;
}