#include <iostream>
using namespace std;

class Pet{
    protected:
        string name;
    public:
        Pet(string n):name(n){}
        virtual ~Pet(){}
        virtual string sound() = 0;
};

class Dog: public Pet {
    public:
        Dog(string n): Pet(n){}
        virtual ~Dog(){}
        string sound(){return "Woof";}
    
};

class Cat: public Pet {
    public:
        Cat(string n): Pet(n){}
        virtual ~Cat(){}
        string sound(){return "Miao";}
};

int main(){
    Pet mypet("adelle");
    Pet *p;
    p = new Dog("Alf");
    cout << p->sound() << endl;
    delete p;
    p = new Cat("Jane");
    cout << p->sound() << endl;
    delete p;
}