// $ g++ live_coding_20190315.cpp -std=c++11
// $ ./a.out
// ===============================================================================
// All tests passed (2 assertions in 1 test case)

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

class Rectangle
{
    int width;
    int height;

  public:
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }
    int perimeter()
    {
        return 2 * width + 2 * height;
    }
    int area()
    {
        if (width < 0 || height < 0)
            return 0;
        else
            return width * height;
    }
};

TEST_CASE("Test area", "[classic]")
{
    Rectangle r1(4, 5);
    REQUIRE(r1.area() == 20);

    Rectangle r2(4, -5);
    REQUIRE(r2.area() == 0);
}
