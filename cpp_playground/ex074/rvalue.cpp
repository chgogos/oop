// An lvalue is an expression that refers to a memory location and 
// allows us to take the address of that memory location via the & operator. 

// An rvalue is an expression that is not an lvalue.

#include <iostream>

void fun1(int &x){
    std::cout << x << std::endl;
    x++;
}

void fun2(const int &x){
    std::cout << x << std::endl;
    // x++; // variable 'x' declared const here
}


int main(){

    // fun1(42); error: candidate function not viable: expects an l-value for 1st argument
    int x = 42;
    fun1(x);

    fun2(42);
    fun2(x);

    return 0;
}