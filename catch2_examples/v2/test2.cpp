#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include <iostream>

using namespace std;

double rectangle_area(double width, double height)
{
    if (width >= 0.0 && height >= 0.0)
        return width * height;
    else
        return 0.0;
}

// unit tests για τη συνάρτηση rectangle_area
TEST_CASE("trigonometry", "rectangle")
{
    REQUIRE(rectangle_area(10.0, 10.0) == 100.0);
    REQUIRE(rectangle_area(10.0, -1.0) == 0.0);
}