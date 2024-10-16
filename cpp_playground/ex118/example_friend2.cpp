#include <iostream>
using namespace std;

class House {
private:
    string secretRoom;  

public:
    House(string secret) : secretRoom(secret) {}

friend void accessHiddenRoom(House& house);
};

void accessHiddenRoom(House& house){
    cout << "File: " << __FILE__ << " function: "<< __func__ << " line number: " << __LINE__ <<  endl;
    cout << "Accessing the secret room: " << house.secretRoom << endl;
}

int main() {
    House myHouse("Hidden Library");  
    accessHiddenRoom(myHouse);
    return 0;
}
