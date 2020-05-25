#include  <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    cout << v.size() << " " << v.capacity() << endl;
    for(int i=0;i<10;i++)
        v[i]=i; // segmentation fault
    
}

/*
0 0
zsh: segmentation fault  
*/