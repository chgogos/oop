#include <iostream>
using namespace std;

// κλήση με αναφορά (C)
void fun1(int x, int *y){
    x++;
    (*y)++;
}

// κλήση με αναφορά (C++)
void fun2(int x, int &y){
    x++;
    y++;
}

int main()
{
    int a=5,b=5;
    fun1(a,&b);
    cout << a << " " << b << endl;
    fun2(a,b);
    cout << a << " " << b << endl;
}