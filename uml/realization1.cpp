#include <iostream>

using namespace std;

class Person
{
protected:
    string name;

public:
    Person(string n) : name(n) {}
};

class Musician
{
public:
    virtual void play() = 0;
};

class Pianist : public Person, public Musician
{
private:
    string piano;

public:
    Pianist(string name, string piano) : Person(name), piano(piano) {}
    void play()
    {
        cout << "Musician: " << name << " Instrument: " << piano << endl;
    }
};

int main(){
    Pianist p("Nikolaos", "Steinway & Sons");
    p.play();
}