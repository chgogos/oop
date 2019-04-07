#define CATCH_CONFIG_MAIN
#include "../catch2/catch.hpp"

std::string convert_arabic_to_roman(const unsigned int x){
    if (x==10){
        return "X";
    } 
    std::string roman;
    for(int i=0;i<x;i++){
        roman += "I";
    }
    return roman;
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

TEST_CASE("10 is converted to X", "[ArabicToRoman]")
{
    REQUIRE("X" == convert_arabic_to_roman(10));
}
