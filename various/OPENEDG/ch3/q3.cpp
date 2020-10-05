#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    vector<int> v1{3,9,2,4,5};
    vector<int>::iterator found = find_if(v1.begin(), v1.end(), 4);
    cout << *found;
}

/*
3 9 2 4 5 
3 9 2 4 5 
*/