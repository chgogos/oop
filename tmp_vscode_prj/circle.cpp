#include "circle.hpp"

#define _USE_MATH_DEFINES
#include <cmath>

Circle::Circle(double radius) : radius(radius) {}

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    return M_PI * pow(radius, 2);
}

double Circle::getCircumference() const {
    return 2 * M_PI * radius;
}

