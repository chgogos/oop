#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << "v.size() = " << v.size() << endl;
    cout << "v.capacity() = " << v.capacity() << endl;
    cout << "v.max_size() = " << v.max_size() << endl;

    cout << "v[0] = " << v[0] << endl;
    cout << "v[1] = " << v[1] << endl;
    cout << "v[2] = " << v[2] << endl;

    cout << "v.at(0) = " << v.at(0) << endl;
    cout << "v.at(1) = " << v.at(1) << endl;
    cout << "v.at(2) = " << v.at(2) << endl;

    cout << "v.front() = " << v.front() << endl;
    cout << "v.back() = " << v.back() << endl;

    cout << "v.data() = " << v.data() << endl;
    cout << "v.empty() = " << v.empty() << endl;

}
