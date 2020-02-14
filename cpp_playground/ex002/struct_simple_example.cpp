#include <iostream>

struct Rectangle
{
    double width;
    double height;
};

double area(const Rectangle &r)
{
    return r.width * r.height;
}

void scale(Rectangle &r, const double &factor)
{
    r.width *= factor;
}

void print_info(const Rectangle &r)
{
    std::cout << "Rectangle " << &r << " width=" << r.width << " height= " << r.height << " area=" << area(r) << std::endl;
}

int main()
{
    Rectangle r1; // possibly unitialized member variables
    print_info(r1);
    r1.width = 2;
    r1.height = 3;
    print_info(r1);
    scale(r1, 2.0);
    print_info(r1);

    Rectangle r2{}; // initialize member variables to default values
    print_info(r2);

    Rectangle r3{4, 5};
    print_info(r3);

    Rectangle r4 = {5, 6};
    print_info(r4);

    Rectangle *pr1 = new Rectangle;
    pr1->width = 6;
    pr1->height = 6;
    print_info(*pr1);
    delete pr1;

    Rectangle *pr2 = new Rectangle(r1); // copy constructor
    print_info(*pr2);
    delete pr2;

    Rectangle &rr1 = r1; // reference
    rr1.width++;
    print_info(rr1);
    print_info(r1);

}
