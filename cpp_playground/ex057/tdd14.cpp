#define CATCH_CONFIG_MAIN
#include "../catch2/catch.hpp"
#include "arabic_to_roman.hpp"

TEST_CASE("Arabic To Roman")
{
    SECTION("I to III")
    {
        REQUIRE("I" == convert_arabic_to_roman(1));
        REQUIRE("II" == convert_arabic_to_roman(2));
        REQUIRE("III" == convert_arabic_to_roman(3));
    }
    SECTION("X, XX and XXX")
    {
        REQUIRE("X" == convert_arabic_to_roman(10));
        REQUIRE("XX" == convert_arabic_to_roman(20));
        REQUIRE("XXX" == convert_arabic_to_roman(30));
    }
    SECTION("C, CC and CCC")
    {
        REQUIRE("C" == convert_arabic_to_roman(100));
        REQUIRE("CC" == convert_arabic_to_roman(200));
        REQUIRE("CCC" == convert_arabic_to_roman(300));
    }
    SECTION("M, MM and MMM")
    {
        REQUIRE("M" == convert_arabic_to_roman(1000));
        REQUIRE("MM" == convert_arabic_to_roman(2000));
        REQUIRE("MMM" == convert_arabic_to_roman(3000));
    }
    SECTION("D, MD and MDC")
    {
        REQUIRE("D" == convert_arabic_to_roman(500));
        REQUIRE("MD" == convert_arabic_to_roman(1500));
        REQUIRE("MDC" == convert_arabic_to_roman(1600));
    }
    SECTION("L, CL and CLI")
    {
        REQUIRE("L" == convert_arabic_to_roman(50));
        REQUIRE("CL" == convert_arabic_to_roman(150));
        REQUIRE("CLI" == convert_arabic_to_roman(151));
    }
    SECTION("V, VI and VII")
    {
        REQUIRE("V" == convert_arabic_to_roman(5));
        REQUIRE("VI" == convert_arabic_to_roman(6));
        REQUIRE("VII" == convert_arabic_to_roman(7));
    }
    SECTION("IV, IX, XL, XC, CD, CM")
    {
        REQUIRE("IV" == convert_arabic_to_roman(4));
        REQUIRE("IX" == convert_arabic_to_roman(9));
        REQUIRE("XL" == convert_arabic_to_roman(40));
        REQUIRE("XC" == convert_arabic_to_roman(90));
        REQUIRE("CD" == convert_arabic_to_roman(400));
        REQUIRE("CM" == convert_arabic_to_roman(900));
    }
    SECTION("intermediate numbers")
    {
        REQUIRE("XXXIII" == convert_arabic_to_roman(33));
        REQUIRE("MMMCCCXXXIII" == convert_arabic_to_roman(3333));
    }
}
