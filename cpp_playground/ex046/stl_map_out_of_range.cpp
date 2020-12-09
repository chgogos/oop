// [] vs at
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{

    map<string, int> dict = {{"nikos", 19}, {"maria", 30}, {"petros", 25}};

    cout << "1. []" << endl;
    cout << dict["christos"] << endl; // το κλειδί "christos" εισάγεται στο map

    cout << "2. at" << endl;
    try
    {
        cout << dict.at("george") << endl; // εφόσον δεν υπάρχει το κλειδί γίνεται throw exception
    }
    catch (const out_of_range &ex)
    {
        cout << "KEY NOT FOUND " << ex.what() << endl;
    }

    cout << "3. range for" << endl;
    // εμφάνιση περιεχομένων dictionary με range based for
    for (const auto &kv : dict)
    {
        cout << kv.first << "->" << kv.second << endl;
    }

    cout << "4. erase" << endl;
    auto it = dict.find("christos");
    dict.erase(it);

    // εμφάνιση περιεχομένων dictionary με iterator
    for (auto it = dict.begin(); it != dict.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    cout << "5. find" << endl;
    if (dict.find("maria") == dict.end())
    {
        cout << "Found in the dictionary" << endl;
    }
    else
    {
        cout << "Not found in the dictionary" << endl;
    }

    cout << "6. count" << endl;
    cout << dict.count("maria") << endl;
    cout << dict.count("christina") << endl;

    cout << "7. for_each" << endl;
    for_each(dict.begin(), dict.end(), [](auto kv) { cout << kv.first << " " << kv.second << endl; });
}

/*
1. []
0
2. at
KEY NOT FOUND map::at
3. range for
christos->0
maria->30
nikos->19
petros->25
4. erase
maria 30
nikos 19
petros 25
5. find
Not found in the dictionary
6. count
1
0
7. for_each
maria 30
nikos 19
petros 25
*/
