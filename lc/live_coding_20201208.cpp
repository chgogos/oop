#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<string> v;
    fstream ifs("data.txt");
    string s;
    while (getline(ifs, s))
    // while (ifs >> s)
    {
        v.push_back(s);
        cout << s << endl;
    }
    ifs.close();

    cout << "using vector" << endl;
    for(string s: v){
        cout << s << " ";
    }
    cout << "\nvector size=" << v.size() << endl;
    cout << endl;
}
