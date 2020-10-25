#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Complex.hpp"
#include <complex>

TEST_CASE("operators", "addition")
{
    Complex c1(1, 2), c2(3, 4), r;
    r = c1 + c2;
    REQUIRE(r.real() == 4);
    REQUIRE(r.imag() == 6);
    
    // assertions using std::complex<double> as the ground truth
    std::complex<double> co1(1,2), co2(3,4), re;
    re = co1 + co2;
    REQUIRE(r.real() == re.real());
    REQUIRE(r.imag() == re.imag());
}