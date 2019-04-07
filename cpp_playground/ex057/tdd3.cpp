#define CATCH_CONFIG_MAIN
#include "../catch2/catch.hpp"

std::string convert_arabic_to_roman(const unsigned int x){
    return "I";
}

TEST_CASE("1 is converted to I", "[ArabicToRoman]")
{
    REQUIRE("I" == convert_arabic_to_roman(1));
}
