#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "fizzbuzz.hpp"

TEST_CASE("Test FizzBuzz for numbers")
{
    REQUIRE(fizzBuzz(1) == "1");
    REQUIRE(fizzBuzz(11) == "11");
}

TEST_CASE("Test FizzBuzz for multiples of 3")
{
    REQUIRE(fizzBuzz(3) == "Fizz");
    REQUIRE(fizzBuzz(6) == "Fizz");
    REQUIRE(fizzBuzz(99) == "Fizz");
}

TEST_CASE("Test FizzBuzz for multiples of 5")
{
    REQUIRE(fizzBuzz(5) == "Buzz");
    REQUIRE(fizzBuzz(10) == "Buzz");
    REQUIRE(fizzBuzz(100) == "Buzz");
}

TEST_CASE("Test FizzBuzz for multiples of 3 and 5")
{
    REQUIRE(fizzBuzz(15) == "FizzBuzz");
    REQUIRE(fizzBuzz(30) == "FizzBuzz");
    REQUIRE(fizzBuzz(150) == "FizzBuzz");
}
