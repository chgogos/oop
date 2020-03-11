#include "my_vector.hpp"
#include <stdexcept>
#include <algorithm>

my_vector::my_vector(int s) : elem(new double[s]), sz(s) {}

my_vector::my_vector(const my_vector &v) : elem(new double[v.sz]), sz(v.sz)
{
    for (int i = 0; i != sz; ++i)
    {
        elem[i] = v.elem[i];
    }
}

my_vector &my_vector::operator=(const my_vector &v)
{
    double *p = new double[v.sz];
    for (int i = 0; i != sz; ++i)
    {
        p[i] = v.elem[i];
    }
    delete[] elem; // διαγραφή παλιών περιεχομένων
    elem = p;
    sz = v.sz;
    return *this;
}

my_vector::my_vector(std::initializer_list<double> lst) : elem(new double[lst.size()]),
                                                          sz(static_cast<int>(lst.size()))
{
    std::copy(lst.begin(), lst.end(), elem);
}

my_vector::~my_vector()
{
    delete[] elem;
}

double &my_vector::operator[](int i)
{
    if (i < 0 || i >= size())
        throw std::out_of_range("my_vector::operator[]");
    return elem[i];
}

int my_vector::size()
{
    return sz;
}
