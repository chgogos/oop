#include <iostream>

class Vector2D {
private:
    double x, y;

public:
    // Κατασκευαστής
    Vector2D(double _x = 0, double _y = 0) : x(_x), y(_y) {}

    // Υπερφόρτωση του τελεστή +
    Vector2D operator+(const Vector2D& v) const {
        return Vector2D(x + v.x, y + v.y);
    }

    // Υπερφόρτωση του τελεστή <<
    friend std::ostream& operator<<(std::ostream& os, const Vector2D& v) {
        os << "(" << v.x << ", " << v.y << ")";
        return os;
    }
};

int main() {
    Vector2D v1(2.5, 3.5);
    Vector2D v2(1.5, 4.0);

    Vector2D v3 = v1 + v2;  // Πρόσθεση δύο διανυσμάτων

    std::cout << "v1: " << v1 << std::endl;
    std::cout << "v2: " << v2 << std::endl;
    std::cout << "v1 + v2 = " << v3 << std::endl;

    return 0;
}
