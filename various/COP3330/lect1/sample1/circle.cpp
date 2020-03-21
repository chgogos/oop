#include "circle.hpp"

// υλοποιήσεις συναρτήσεων μελών
void Circle::SetRadius(double r)
{
    radius = r;
}
double Circle::AreaOf()
{
    return (3.14 * radius * radius);
}
