class Rectangle
{
  private:
    int width;
    int height;

  public:
    Rectangle(int w, int h) : width(w), height(h) {}

    int perimeter()
    {
        return 2 * (width + height);
    }

    int area()
    {
        return width * height;
    }
};
