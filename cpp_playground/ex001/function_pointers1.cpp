#include <iostream>

void test(){
    std::cout << "just testing";
}

typedef void(*MyFunction)();

int main(){
    MyFunction f=test;
    f();
}