#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

void myprint(int i){
    cout << i << " ";
};

int main(){
    deque<int> d1{3,9,2,4,5};
    for_each(d1.begin(), d1.end(), myprint);
}

/*
3 9 2 4 5 
*/