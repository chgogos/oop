#include <iostream>
using namespace std;

int fun1(int a, int b){
    return a + b;
}

int fun2(int a, int b){
    return a*b;
}

int fun(int (*fn)(int, int), int a, int b){
    return fn(a,b);
}

int main(){
    cout << fun(fun1, 4,5) << endl;
    cout << fun(fun2, 4,5) << endl;
}