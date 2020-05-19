#include "shapes.hpp"
#include <GLFW/glfw3.h>
#include <cmath>

// shape

void shape::set_color(double r, double g, double b)
{
    red = r;
    green = g;
    blue = b;
}

// rectangle
rectangle::rectangle(double tlx, double tly, double brx, double bry)
    : top_left_x(tlx), top_left_y(tly), bottom_right_x(brx), bottom_right_y(bry)
{
    top_right_x = bottom_right_x;
    top_right_y = top_left_y;
    bottom_left_x = top_left_x,
    bottom_left_y = bottom_right_y;
}

void rectangle::draw()
{
    glColor3f(red, green, blue);
    glBegin(GL_POLYGON);
    glVertex2f(top_left_x, top_left_y);
    glVertex2f(top_right_x, top_right_y);
    glVertex2f(bottom_right_x, bottom_right_y);
    glVertex2f(bottom_left_x, bottom_left_y);
    glEnd();
}

// triangle
triangle::triangle(double ax, double ay, double bx, double by, double cx, double cy)
    : corner_a_x(ax), corner_a_y(ay), corner_b_x(bx), corner_b_y(by), corner_c_x(cx), corner_c_y(cy) {}

void triangle::draw()
{
    glColor3f(red, green, blue);
    glBegin(GL_TRIANGLES);
    glVertex2f(corner_a_x, corner_a_y);
    glVertex2f(corner_b_x, corner_b_y);
    glVertex2f(corner_c_x, corner_c_y);
    glEnd();
}

// circle
circle::circle(double cx, double cy, double r) : center_x(cx), center_y(cy), radius(r) {}

void circle::draw()
{
    glColor3f(red, green, blue);
    const float DEG2RAD = 3.14159 / 180;
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        float deg_in_rad = i * DEG2RAD;
        glVertex2f(center_x + cos(deg_in_rad) * radius, center_y + sin(deg_in_rad) * radius);
    }
    glEnd();
}