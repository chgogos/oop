#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Person{
    public:
        int age;
        string name;
};

void fun1(){
    int *px = new int;
    *px = 42;
    cout << *px << endl;
    delete px;
    px = NULL;
    cout << *px << endl;
    cout << "finish" << endl;
}

void fun2(){
    Person a[5]; // stack
    
    Person *pp = new Person[5]; // heap
    pp[0].age = 20; 
    pp[0].name = "Nikos";
    delete [] pp;

    Person *p = new Person;
    // (*p).age = 25;
    p->age = 25;
    // (*p).name = "maria";
    p->name = "maria";
    delete p;
}

void fun3(){
    // c++
    int *p1 = new int;
    *p1 = 33;
    delete p1;

    // c
    int *p2 = (int*) malloc(sizeof(int));
    *p2 = 56;
    free(p2);

    
}

int main(){
    // fun1();
    fun2();
}