#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include <iostream>

using namespace std;

double fun()
{
    return 0.99999999;
}

TEST_CASE()
{
    // REQUIRE(fun() == 1.0);
    REQUIRE(fun() == Approx(1.0));
}