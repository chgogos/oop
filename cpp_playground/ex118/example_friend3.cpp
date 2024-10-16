#include <iostream>
using namespace std;

class House {
private:
    string secretRoom;  

public:
    House(string secret) : secretRoom(secret) {}
    friend class Friend;
};

class Friend {
public:
    void accessSecretRoom(House& myFriendHouse) {
        // Εφόσον η κλάση Friend είναι φίλη της House, μπορεί να έχει πρόσβαση στο ιδιωτικό μέλος της secretRoom
        cout << "File: " << __FILE__ << " function: "<< __func__ << " line number: " << __LINE__ <<  endl;
        cout << "Accessing the secret room: " << myFriendHouse.secretRoom << endl;
    }
};

int main() {
    House myHouse("Hidden Library");  
    Friend bestFriend;

    bestFriend.accessSecretRoom(myHouse);

    return 0;
}
