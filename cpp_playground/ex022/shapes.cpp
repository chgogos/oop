#include <iostream>

// abstract base class
class Shape
{
  public:
    virtual ~Shape() {}
    virtual void draw() = 0; // pure virtual function
};

class Rectangle : public Shape
{
  public:
    void draw()
    {
        std::cout << "draw a rectangle" << std::endl;
    }
};

class Triangle : public Shape
{
  public:
    void draw()
    {
        std::cout << "draw a triangle" << std::endl;
    }
};

class Circle : public Shape
{
  public:
    void draw()
    {
        std::cout << "draw a circle" << std::endl;
    }
};

int main()
{
    Shape *a[] = {new Rectangle, new Triangle, new Circle};
    for (int i = 0; i < 3; i++)
        a[i]->draw();

    for (int i = 0; i < 3; i++)
        delete a[i];
}
