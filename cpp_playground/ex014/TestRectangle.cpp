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


/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
a.out is a Catch v2.6.1 host application.
Run with -? for options

-------------------------------------------------------------------------------
Test perimeter
-------------------------------------------------------------------------------
TestRectangle.cpp:14
...............................................................................

TestRectangle.cpp:20: FAILED:
  REQUIRE( r2.perimeter() == 0 )
with expansion:
  10 == 0

===============================================================================
test cases: 2 | 1 passed | 1 failed
assertions: 4 | 3 passed | 1 failed
*/