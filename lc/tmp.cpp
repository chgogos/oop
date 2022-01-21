#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, string> phone_book={
        {"nikos", "111111"},
        {"maria", "3333"},
        {"petros", "2222"},
    };

    for (auto kv: phone_book){
        cout << kv.first << " " << kv.second << endl;
    }

    cout << phone_book["nikos"] << endl;

}