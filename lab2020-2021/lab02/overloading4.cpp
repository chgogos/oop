// Υπερφόρτωση του τελεστή == για τα αντικείμενα point (2ος τρόπος)

#include <iostream>
#include <utility> // std::rel_ops

using namespace std;
using namespace std::rel_ops; // εφόσον οριστεί ο τελεστής ==, ορίζει αυτόματα τον τελεστή !=

class point
{
    int _x, _y;

public:
    point(int x, int y) : _x(x), _y(y) {}

    int x() const { return _x; }
    int y() const { return _y; }
};

// υπερφόρτωση του τελεστή == έξω από την κλάση
bool operator==(const point &p1, const point &p2)
{
    // δεν επιτρέπεται πρόσβαση στα ιδιωτικά μέλη _x, _y
    // συνεπώς η πρόσβαση σε αυτά πρέπει να γίνει μέσω των
    // getters (ή να δηλωθεί ως φίλη της κλάσης point)
    return p1.x() == p2.x() && p1.y() == p2.y();
}

int main()
{
    point p1(5, 7);
    point p2(5, 7);
    if (p1 == p2)
    {
        cout << "EQUAL" << endl;
    }

    point p3(6, 7);
    if (p1 != p3)
    {
        cout << "NOT EQUAL" << endl;
    }
}

/* έξοδος
EQUAL
NOT EQUAL
*/