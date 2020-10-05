#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int mynumbers[]={3,9,2,4,5};
    string words[]={"three", "nine", "two", "four", "five"};
    map<int, string> m;
    for(int i=0;i<5;i++){
        m.insert(pair<int, string>(mynumbers[i], words[i]));
    }
    pair<map<int, string>::iterator, map<int, string>::iterator> myrange = m.equal_range(3);
    cout << myrange.first->first << " " << myrange.first->second << endl;
    cout << myrange.second->first << " " << myrange.second->second << endl;
}