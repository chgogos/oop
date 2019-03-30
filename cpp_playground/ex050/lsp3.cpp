#include <iostream>
#include <memory>

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

public:
  Shape() {}
  virtual ~Shape() {}
  void move_to(const Point &new_center_point)
  {
    center_point = new_center_point;
  }
  virtual void draw() = 0;
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
  virtual void draw() override
  {
    std::cout << "Draw the rectangle" << std::endl;
  }
  double get_area() const
  {
    return static_cast<double>(width * height);
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
  virtual void draw() override
  {
    std::cout << "Draw the circle" << std::endl;
  }
  double get_area() const
  {
    return 3.14 * radius * radius;
  }
};

class Square : public Shape
{
private:
  Rectangle internal_rectangle;

public:
  Square()
  {
    internal_rectangle.set_sides(5, 5);
  }
  Square(int l)
  {
    internal_rectangle.set_sides(l, l);
  }
  void set_side(const int &l)
  {
    internal_rectangle.set_sides(l, l);
  }
  virtual void draw() override
  {
    std::cout << "Draw the square" << std::endl;
  }
  double get_area()
  {
    return internal_rectangle.get_area();
  }
};

int main()
{
  Shape *shapes[] = {new Rectangle(), new Circle(), new Square()};

  for (auto &shape : shapes)
  {
    shape->draw();
  }

  Square *a_square = new Square();
  a_square->set_side(5);
  delete a_square;
  
  return 0;
}
