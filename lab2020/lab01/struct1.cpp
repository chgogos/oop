/**
 * Ζητείται η δημιουργία μιας δομής circle με τα πεδία center_x, center_y για τις συντεταγμένες του κέντρου του κύκλου και το πεδίο radius για την ακτίνα του κύκλου. 
 * Προσθέστε συναρτήσεις για τον υπολογισμό του εμβαδού και της περιμέτρου ενός κύκλου.
 * Προσθέστε μια συνάρτηση που να ελέγχει αν ένα σημείο βρίσκεται εντός ή εκτός ενός κύκλου.
 * Συμπληρώστε στη main κώδικα που να δημιουργεί εγγραφές και να καλεί τις ανωτέρω συναρτήσεις.
 **/

#include <iostream>

constexpr auto M_PI = 3.14159;

struct circle
{
    double center_x, center_y;
    double radius;
};

// εναλλακτική δήλωση struct
// typedef struct {
//     double center_x, center_y;
//     double radius;
// } circle;

double area(const circle &c)
{
    return M_PI * c.radius * c.radius;
}

double perimeter(const circle &c)
{
    return 2 * M_PI * c.radius;
}

bool is_point_inside(const circle &c, double x, double y)
{
    double d = (x - c.center_x) * (x - c.center_x) + (y - c.center_y) * (y - c.center_y);
    return c.radius * c.radius >= d;
}

int main()
{
    circle c;
    c.center_x = 0.0;
    c.center_y = 0.0;
    c.radius = 10.0;

    // εναλλακτικοί τρόποι αρχικοποίησης
    // circle c={0.0, 0.0, 10.0}; // aggregate initialization
    // circle c{0.0, 0.0, 10.0}; // uniform initialization

    std::cout << "Area: " << area(c) << std::endl;
    std::cout << "Perimeter: " << perimeter(c) << std::endl;
    std::cout << (is_point_inside(c, 0.0,9.99)?"YES":"NO") << std::endl;
    std::cout << (is_point_inside(c, 0.0,10.01)?"YES":"NO") << std::endl;
    // δημιουργία εγγραφής τύπου circle χωρίς να ανατεθεί σε μεταβλητή
    std::cout << (is_point_inside(circle{7.2,3.9,16.2}, 8.0,19.01)?"YES":"NO") << std::endl;
}