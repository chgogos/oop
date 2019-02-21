#include <iostream>

constexpr double PI = 3.14159265358979323846;

class Circle{
    private: 
        double radius;
    public:
        Circle() : radius(10.0) {}
        Circle(double radius): radius(radius) {}
        double get_area() const {
            return PI * radius * radius;
        }
};

int main(){
    Circle c1;
    std::cout << c1.get_area() << std::endl;
    Circle c2(2.5);
    std::cout << c2.get_area() << std::endl;
    Circle c3{3.5};
    std::cout << c3.get_area() << std::endl;
    const Circle c4{4.5}; 
    std::cout << c4.get_area() << std::endl; // since c4 is const, in order to call get_area(), get_area() should be const also
    return 0;
}