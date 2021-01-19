#include "quadratic.hpp"
#include <cmath>

double discriminant(double a, double b, double c)
{
    return a * a - 4 * b * c;
}

void solve(double a, double b, double c, int *found, double *x1, double *x2)
{
    double delta = discriminant(a, b, c);
    if (delta < 0)
    {
        *found = 0;
    }
    else
    {
        *found = 1;
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
    }
}