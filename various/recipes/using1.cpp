// using για ορισμό ψευδωνύμου τύπου

#include <iostream>
#include <vector>

using namespace std;

using vec_t = vector<int>;

int main(){
    vec_t v{1,2,3,4};
    for(const auto& x : v){
        cout << x << " ";
    }
}

/*
1 2 3 4 
*/