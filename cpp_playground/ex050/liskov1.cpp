#include <iostream>
#include <memory>
#include <vector>
#include "shapes.hpp"

using shape_shared_ptr = std::shared_ptr<Shape>;

int main()
{
    std::vector<shape_shared_ptr> shapes;
    shapes.push_back(std::make_shared<Rectangle>());
    shapes.push_back(std::make_shared<Circle>());
    for (auto &shape : shapes)
    {
        shape->show();
    }

    std::unique_ptr<Rectangle> a_square = std::make_unique<Square>();
    a_square->set_sides(5, 10); // παραβίαση της αρχής Liskov substitution
    // a_square->set_side(); // error: set_side() is not visible  

    return 0;
}
