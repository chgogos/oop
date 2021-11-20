#include <iostream>

using namespace std;

int g= 42; // static memory

int main(){
    int loc=50, loc2=44; // stack memory

    int *x = new int; // heap memory
    *x = 100;
    x = NULL;

    cout << &g << endl;
    cout << &loc << endl;
    cout << &loc2 << endl;
    cout << x << endl;
    cout << "----" << endl;
    
    int a[]={1,2,3,4};
    for (int i=0;i<4;i++)
        cout << *(a+i) << endl;

}