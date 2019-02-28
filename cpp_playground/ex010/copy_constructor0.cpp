// shallow copy

#include <iostream>

class MyClass {
    private: 
        int a;
        double b;
        int c[10];
    public:
        MyClass() : a(0), b(0.0) {
            for(int i=0;i<10;i++)
                c[i]=-1;
            std::cout << "default constructor" << std::endl;
        }

        // MyClass(const MyClass &r) : a(r.a), b(r.b) {
        //     for(int i=0;i<10;i++)
        //         c[i]=r.c[i];
        //     std::cout << "copy constructor" << std::endl;
        // }

        // MyClass& operator=(const MyClass &r) {
        //     std::cout << "copy assignment" << std::endl;
        //     a=r.a;
        //     b=r.b;
        //     for(int i=0;i<10;i++)
        //         c[i]=r.c[i];
        //     return *this;
        // }

        void modify(int i, int x){
            c[i]=x;
        }
        
        void print(){
            std::cout << "a=" << a << std::endl;
            std::cout << "b=" << b << std::endl;
            std::cout << "c=[ ";
            for (int i=0;i<10;i++){
                std::cout << c[i] << " ";
            }
            std::cout << "]" << std::endl;
        }
};

int main(){
    MyClass obj1; // default constructor
    MyClass obj2 = obj1; // copy constructor
    MyClass obj3(obj1); // copy constructor
    MyClass obj4;
    obj4 = obj1; // copy assignment
    obj1.modify(0,99);
    std::cout << "obj1" << std::endl;
    obj1.print();
    std::cout << "obj2" << std::endl;
    obj2.print();
    std::cout << "obj3" << std::endl;
    obj3.print();
    std::cout << "obj4" << std::endl;
    obj4.print();
    return 0;
}
