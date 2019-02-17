#include <iostream>

// call by value
void fun1(int x){
    x++;
}

// call by reference (using C++ reference)
void fun2(int &x){
    x++;
}

// call by reference (using C pointer)
void fun3(int *x){
    (*x)++;
}

int main(){
    int x = 5;
    std::cout << "1: x=" <<  x << std::endl;
    fun1(x);
    std::cout << "2: x=" <<  x << std::endl;
    fun2(x);
    std::cout << "3: x=" <<  x << std::endl;
    fun3(&x);
    std::cout << "4: x=" <<  x << std::endl;
}
