#include <iostream>

// υλοποίηση templated class ανάλογης με το std::vector

template <class T>
class my_vector
{
private:
    size_t vsize;
    size_t vcapacity;
    T *vitems;

public:
    my_vector() : vsize(0), vcapacity(1), vitems(new T[1]) {} // αρχικό μέγεθος διανύσματος=1
    size_t size() const { return vsize; }
    size_t capacity() const { return vcapacity; }
    T &operator[](size_t i) { return vitems[i]; }
};

int main()
{
    // to be completed
}