#pragma once

class Rectangle
{
public:
  double width;
  double height;
  double area() const;
  void scale(const double &);
  void print_info() const;
};