#include <iostream>
using namespace std;

class Character {
public:
    virtual void attack() const {
        cout << "Character performs a basic attack!" << endl;
    }
    virtual ~Character() {}
};

class Warrior : public Character {
public:
    void attack() const override {
        cout << "Warrior swings a sword!" << endl;
    }
};

class Mage : public Character {
public:
    void attack() const override {
        cout << "Mage casts a spell!" << endl;
    }
};

class Archer : public Character {
public:
    void attack() const override {
        cout << "Archer fires an arrow!" << endl;
    }
};

int main() {
    Character* characters[3];
    characters[0] = new Warrior();
    characters[1] = new Mage();
    characters[2] = new Archer();

    for (int i = 0; i < 3; ++i) {
        characters[i]->attack();
    }

    for (int i = 0; i < 3; ++i) {
        delete characters[i];
    }

    return 0;
}
