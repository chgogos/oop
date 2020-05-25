#include <iostream>

class ClassA
{
    int x_;

  public:
    ClassA(int x) : x_(x) {}
    friend class ClassB;
};

class ClassB
{
    int y_;

  public:
    ClassB(int y) : y_(y) {}
    void func(ClassA &obj){
        std::cout << "I can access " << obj.x_ << std::endl;
    }
};

int main(){
    ClassA obj1(5);
    ClassB obj2(10);
    obj2.func(obj1);
    return 0;
}


/*
I can access 5
*/