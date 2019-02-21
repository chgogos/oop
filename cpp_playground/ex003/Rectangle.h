#pragma once

class Rectangle
{
  public:
    double width;
    double height;
    double area();
    void scale(double);
    void print_info();
};