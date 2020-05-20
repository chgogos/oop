// δημιουργία ενός map 
// A --> 50
// B --> 40
// C --> 20
// ? --> 100

// 5 άτομα με διαφορετικές κατηγορίες (Α,Α,Β,C,E), σύνολο εισπράξεων
// 50 + 50 + 40 + 20 + 100 = 260

#include <map>
#include <iostream>

using namespace std;

int main(){
    map<string, int> dict{
        {"A",50},
        {"B", 40},
        {"C", 20}
    };

    int sum =0;
    for(auto x: {"A", "A", "B", "C", "E"}){
        if (dict.count(x))
            sum += dict[x];
        else
            sum +=100;
    }
    cout << "Total: "  << sum << endl;
}