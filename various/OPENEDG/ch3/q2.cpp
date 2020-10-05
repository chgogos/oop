#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

struct myprinter{
    void operator() (int i) {cout << i << " ";}
};

int main(){
    deque<int> d1{3,9,2,4,5};
    for_each(d1.begin(), d1.end(), myprinter());
    cout << endl;
    for_each(d1.begin(), d1.end(), *(new myprinter())); // myprinter object created only once
}

/*
3 9 2 4 5 
3 9 2 4 5 
*/