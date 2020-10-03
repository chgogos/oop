// 1.4.3

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector <int> v;
    cout<<"Size and capacity: "<<v.size() << " " << v.capacity() <<endl;

    for(int i = 0; i < 20; ++i)
    {
        v.push_back(i);
        cout<<"Size and capacity: "<<v.size() << " " << v.capacity() <<endl;
    }
    return 0;
}

/*
Size and capacity: 0 0
Size and capacity: 1 1
Size and capacity: 2 2
Size and capacity: 3 4
Size and capacity: 4 4
Size and capacity: 5 8
Size and capacity: 6 8
Size and capacity: 7 8
Size and capacity: 8 8
Size and capacity: 9 16
Size and capacity: 10 16
Size and capacity: 11 16
Size and capacity: 12 16
Size and capacity: 13 16
Size and capacity: 14 16
Size and capacity: 15 16
Size and capacity: 16 16
Size and capacity: 17 32
Size and capacity: 18 32
Size and capacity: 19 32
Size and capacity: 20 32
*/