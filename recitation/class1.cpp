#include <iostream>

using namespace std;

class A
{
private:
    int x;

public:
    int y;
    A(int x, int y) : x(x), y(y) {}
    int get_x(){
        return x;
    }
};

int main()
{
    A obj(1,2);
    cout << obj.get_x() << endl;
    cout << obj.y << endl;
}

/*
1
2
*/