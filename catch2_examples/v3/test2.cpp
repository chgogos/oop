// WIP 
// αν το catch2 έχει εγκατασταθεί με package manager (brew για OSX, apt για Ubuntu Linux κλπ)
// g++ test2.cpp `pkg-config --cflags --libs catch2` 
// MacOS (https://github.com/Homebrew/homebrew-core/issues/145991)
// g++ test2.cpp `pkg-config --cflags --libs catch2` -Wl,-ld_classic

#include <catch2/catch_test_macros.hpp>

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}