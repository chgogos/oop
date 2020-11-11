#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include <iostream>

using namespace std;

double fun()
{
    return 0.99999999;
}

// unit tests για τη συνάρτηση rectangle_area
TEST_CASE()
{
    REQUIRE(fun() == Approx(1.0));
}