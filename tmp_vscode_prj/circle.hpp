#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
public:
    Circle(double radius);
    double getRadius() const;
    double getArea() const;
    double getCircumference() const;
private:
    double radius;
};

#endif // CIRCLE_H
