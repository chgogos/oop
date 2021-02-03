#include <iostream>

using namespace std;

int fun1()
{
    cout << __PRETTY_FUNCTION__ << endl;
    // cout << __FUNCSIG__ << endl; // Visual Studio
    return 42;
}

void fun2(int x)
{
    cout << __PRETTY_FUNCTION__ << endl;
}

// accepts only l-value
void fun3(int &x)
{
    cout << __PRETTY_FUNCTION__ << endl;
}

// accepts l-value and r-value 
void fun4(const int &x)
{
    cout << __PRETTY_FUNCTION__ << endl;
}

// 3 overloads of fun5()
void fun5(int &x)
{
    cout << __PRETTY_FUNCTION__ << endl;
}

void fun5(const int &x)
{
    cout << __PRETTY_FUNCTION__ << endl;
}

void fun5(int &&x)
{
    cout << __PRETTY_FUNCTION__ << endl;
}


// returns an l-value reference
int& fun6(){
    cout << __PRETTY_FUNCTION__ << endl;
    static int x=10;
    return x;
}

int main()
{
    int a = 10;
    const int b = 10;
    a = 5 + 5; // ok
    // 10 = a; // error: lvalue required as left operand of assignment
    // 5 + 5 = a; // error: lvalue required as left operand of assignment

    a = fun1(); // ok
    // fun1()=a; // error: lvalue required as left operand of assignment

    fun2(a);  // ok
    fun2(10); // ok
    fun2(10); // ok

    fun3(a); // ok
    // fun3(5); // error: cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
    // fun3(5+5); //  error: cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'

    fun4(a);     // ok
    fun4(b);     // ok
    fun4(10);     // ok
    fun4(5 + 5); // ok

    fun5(a); // ok
    fun5(b); // ok
    fun5(10); // ok
    fun5(5 + 5); // ok

    // fun1()=10; // // error: cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
    fun6()=10; //ok
}
