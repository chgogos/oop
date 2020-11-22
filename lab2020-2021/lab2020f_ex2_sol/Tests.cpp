#include "catch.hpp"
#include "Complex.hpp"
#include <complex>

TEST_CASE("conjugate", "conj")
{
    Complex c(1, 2);
    std::complex<double> co(1, 2);
    REQUIRE(c.conj().real() == std::conj(co).real());
    REQUIRE(c.conj().imag() == std::conj(co).imag());
}

TEST_CASE("magnitude", "abs")
{
    Complex c(1.7, 2.3);
    std::complex<double> co(1.7, 2.3);
    REQUIRE(c.abs()== Approx(std::abs(co)));
}

TEST_CASE("operator+", "addition")
{
    Complex c1(1, 2), c2(3, 4), r;
    r = c1 + c2;
    REQUIRE(r.real() == 4);
    REQUIRE(r.imag() == 6);

    // assertions using std::complex<double> as the ground truth
    std::complex<double> co1(1, 2), co2(3, 4), re;
    re = co1 + co2;
    REQUIRE(r.real() == re.real());
    REQUIRE(r.imag() == re.imag());
}

TEST_CASE("operator-", "subtraction")
{
    Complex c1(1, 2), c2(3, 4), r;
    r = c1 - c2;

    std::complex<double> co1(1, 2), co2(3, 4), re;
    re = co1 - co2;
    REQUIRE(r.real() == re.real());
    REQUIRE(r.imag() == re.imag());
}

TEST_CASE("operator*", "multiply")
{
    Complex c1(1.5, 2.3), c2(3.1, 4.2), r;
    r = c1 * c2;

    std::complex<double> co1(1.5, 2.3), co2(3.1, 4.2), re;
    re = co1 * co2;
    REQUIRE(r.real() == Approx(re.real()));
    REQUIRE(r.imag() == Approx(re.imag()));
}

TEST_CASE("operator/", "divide")
{
    Complex c1(1.5, 2.3), c2(3.1, 4.2), r;
    r = c1 / c2;

    std::complex<double> co1(1.5, 2.3), co2(3.1, 4.2), re;
    re = co1 / co2;
    REQUIRE(r.real() == Approx(re.real()));
    REQUIRE(r.imag() == Approx(re.imag()));
}

TEST_CASE("operator==", "equality")
{
    Complex c1(1.5, 2.3), c2(1.5, 2.3);
    REQUIRE(c1 == c2);
}

TEST_CASE("operator!=", "inequality")
{
    Complex c1(1.5, 2.3), c2(1.5, 2.31);
    REQUIRE(c1 != c2);
}

TEST_CASE("function members", "raiseTo")
{
    Complex c(2, 3);
    std::complex<double> co(2, 3);

    c = c.raiseTo(5);
    co = std::pow(co, 5);
    REQUIRE(c.real() == Approx(co.real()));
    REQUIRE(c.imag() == Approx(co.imag()));

    c = c.raiseTo(0);
    co = std::pow(co, 0);
    REQUIRE(c.real() == co.real());
    REQUIRE(c.imag() == co.imag());

    c = c.raiseTo(-5);
    co = std::pow(co, -5);
    REQUIRE(c.real() == Approx(co.real()));
    REQUIRE(c.imag() == Approx(co.imag()));
}