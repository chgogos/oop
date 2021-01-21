// Για τη δευτεροβάθμια εξίσωση: ax^2+bx+c=0 
// Γράψτε μια συνάρτηση που να υπολογίζει τη διακρίνουσα. 
// Γράψτε μια συνάρτηση που να επιστρέφει τις ρίζες της δευτεροβάθμιας εξίσωσης καθώς και μια τιμή (1 ή 0) που να υποδηλώνει το εάν υπάρχουν πραγματικές ρίζες ή όχι.

// Γράψτε ξεχωριστά header και source αρχεία (quadratic.hpp, quadratic.cpp) καθώς και ένα πρόγραμμα οδήγησης (quadratic_main.cpp). 
// Δώστε τις εντολές μεταγλώττισης και εκτέλεσης του προγράμματος.


#include <iostream>
#include "quadratic.hpp"

using namespace std;

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
$ g++ quadratic.cpp quadratic_main.cpp -o quadratic
$ quadratic.exe
x1=1.06155
x2=-3.06155
*/
