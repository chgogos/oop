#include <iostream>

using namespace std;

class Sphere
{
private:
    double radius;

public:
    Sphere(double r) : radius(r) {}
    double get_radius()
    {
        return radius;
    }
    void set_radius(double r)
    {
        radius = r;
    }
    double get_volume()
    {
        return 4.0 / 3.0 * 3.14159 * radius * radius * radius;
    }
    friend ostream &operator<<(ostream &os, Sphere &s)
    {
        return os << "RADIUS=" << s.radius << " VOLUME=" << s.get_volume();
    }
};

int main()
{
    double sum = .0;
    for (int i = 0; i < 5; i++)
    {
        double r;
        cout << "Enter radius of sphere: ";
        cin >> r;
        Sphere s(r);
        cout << s << endl;
        sum += s.get_volume();
    }
    cout << sum / 5.0 << endl;
}

/*
Enter radius of sphere: 1
RADIUS=1 VOLUME=4.18879
Enter radius of sphere: 2
RADIUS=2 VOLUME=16.7551
Enter radius of sphere: 3
RADIUS=3 VOLUME=37.6991
Enter radius of sphere: 4
RADIUS=4 VOLUME=67.0206
Enter radius of sphere: 5
RADIUS=5 VOLUME=104.72
46.0767
*/