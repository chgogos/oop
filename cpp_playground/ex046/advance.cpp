#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> a_list{1,2,3,4,5,6};

    list<int>::iterator itr = a_list.begin();
    // itr += 4; // error: no viable overloaded '+='
    advance(itr, 4);
    cout << *itr << endl;
    advance(itr, -2);
    cout << *itr << endl;
}

/*
5
3
*/