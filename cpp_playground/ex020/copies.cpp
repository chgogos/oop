#include <iostream>

class Point
{
  public:
    int x_;
    int y_;
    // κατασκευαστής με προκαθορισμένες παραμέτρους
    Point(int x = 0, int y = 0) : x_(x), y_(y)
    {
        std::cout << "Point constructor called" << std::endl;
    }
    // κατασκευαστής αντιγραφής
    Point(const Point &p) : x_(p.x_), y_(p.y_)
    {
        std::cout << "Point copy constructor called" << std::endl;
    }
};

// πραγματοποιούνται 2 αντιγραφές
Point move1(Point a_point, int to_x, int to_y)
{
    std::cout << &a_point << std::endl;
    a_point.x_ += to_x;
    a_point.y_ += to_y;
    return a_point;
}

// πραγματοποιείται 1 αντιγραφή
Point move2(Point &a_point, int to_x, int to_y)
{
    std::cout << &a_point << std::endl;
    a_point.x_ += to_x;
    a_point.y_ += to_y;
    return a_point;
}

// δεν πραγματοποιείται καμμία αντιγραφή
Point &move3(Point &a_point, int to_x, int to_y)
{
    std::cout << &a_point << std::endl;
    a_point.x_ += to_x;
    a_point.y_ += to_y;
    return a_point;
}

int main()
{
    Point p1;
    std::cout << "move1" << std::endl;
    std::cout << &p1 << std::endl;
    Point p2 = move1(p1, 1, 1);
    std::cout << &p2 << std::endl;

    std::cout << "move2" << std::endl;
    std::cout << &p1 << std::endl;
    Point p3 = move2(p1, 1, 1);
    std::cout << &p2 << std::endl;

    std::cout << "move3" << std::endl;
    std::cout << &p1 << std::endl;
    Point &p4 = move3(p1, 1, 1);
    std::cout << &p4 << std::endl;
}
