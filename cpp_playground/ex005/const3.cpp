#include <iostream>

int main()
{
    int x = 5;
    int y = 10;
    // const int *p1; // δείκτης προς σταθερά δεδομένα
    int const *p1; // δείκτης προς σταθερά δεδομένα

    p1 = &x;
    std::cout << *p1 << std::endl;
    // καθώς το p1 είναι δείκτης προς const data δεν μπορούμε να αλλαξουμε τα περιεχόμενα
    // της θέσης στην οποία δείχνει μέσω του δείκτη
    // (*p1)++; // error: read-only variable is not assignable
    p1 = &y;
    std::cout << *p1 << std::endl;

    int *const p2 = &x; // σταθερός δείκτης προς δεδομένα
    std::cout << *p2 << std::endl;
    (*p2)++;
    // p2=&y; // error: cannot assign to variable 'p2' with const-qualified type 'int *const'
    std::cout << *p2 << std::endl;

    const int *const p3 = &x; // σταθερός δείκτης προς σταθερά δεδομένα
    // int const * const p3 = &x; // εναλλακτικά η δήλωση const τοποθετείται μετά τον τύπο
    std::cout << *p3 << std::endl;
    // (*p3)++; // error: read-only variable is not assignable
    // p3=&y; // error: cannot assign to variable 'p3' with const-qualified type 'const int *const'

    return 0;
}

/*
5
10
5
6
6
*/