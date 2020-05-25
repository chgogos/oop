#include <iostream>

class Rectangle
{
public:
    double width;
    double height;

    double area() const
    {
        return width * height;
    }

    void scale(const double &factor)
    {
        width *= factor;
    }

    void print_info() const
    {
        std::cout << "Rectangle " << this << " width=" << width << " height= " << height << " area=" << area() << std::endl;
    }
};

int main()
{
    Rectangle r1; // possibly unitialized member variables
    r1.print_info();
    r1.width = 2;
    r1.height = 3;
    r1.print_info();
    r1.scale(2.0);
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
    delete pr1;

    Rectangle *pr2 = new Rectangle(r1); // copy constructor
    pr2->print_info();
    delete pr2;

    Rectangle &rr1 = r1; // reference
    rr1.width++;
    rr1.print_info();
    r1.print_info();
}


/*
Rectangle 0x62fdf0 width=3.95253e-323 height= 2.07493e-317 area=0
Rectangle 0x62fdf0 width=2 height= 3 area=6
Rectangle 0x62fdf0 width=4 height= 3 area=12
Rectangle 0x62fde0 width=0 height= 0 area=0
Rectangle 0x62fdd0 width=4 height= 5 area=20
Rectangle 0x62fdc0 width=5 height= 6 area=30
Rectangle 0xfb2780 width=6 height= 6 area=36
Rectangle 0xfb2780 width=4 height= 3 area=12
Rectangle 0x62fdf0 width=5 height= 3 area=15
Rectangle 0x62fdf0 width=5 height= 3 area=15
*/