#include <iostream>
#include <sstream>

class Point
{
    int x;
    int y;

  public:
    Point(int x = 0, int y = 0) : x(x), y(y){};
    void move(int dx, int dy)
    {
        x += dx;
        y += dy;
    }

    friend std::ostream &operator<<(std::ostream &os, const Point &p);
};

std::ostream &operator<<(std::ostream &os, const Point &p)
{
    os << "(" << p.x << "," << p.y << ")";
    return os;
}

int main()
{
    // αντικείμενο στο stack
    Point p1;
    p1.move(3, 3);
    std::cout << "1. " << p1 << std::endl;

    // αντικείμενο στο heap
    Point *p2 = new Point(4, 4);
    p2->move(2, 1);
    std::cout << "2. " << *p2 << std::endl;
    delete p2;

    // πίνακας αντικειμένων στο stack
    Point t1[4];
    for (int i = 0; i < 4; i++){
        std::cout << "3. " << t1[i] << std::endl;
    }
    
    // δείκτης που δείχνει σε πίνακα αντικειμένων που βρίσκονται στο heap
    // τα στοιχεία του πίνακα βρίσκονται σε συνεχόμενες θέσεις μνήμης
    Point *t2 = new Point[4];
    for (int i = 0; i < 4; i++){
        std::cout << "4. " << t2[i] << std::endl;
    }
    delete[] t2;

    // δείκτης που δείχνει σε πίνακα δεικτών που βρίσκεται στο heap
    // κάθε στοιχείο του πίνακα δείχνει προς ένα αντικείμενο Point
    Point **t3 = new Point *[4];
    for (int i = 0; i < 4; i++)
    {
        t3[i] = new Point();
    }
    for (int i = 0; i < 4; i++)
    {
        std::cout << "5. " << *t3[i] << std::endl;
    }
    for (int i = 0; i < 4; i++)
    {
        delete t3[i];
    }
    delete[] t3;

    return 0;
}
