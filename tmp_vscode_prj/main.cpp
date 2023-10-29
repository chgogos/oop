#include <iostream>
#include "circle.hpp"

int main() {
    Circle c1(5.0);
    Circle c2(2.5);

    Circle circles[] = {c1, c2};

    std::cout << "Circle 1:" << std::endl;
    std::cout << "Radius: " << c1.getRadius() << std::endl;
    std::cout << "Area: " << c1.getArea() << std::endl;
    std::cout << "Circumference: " << c1.getCircumference() << std::endl;

    std::cout << "Circle 2:" << std::endl;
    std::cout << "Radius: " << c2.getRadius() << std::endl;
    std::cout << "Area: " << c2.getArea() << std::endl;
    std::cout << "Circumference: " << c2.getCircumference() << std::endl;

    return 0;
}