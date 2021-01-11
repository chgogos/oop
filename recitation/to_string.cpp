#include <iostream>
#include <sstream>

using namespace std;

class A
{
private:
    int x;

public:
    A(int x) : x(x) {}
    operator std::string() const
    {
        std::stringstream ss;
        ss << x;
        return ss.str();
    }
};

int main(){
    A obj(42);
    cout << string(obj) << endl;
}

/*
42
*/