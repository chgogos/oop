// auto vs auto&

#include <iostream>

class foo
{
    int x_;

public:
    foo(int const x = 0) : x_{x} {}
    int &get() { return x_; }
};

int main()
{
    foo f(42);
    auto& x = f.get(); 
    x = 100; // χρειάζεται να δηλωθεί auto& έτσι ώστε η αλλαγή να περνά στο αντικείμενο
    std::cout << f.get() << '\n';
}

/*
100
*/
