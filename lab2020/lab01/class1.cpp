/**
 * Ζητείται η δημιουργία μιας κλάσης circle με ιδιωτικά μέλη δεδομένων center_x, center_y για τις συντεταγμένες του κέντρου του κύκλου και το ιδιωτικό μέλος δεδομένων radius για την ακτίνα του κύκλου. 
 * Συμπληρώστε 2 constructors και τον destructor έτσι ώστε να εμφανίζονται μνηνύματα όταν δημιουργείται και όταν καταστρέφεται ένα αντικείμενο.
 * Προσθέστε συναρτήσεις μέλη για τον υπολογισμό του εμβαδού και της περιμέτρου του κύκλου.
 * Προσθέστε μια συνάρτηση μέλος που να ελέγχει αν ένα σημείο βρίσκεται εντός ή εκτός του κύκλου.
 * Συμπληρώστε στη main κώδικα που να δημιουργεί αντικείμενα και να καλεί τις ανωτέρω συναρτήσεις.
 **/

#include <iostream>

constexpr auto M_PI = 3.14159;

class circle
{
private:
    double center_x, center_y;
    double radius;

public:
    // 1ος constructor με λίστα αρχικοποίησης μελών (member initialization list)
    circle() : center_x(0.0), center_y(0.0), radius(1.0)
    {
        std::cout << "The circle at memory position " << this << " is created" << std::endl;
    }

    // 2ος constructor με λίστα αρχικοποίησης μελών (member initialization list)
    circle(double c_x, double c_y, double r) : center_x(c_x), center_y(c_y), radius(r)
    {
        std::cout << "The circle at memory position " << this << " is created" << std::endl;
    }

    ~circle()
    {
        std::cout << "The circle at memory position " << this << " is destroyed" << std::endl;
    }

    double area() const
    {
        return M_PI * radius * radius;
        // return M_PI * this->radius * this->radius; // εναλλακτικά
    }

    double perimeter() const
    {
        return 2 * M_PI * radius;
    }

    bool is_point_inside(double x, double y) const
    {
        double d = (x - center_x) * (x - center_x) + (y - center_y) * (y - center_y);
        return radius * radius >= d;
    }
};

int main()
{
    {
        // δημιουργία αντικειμένου circle - κλήση constructor χωρίς παραμέτρους - κλήση destructor όταν βγει out of scope
        circle a;
        // circle a(); // εναλλακτικά
        // circle a{}; // εναλλακτικά
    }

    circle c(0.0, 0.0, 10.0);

    // εναλλακτικοί τρόποι αρχικοποίησης
    // circle c={0.0, 0.0, 10.0}; // aggregate initialization
    // circle c{0.0, 0.0, 10.0}; // uniform initialization

    std::cout << "Area: " << c.area() << std::endl;
    std::cout << "Perimeter: " << c.perimeter() << std::endl;

    std::cout << (c.is_point_inside(0.0, 9.99) ? "YES" : "NO") << std::endl;
    std::cout << (c.is_point_inside(0.0, 10.01) ? "YES" : "NO") << std::endl;

    // δημιουργία αντικειμένου circle χωρίς να ανατεθεί σε μεταβλητή
    std::cout << (circle(7.2, 3.9, 16.2).is_point_inside(8.0, 19.01) ? "YES" : "NO") << std::endl;
    std::cout << (circle{7.2, 3.9, 16.2}.is_point_inside(8.0, 19.01) ? "YES" : "NO") << std::endl;
}

/* έξοδος
The circle at memory position 0x62fd90 is created
The circle at memory position 0x62fd90 is destroyed
The circle at memory position 0x62fdb0 is created
Area: 314.159
Perimeter: 62.8318
YES
NO
The circle at memory position 0x62fdd0 is created
YES
The circle at memory position 0x62fdd0 is destroyed
The circle at memory position 0x62fdf0 is created
YES
The circle at memory position 0x62fdf0 is destroyed
The circle at memory position 0x62fdb0 is destroyed
*/