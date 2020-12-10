#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, string> telephones;
    telephones.insert({"nikos", "697123226"});
    telephones.insert({"petros", "697122456"});
    telephones.insert({"maria", "697223456"});

    cout << telephones["maria"] << endl;

    cout << "#######################" << endl;
    for(auto kv: telephones){
        cout << kv.first << " " << kv.second << endl;
    }

    // εμφάνιση όλων των στοιχείων του map με iterator
    cout << "#######################" << endl;
    for(auto it=telephones.begin();it!=telephones.end();it++){
        cout << it->first << " " << it->second << endl;
    }

}
