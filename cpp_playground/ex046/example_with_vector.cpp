#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v{42,31,56,77};
    v.push_back(99);

    cout << "1. Vector iteration, the classic way with []" << endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    } 

    cout << "2. Vector iteration with .at()" << endl;
    for(int i=0;i<v.size();i++){
        cout << v.at(i) << endl;
    } 

    // range based for
    cout << "3. Vector iteration with range based for" << endl;
    for(int x: v){
        cout << x << endl;
    }

    // iterator
    cout << "4. Vector iteration with iterator" << endl;
    vector<int>::iterator it = v.begin();
    while  (it != v.end()){
        cout << *it << endl;
        it++;
    }

    cout << "5. Vector iteration with iterator" << endl;
    for(auto it = v.begin();it != v.end();it++){
        cout << *it << endl;
    }

    cout << "Sorted" << endl;
    sort(v.begin(), v.end());
    for(auto x: v) cout << x << endl;
}