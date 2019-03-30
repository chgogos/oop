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

// η απόφαση του να κληρονομεί η κλάση Square από την κλάση Rectangle 
// θα εξελιχθεί σε πρόβλημα
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
    void set_side(const int &l)
    {
        set_sides(l, l);
    }
    virtual void draw() override
    {
        std::cout << "Draw the square" << std::endl;
    }
};

int main()
{
    Shape *shapes[] = {new Rectangle(), new Circle(), new Square()};

    for (auto &shape : shapes)
    {
        shape->draw();
    }

    Rectangle* a_square = new Square();
    
    // πρόβλημα 1: σε ένα τετράγωνο δεν θα πρέπει να μπορούν να οριστούν διαφορετικές τιμές για τις πλευρές του
    a_square->set_sides(5, 10); // παραβίαση της αρχής Liskov substitution
    
    // πρόβλημα 2: δεν μπορεί να κληθεί η συνάρτηση set_side καθώς ο δείκτης είναι προς Rectangle
    // a_square->set_side(5); // error: set_side() is not visible 
    // με τη χρήση dynamic_cast το πρόβλημα 2 επιλύεται με "άκομψο" τρόπο
    (dynamic_cast<Square*>(a_square))->set_side(5);

    delete a_square;
    return 0;
}
