#include <iostream>

class BaseA {
    protected:
        int a=1; // in class initialization (c++11)
        int b=2; 
    public:
        void func1(){
            std::cout << "BaseA::func1" << std::endl;
            std::cout << "a = " << a << std::endl;
        }
};

class DerivedA : public BaseA {
    private:
        int a=3; 
        int c=4;
    public:
        void func2(){
            std::cout << "DerivedA::func2" << std::endl;
            std::cout << "a = " << a << std::endl; // εμφανίζει το DerivedA::a
            std::cout << "b = " << b << std::endl; // ok, το b είναι ορισμένο ως protected στην BaseA
            std::cout << "c = " << c << std::endl;
        }    
};

int main(){
    BaseA obj1;
    DerivedA obj2;
    std::cout << "Call function of obj1 (instance of BaseA)" << std::endl;
    obj1.func1();

    std::cout << "Call functions of obj2 (instance of DerivedA)" << std::endl;
    obj2.func1();
    obj2.func2();
}