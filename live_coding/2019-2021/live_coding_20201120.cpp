#include <iostream>
using namespace std;

class A {
    public:
        virtual void fun(){
            cout << "Message from A" << endl;
        }
};

class B: public A {
    public:
        void fun(){
            cout << "Message from B" << endl;
        }
};

class C: public A {
    public:
        void fun(){
            cout << "Message from C" << endl;
        }
};

int main(){
    A obj1;
    B obj2;
    C obj3;
    A *po[3] = {&obj1, &obj2, &obj3};
    for(int i=0;i<3;i++){
        po[i]->fun();
    }
}