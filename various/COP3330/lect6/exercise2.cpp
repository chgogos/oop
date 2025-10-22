#include <iostream>
#include <string>
using namespace std;

class Player {
 private:
  string name;
  string color;
  int score;

 public:
  Player(string n, string c, int s) : name(n), color(c), score(s) {}

  friend ostream& operator<<(ostream& out, const Player& p) {
    out << "Name: " << p.name << ", Color: " << p.color
        << ", Score: " << p.score;
    return out;
  }
};

int main() {
  Player p1("Mario", "Red", 1500);
  Player p2("Luigi", "Green", 1200);
  cout << p1 << endl;
  cout << p2 << endl;
  return 0;
}
