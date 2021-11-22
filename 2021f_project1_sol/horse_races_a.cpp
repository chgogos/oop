#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "horse.hpp"
#include <iostream>

using namespace std;

TEST_CASE("horse", "move_forward")
{
    int startup_speed = 80;
    int power = 90;
    int stamina = 70;

    horse h(1, "Bolt", startup_speed, power, stamina);
    // test round 1
    REQUIRE(h.move_forward(1, 55.5) == true);
    REQUIRE(h.move_forward(1, 99.9) == false);

    // test round 2 - 8
    REQUIRE(h.move_forward(2, 55.5) == true);
    REQUIRE(h.move_forward(2, 99.9) == false);

    // test round > 8
    REQUIRE(h.move_forward(9, 55.5) == true);
    REQUIRE(h.move_forward(9, 99.9) == false);
}