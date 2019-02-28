#define CATCH_CONFIG_MAIN
#include "../catch2/catch.hpp"
#include "Rectangle.hpp"

TEST_CASE("Test area", "[classic]")
{
    Rectangle r1(4, 5);
    REQUIRE(r1.area() == 20);

    Rectangle r2(0, 5);
    REQUIRE(r2.area() == 0);
}

TEST_CASE("Test perimeter", "[classic]")
{
    Rectangle r1(4, 5);
    REQUIRE(r1.perimeter() == 18);

    Rectangle r2(0, 5);
    REQUIRE(r2.perimeter() == 0);
}
