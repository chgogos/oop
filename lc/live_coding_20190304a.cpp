#include <iostream>

class A {
    private:

    public:
        int x;
        static int a;
        A() : x(99) {
            A::a++;
        }
};

int A::a = 0;

int main(){
    std::cout << ">>> "<< A::a << std::endl;
    A obj1, obj2;
    A obj3[100];
    obj2.x=98;
    A *p = new A();
    std::cout << obj1.x << std::endl;
    std::cout << obj2.x << std::endl;
    std::cout << ">>> "<< A::a << std::endl;
    delete p;
}