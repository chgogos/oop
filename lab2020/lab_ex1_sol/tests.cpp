#define CATCH_CONFIG_MAIN
#include "../catch.hpp"

#include "cargo.hpp"

TEST_CASE("cargo", "make_safe")
{
    cargo c(1, "Patras", 100, false);
    REQUIRE(c.get_weight() == 100);
    c.make_safe();
    REQUIRE(c.get_weight() == 105);
}
