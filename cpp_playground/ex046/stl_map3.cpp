#include <iostream>
#include <map>
using namespace std;

void fun(const map<int, string> &m, int key)
{
    // cout << m[101] << // operator[] is modifying
    map<int, string>::const_iterator cit = m.find(key);
    if (cit != m.end())
        cout << key << " " << cit->second << endl;
    else
        cout << key << " not found" << endl;
}

int main()
{
    map<int, string> a_map;
    a_map[101] = "Chris";
    a_map[102] = "Katerina";
    a_map[201] = "Maria";

    for (int key : {100, 101, 102, 201, 202})
    {
        fun(a_map, key);
    }
}

/*
100 not found
101 Chris
102 Katerina
201 Maria
202 not found

*/