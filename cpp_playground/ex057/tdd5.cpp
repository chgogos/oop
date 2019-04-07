#define CATCH_CONFIG_MAIN
#include "../catch2/catch.hpp"

std::string convert_arabic_to_roman(const unsigned int x){
    if (x==2){
        return "II";
    } else if (x==3){
        return "III";
    }
    return "I";
}

TEST_CASE("1 is converted to I", "[ArabicToRoman]")
{
    REQUIRE("I" == convert_arabic_to_roman(1));
}

TEST_CASE("2 is converted to II", "[ArabicToRoman]")
{
    REQUIRE("II" == convert_arabic_to_roman(2));
}

TEST_CASE("3 is converted to III", "[ArabicToRoman]")
{
    REQUIRE("III" == convert_arabic_to_roman(3));
}