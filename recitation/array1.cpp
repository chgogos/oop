// Μεταφέρετε τα στοιχεία ενός πίνακα 10 θέσεων ακεραίων σε ένα std::array. 
// Αλλάξτε τις τιμές κάθε θέσης του array έτσι ώστε να συσσωρεύουν το άθροισμα 
// από όλες τις προηγούμενες θέσεις. Εμφανίστε το περιεχόμενο του array.

#include <iostream>
#include <array>

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    array<int, 10> arr;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = a[i];
    }
    
    for (int i = 1; i < 10; i++)
    {
        arr[i] += arr[i-1];
    }

    for (int& x : arr)
    {
        cout << x << " ";
    }


}

/*
1 3 6 10 15 21 28 36 45 55 
*/