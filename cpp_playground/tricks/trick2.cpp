#include <iostream>

// κλήση συναρτήσεων που ορίζονται σε μια κλάση χωρίς να δημιουργηθούν στιγμιότυπα
class A
{
  public:
    int x;
    void func1()
    {
        std::cout << "member function: func1 is executing" << std::endl;
    }
    static void func2()
    {
        std::cout << "static member function: func2 is executing" << std::endl;
    }
};

int main()
{
    A *a = nullptr;
    a->func1(); // η συνάρτηση εκτελείται κανονικά
    a->func2(); // η στατική συνάρτηση εκτελείται κανονικά
    A::func2(); // η στατική συνάρτηση εκτελείται κανονικά
    // std::cout << a->x << std::endl; // segmentation fault
    return 0;
}

/*
member function: func1 is executing
static member function: func2 is executing
static member function: func2 is executing
*/