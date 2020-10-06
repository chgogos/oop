/**
 * Ζητείται η δημιουργία μιας δομής circle με τα πεδία center_x, center_y για τις συντεταγμένες 
 * του κέντρου του κύκλου και το πεδίο radius για την ακτίνα του κύκλου. 
 * Προσθέστε συναρτήσεις για τον υπολογισμό του εμβαδού και της περιμέτρου ενός κύκλου.
 * Προσθέστε μια συνάρτηση που να ελέγχει αν ένα σημείο βρίσκεται εντός ή εκτός ενός κύκλου.
 * Συμπληρώστε στη main κώδικα που να δημιουργεί εγγραφές και να καλεί τις ανωτέρω συναρτήσεις.
 **/

#include <iostream>

using namespace std;

struct circle
{
    double center_x, center_y;
    double radius;
};

double area(circle c){
    return 3.14 * c.radius * c.radius;
}

int main()
{
    circle c;
    c.center_x = 0.0;
    c.center_y = 0.0;
    c.radius = 10.0;

    double a = area(c);
    cout << "emvadon " << a << endl;
}