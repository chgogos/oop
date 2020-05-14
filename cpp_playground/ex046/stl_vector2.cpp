#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v1(10);
    cout << "1. SIZE: " << v1.size() << " CAPACITY: " << v1.capacity() << endl;
    v1.resize(100);
    cout << "1. SIZE: " << v1.size() << " CAPACITY: " << v1.capacity() << endl;

    vector<string> v2(10, "hi!");
    cout << "2. SIZE: " << v2.size() << " CAPACITY: " << v2.capacity() << endl;

    vector<double> v3;
    cout << "3. SIZE: " << v3.size() << " CAPACITY: " << v3.capacity() << endl;
    v3.reserve(50);
    cout << "3. SIZE: " << v3.size() << " CAPACITY: " << v3.capacity() << endl;
}

/*
1. SIZE: 10 CAPACITY: 10
1. SIZE: 100 CAPACITY: 100
2. SIZE: 10 CAPACITY: 10
3. SIZE: 0 CAPACITY: 0
3. SIZE: 0 CAPACITY: 50
*/