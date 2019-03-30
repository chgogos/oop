#include <iostream>

class Point
{
private:
  int x;
  int y;

public:
  Point(int ix = 0, int iy = 0) : x(ix), y(iy) {}
  void set_values(int x, int y)
  {
    this->x = x;
    this->y = y;
  }
};

class Shape
{
private:
  Point center_point;

protected:
  bool is_visible;

public:
  Shape() : is_visible(false) {}
  virtual ~Shape() {}
  void move_to(const Point &new_center_point)
  {
    center_point = new_center_point;
  }
  virtual void show() = 0;

  virtual void hide() = 0;
};

class Rectangle : public Shape
{
private:
  int width;
  int height;

public:
  Rectangle(int w = 5, int h = 5) : width(w), height(h) {}
  void set_sides(const int &w, const int &h)
  {
    width = w;
    height = h;
  }
  virtual void show() override
  {
    is_visible = true;
    std::cout << "Draw the rectangle" << std::endl;
  }
  virtual void hide() override
  {
    is_visible = false;
    std::cout << "Hide the rectangle" << std::endl;
  }
  int get_area() const
  {
    return width * height;
  }
};

class Circle : public Shape
{
private:
  int radius;

public:
  Circle(int r = 5) : radius(r) {}
  void set_radius(const int &r)
  {
    radius = r;
  }
  virtual void show() override
  {
    is_visible = true;
    std::cout << "Draw the circle" << std::endl;
  }
  virtual void hide() override
  {
    is_visible = false;
    std::cout << "Hide the circle" << std::endl;
  }
  int get_area() const
  {
    return 3.14 * radius * radius;
  }
};

class Square : public Rectangle
{
public:
  Square()
  {
    set_sides(5, 5);
  }
  Square(int l)
  {
    set_sides(l, l);
  }
  void set_side(int &l)
  {
    set_sides(l, l);
  }
};
