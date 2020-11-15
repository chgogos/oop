// typedef για ορισμό ψευδωνύμου τύπου

#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vec_t;

int main(){
    vec_t v{1,2,3,4};
    for(const auto& x : v){
        cout << x << " ";
    }
}

/*
1 2 3 4 
*/