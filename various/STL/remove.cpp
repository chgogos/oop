// remove, remove_if, erase
#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> v){
    for_each(begin(v), end(v), [](int x){cout << x << " ";});
    cout << endl;
}

int main()
{
    vector<int> v{1,2,3,4,5,2,3,2};

    auto mark = remove(begin(v), end(v), 2);
    print_vector(v);
    v.erase(mark, end(v));
    print_vector(v);

    // erase και remove σε 1 γραμμή
    v = {1,2,3,4,5,2,3,2};
    v.erase(remove(begin(v), end(v), 2), end(v));
    print_vector(v);

    // διαγραφή όλων των περιττών τιμών
    v = {1,2,3,4,5,2,3,2};
    v.erase(remove_if(begin(v), end(v), [](int x){return x%2==1;}), end(v));
    print_vector(v);
    
}

/*
1 3 4 5 3 2 3 2 
1 3 4 5 3 
1 3 4 5 3 
2 4 2 2 
*/