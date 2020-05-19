#include <iostream>
#include <string>

using namespace std;

// abstract base class
class shape
{
protected:
    double red = 1.0, green = 1.0, blue = 1.0;

public:
    virtual ~shape() {}
    virtual void draw() = 0;
    void set_color(double r, double g, double b);
};

class rectangle : public shape
{
private:
    double top_left_x, top_left_y, bottom_right_x, bottom_right_y;
    double top_right_x, top_right_y, bottom_left_x, bottom_left_y;

public:
    rectangle(double tlx, double tly, double brx, double bry);
    void draw();
};

class triangle : public shape
{
private:
    double corner_a_x, corner_a_y, corner_b_x, corner_b_y, corner_c_x, corner_c_y;

public:
    triangle(double ax, double ay, double bx, double by, double cx, double cy);
    void draw();
};

class circle : public shape
{
private:
    double center_x, center_y;
    double radius;

public:
    circle(double cx, double cy, double r);
    void draw();
};
