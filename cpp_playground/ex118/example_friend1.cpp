#include <iostream>
using namespace std;

class House {
private:
  string secretRoom;

public:
  House(string secret) : secretRoom(secret) {}

  void accessHiddenRoom() {
    cout << "File: " << __FILE__ << " function: " << __func__
         << " line number: " << __LINE__ << endl;
    cout << "Accessing the secret room: " << this->secretRoom << endl;
  }
};

int main() {
  House myHouse("Hidden Library"); // The secret room is a hidden library
  myHouse.accessHiddenRoom();
  return 0;
}
