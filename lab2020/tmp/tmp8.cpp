// δημιουργία vector {3,13,6,1,8,9}
// ταξινόμηση --> {1,3,6,8,9,13}
// εμφάνιση
// ανακάτεμα των 4 πρώτων {8,6,3,1,9,13} 
// εμφάνιση

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v{3,13,6,1,8,9};

    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;

}
