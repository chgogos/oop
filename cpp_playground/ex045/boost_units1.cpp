// Boost.Units

#include <iostream>

#include <boost/units/quantity.hpp>
#include <boost/units/systems/si.hpp>
#include <boost/units/io.hpp>

int main()
{
    boost::units::quantity<boost::units::si::mass> w = 20.6 * boost::units::si::kilograms + 10.2 * boost::units::si::kilograms;
    std::cout << w << std::endl;
}