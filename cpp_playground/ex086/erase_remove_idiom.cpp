#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    vector<int> v{7,13,2,8,9,1,8,4,5};

    // διαγραφή περιττών τιμών από το v
    v.erase(remove_if(v.begin(), v.end(), [](int x){return x%2==1;}), v.end());

    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
}

/*
2 8 8 4
*/