#include <iostream>

class MyClass {
    private:
        int x;
    // public:
    friend void func(MyClass);
    friend class B;
};

class B{
    public:
    void func2(MyClass c){
        c.x=20;
        std::cout << c.x << std::endl;
    }
};

void func(MyClass c){
    c.x=10;
    std::cout << c.x << std::endl;
}

int main(){
    MyClass obj;
    func(obj);
    B obj2;
    obj2.func2(obj);
    return 0;
}