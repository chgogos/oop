#include <iostream>

using namespace std;

int main(){
    int a=10,b=3;
    double c;

    c= a/b;
    cout << c << endl;
    c=static_cast<double>(a)/b;
    cout << c << endl;
    c=static_cast<double>(a)/static_cast<double>(b);
    a = c;
    cout << a << endl;
}

/*
3
3.33333
3
*/