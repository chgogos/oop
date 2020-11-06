#include <iostream>

using namespace std;

void fun(int a, int b, int sum, int prod){
    sum = a+b;
    prod = a*b;
}

int main(){
    int x, y, z=0, w=0;
    x = 1;
    y = 2;
    fun(x,y,z,w);
    cout << "SUM " << z << endl;
    cout << "PROD " << w << endl;
}