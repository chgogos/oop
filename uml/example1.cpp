#include <iostream>

using namespace std;

class Example
{
private:
    int x;
    void foo(int x)
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    }

protected:
    int y;
    int bar(int y, int z)
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
        return 0;
    }

public:
    Example()
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    }
};

int main()
{
    Example obj;
}

/*
25 Example::Example()
*/