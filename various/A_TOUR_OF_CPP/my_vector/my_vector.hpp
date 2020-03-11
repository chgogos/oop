#ifndef MY_VECTOR_HPP
#define MY_VECTOR_HPP

#include <initializer_list>

class my_vector
{
private:
    double *elem;
    int sz;

public:
    my_vector(int s);
    my_vector(std::initializer_list<double> lst); // initializer list
    my_vector(const my_vector& v); // copy constructror
    my_vector& operator=(const my_vector& v); // copy assignement
    ~my_vector();
    double &operator[](int i);
    int size();
};

#endif