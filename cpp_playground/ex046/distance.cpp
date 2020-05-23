#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> a_list{1,2,3,4,5,6};

    list<int>::iterator itr = a_list.begin();
    advance(itr, 3);
    itr++;
    cout << *itr << endl;
    cout << "Distance to end: " << (int)distance(itr, a_list.end()) << endl;
    cout << "Distance from begin: " << (int)distance(a_list.begin(), itr) << endl;
    return 0;
}

/*
5
2
3
*/