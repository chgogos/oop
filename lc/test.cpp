#include <iostream>

using namespace std;

int fun(const int a){
    a *= 2;
    return a;
}

int main(){
    int x = 5;
    cout << fun(x) << endl;
}