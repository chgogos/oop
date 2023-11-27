#include <iostream>
using namespace std;

template<class T>
class A{
    private:
        int x;
        T y;
    public:
        A(T y): x(0), y(y) {
            cout << "Constructor of A called" << endl;
        }
        void info(){
            cout << "Address: " << this << endl;
            cout << "x=" << x << endl;
            cout << "y=" << y << endl;
        }
};

int main(){
    A<int> obj(42);
    obj.info();

    A<string> obj2("arta");
    obj2.info();

}