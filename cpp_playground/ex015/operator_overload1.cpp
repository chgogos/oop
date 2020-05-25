#include <iostream>

class Complex{
    public:
        Complex() = default;
        Complex(int re, int im) : re(re), im(im) {}
        double re;
        double im;

        void print(){
            if (im >=0)
                std::cout << re << " + " << im << " j " << std::endl;
            else
                std::cout << re << " - " << -im << " j " << std::endl;
        }
};

// υπερφόρτωση τελεστή + χρησιμοποιώντας καθολική συνάρτηση
Complex operator+(const Complex &x, const Complex &y){
    Complex c;
    c.re = x.re + y.re;
    c.im = x.im + y.im;
    return c;
}

int main(){
    Complex c1(2,-13), c2(3,4);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}

/*
5 - 9 j 
*/