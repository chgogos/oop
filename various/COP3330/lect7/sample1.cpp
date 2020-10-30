#include <iostream>
using namespace std;

class small_class
{
public:
    small_class();
 
private:
    int data;
};

small_class::small_class()
{
    cout << "small_class default constructor called " << endl;
}

class large_class
{
public:
    large_class();

private:
    small_class sc;
};

large_class::large_class()
{
    cout << "large_class default constructor called " << endl;
}

int main()
{
    large_class obj;
}

/*
small_class default constructor called 
large_class default constructor called
*/