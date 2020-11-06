#include <iostream>

using namespace std;

class MyClass{
    private:
        int x;
    public:
        MyClass(int _x): x(_x){}
        void fun(){
            x++;
        }
        void print() const
        {
            cout << x << endl;
        }
};

int main(){
    MyClass obj(42);
    obj.fun();
    obj.print();
}