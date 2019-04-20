#include <iostream>

void fun(int &x){
    std::cout << "using lvalue reference " << x << std::endl; 
}

void fun(int &&x){
    std::cout << "using rvalue reference " << x << std::endl; 
}


int main(){
    int a=42; // a is a lvalue
    int &r=a; // r is a lvalue reference (reference)

    fun(a); //  καλείται η έκδοση της συνάρτησης με το lvalue reference
    fun(r); //  καλείται η έκδοση της συνάρτησης με το lvalue reference
    fun(42); // καλείται η έκδοση της συνάρτησης με το rvalue reference
    fun(40+2); // καλείται η έκδοση της συνάρτησης με το rvalue reference
}