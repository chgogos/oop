#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "dog.hpp"

TEST_CASE("dog", "eat")
{
    dog d{"Fido", "sleep"};
    d.eat();
    REQUIRE(d.get_status() == "happy");
}
