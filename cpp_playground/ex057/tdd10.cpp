#define CATCH_CONFIG_MAIN
#include "../catch2/catch.hpp"

std::string convert_arabic_to_roman(unsigned int x)
{
    std::string roman;
    while (x >= 1000)
    {
        roman += "M";
        x -= 1000;
    }
    if (x >= 500)
    {
        roman += "D";
        x -= 500;
    }
    while (x >= 100)
    {
        roman += "C";
        x -= 100;
    }
    while (x >= 10)
    {
        roman += "X";
        x -= 10;
    }
    for (int i = 0; i < x; i++)
    {
        roman += "I";
    }
    return roman;
}

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
    SECTION("intermediate numbers")
    {
        REQUIRE("XXXIII" == convert_arabic_to_roman(33));
    }
}
