#include "Rectangle.h"

int main()
{
    Rectangle r1; // possibly unitialized member variables
    r1.print_info();
    r1.width = 2;
    r1.height = 3;
    r1.print_info();

    Rectangle r2{}; // initialize member variables to default values
    r2.print_info();

    Rectangle r3{4, 5};
    r3.print_info();

    Rectangle r4 = {5, 6};
    r4.print_info();

    Rectangle *pr1 = new Rectangle();
    pr1->width = 6;
    pr1->height = 6;
    pr1->print_info();

    Rectangle *pr2 = new Rectangle(r1); // copy constructor
    pr2->print_info();

    Rectangle &rr1 = r1; // reference
    rr1.width++;
    rr1.print_info();
    r1.print_info();

    delete pr1;
    delete pr2;
}


/*
Rectangle 0x70fe20 width=0 height= 2.07544e-317 area=0
Rectangle 0x70fe20 width=2 height= 3 area=6
Rectangle 0x70fe10 width=0 height= 0 area=0
Rectangle 0x70fe00 width=4 height= 5 area=20
Rectangle 0x70fdf0 width=5 height= 6 area=30
Rectangle 0x1a2410 width=6 height= 6 area=36
Rectangle 0x1a2430 width=2 height= 3 area=6
Rectangle 0x70fe20 width=3 height= 3 area=9
Rectangle 0x70fe20 width=3 height= 3 area=9
*/