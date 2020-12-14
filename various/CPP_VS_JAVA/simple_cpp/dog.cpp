#include <iostream>
using namespace std;
class dog
{
private:
    string name;
    string species;

public:
    dog(string n, string s) : name(n), species(s) {}

    void make_sound()
    {
        cout << "Dog " << name << " of species " << species << " barks" << endl;
    }
};

int main()
{
    dog obj("Adelle", "Maltese");
    obj.make_sound();
}

/*
Dog Adelle of species Maltese barks
*/