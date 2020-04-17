#include <iostream>

using namespace std;

class Rectangle
{
public:
    Rectangle();
    int GetSideCount();

protected:
    int length, height;

private:
    int side_count;
};

Rectangle::Rectangle() : side_count(4) {}

int Rectangle::GetSideCount()
{
    return this->side_count;
}

class Square : public Rectangle
{
public:
    Square(int);
};

Square::Square(int s)
{
    length = height = s;
    cout << "A square has " << this->GetSideCount() << " sides.\n";
    // side_count = 2;
    //  this->side_count = 2;
}

int main()
{
    Square S(5);

    return 0;
}

/*
A square has 4 sides.
*/