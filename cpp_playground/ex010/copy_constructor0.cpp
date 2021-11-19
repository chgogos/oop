#include <iostream>

/**
 * 
 * Παρά το ότι δεν υπάρχει deep copy constructor κάθε αντικείμενο διατηρεί τα δικά του μέλη δεδομένων 
 * ακόμα και κατά τη δημιουργία με αντιγραφή ενός αντικειμένου λόγω του std::vector
 * 
 * */

class MyClass
{
private:
    int a;
    double b;
    int c[10];

public:
    MyClass() : a(0), b(0.0)
    {
        for (int i = 0; i < 10; i++)
            c[i] = -1;
        std::cout << "default constructor" << std::endl;
    }

    void modify(int i, int x)
    {
        c[i] = x;
    }

    void print()
    {
        std::cout << "a=" << a << std::endl;
        std::cout << "b=" << b << std::endl;
        std::cout << "c=[ ";
        for (int i = 0; i < 10; i++)
        {
            std::cout << c[i] << " ";
        }
        std::cout << "]" << std::endl;
    }
};

int main()
{
    MyClass obj1;        // default constructor
    MyClass obj2 = obj1; // copy constructor
    MyClass obj3(obj1);  // copy constructor
    MyClass obj4{obj1};  // copy constructor
    MyClass obj5;        // default constructor
    obj5 = obj1;         // copy assignment
    obj1.modify(0, 99);
    std::cout << "obj1" << std::endl;
    obj1.print();
    std::cout << "obj2" << std::endl;
    obj2.print();
    std::cout << "obj3" << std::endl;
    obj3.print();
    std::cout << "obj4" << std::endl;
    obj4.print();
    std::cout << "obj5" << std::endl;
    obj5.print();
    return 0;
}

/*
default constructor
default constructor
obj1
a=0
b=0
c=[ 99 -1 -1 -1 -1 -1 -1 -1 -1 -1 ]
obj2
a=0
b=0
c=[ -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 ]
obj3
a=0
b=0
c=[ -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 ]
obj4
a=0
b=0
c=[ -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 ]
obj5
a=0
b=0
c=[ -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 ]
*/