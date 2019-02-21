#include "Rectangle.h"

int main(){
    Rectangle r1;   // possibly unitialized member variables
    r1.print_info(); 
    r1.width=2;
    r1.height=3;
    r1.print_info();

    Rectangle r2{}; // initialize member variables to default values
    r2.print_info();

    Rectangle r3{4,5}; 
    r3.print_info();

    Rectangle r4={5,6};
    r4.print_info();

    Rectangle *pr1= new Rectangle();
    pr1->width=6;
    pr1->height=6;
    pr1->print_info();

    Rectangle *pr2= new Rectangle(r1); // copy constructor
    pr2->print_info();

    Rectangle &rr1 = r1; // reference
    rr1.width++;
    rr1.print_info();
    r1.print_info();

    delete pr1;
    delete pr2;
}
