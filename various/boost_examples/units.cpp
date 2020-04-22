#include <iostream>
#include <boost/units/unit.hpp>
#include <boost/units/make_scaled_unit.hpp>
#include <boost/units/systems/si.hpp>

using namespace std;
using namespace boost;
using namespace boost::units;
using namespace boost::units::si;

int main()
{
    typedef make_scaled_unit<si::length, scale<10, static_rational<-2>>>::type cm;
    quantity<cm> d(2.0 * si::meter);
    quantity<si::time> t(100.0 * si::seconds);
    quantity<si::velocity> x(d / t);

    cout << d.value() << "cm" << endl;
    cout << t.value() << "sec" << endl;
    cout << x.value() << "m/sec" << endl;
}

/*
200cm
100sec
0.02m/sec
*/