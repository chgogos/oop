#include <iostream>
#include <cmath>

class Complex{
    private:
        double re_, im_;
    public:
        Complex(double re=0.0, double im=0.0): re_(re), im_(im) {
            std::cout << "Constructor Complex(double, double) called for (" << re_ << "," << im_ << ")" << std::endl;
        }
        ~Complex(){
            std::cout << "Destructor ~Complex() called for (" << re_ << "," << im_ << ")" << std::endl;
        }
        double norm(){
            return sqrt(re_*re_ + im_*im_);
        }
        void print(){
            std::cout << "|" << re_ << "+j" <<im_ << "| = "<< norm() << std::endl; 
        }
};

int main(){
    Complex c1;
    c1.print();
    Complex c2(2.0, 3.0);
    c2.print();
    Complex *c3 = new Complex(3.0,4.0);
    c3->print();
    delete c3;
}

/*
Constructor Complex(double, double) called for (0,0)
|0+j0| = 0
Constructor Complex(double, double) called for (2,3)
|2+j3| = 3.60555
Constructor Complex(double, double) called for (3,4)
|3+j4| = 5
Destructor ~Complex() called for (3,4)
Destructor ~Complex() called for (2,3)
Destructor ~Complex() called for (0,0)
*/