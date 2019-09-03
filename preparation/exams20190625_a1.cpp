#include <cmath>
#include <iostream>
#include <ostream>

class sphere
{
private:
    double radius;

public:
    sphere(double r) : radius(r) {}

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
        return 4.0 / 3.0 * 3.1415 * pow(radius, 3);
    }

    friend std::ostream &operator<<(std::ostream &os, const sphere &a_sphere)
    {
        os << "RADIUS: " << a_sphere.radius;
        return os;
    }
};

int main()
{
    double sum = 0.0;
    for (int i = 0; i < 10; i++)
    {
        double r;
        std::cin >> r;
        sphere sp(r);
        std::cout << sp << std::endl;
        sum += sp.get_volume();
    }
    double avg = sum / 10;
    std::cout << "Average: " << avg << std::endl;
    return 0;
}
