// Για τη δευτεροβάθμια εξίσωση: ax^2+bx+c=0 
// Γράψτε μια συνάρτηση που να υπολογίζει τη διακρίνουσα. 
// Γράψτε μια συνάρτηση που να επιστρέφει τις ρίζες της δευτεροβάθμιας εξίσωσης καθώς και μια τιμή (1 ή 0) που να υποδηλώνει το εάν υπάρχουν πραγματικές ρίζες ή όχι.

#include <iostream>
#include <cmath>

using namespace std;

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

int main()
{
    // 2x^2+4x-4=0
    double a = 2, b = 4, c = -4;
    double x1, x2;
    int exists;
    solve(a, b, c, &exists, &x1, &x2);
    if (exists)
    {
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    }
    else
    {
        cout << "No solutions found" << endl;
    }
}

/*
x1=1.06155
x2=-3.06155
*/