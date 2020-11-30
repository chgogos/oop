#include "vector.hpp"
#include <iostream>

void multiply_all(vector& v, double factor) {
    for (size_t i = 0; i < v.size(); i++) {
        v.at(i) *= factor;
    }
}

double accumulate(const vector& v) {
    double sum = 0;

    for (size_t i = 0; i < v.size(); i++) {
        sum += v.at(i);
    }

    return sum;
}

void print_vector(const vector& v) {
    std::cout << "capacity: " << v.capacity() << " size: " << v.size() << " data: ";

    for (size_t i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << ' ';
    }
    std::cout << '\n';
}

int main() {
    vector v(2, 4.56);
    v.push_back(1.23);
    v.push_back(2.34);
    v.push_back(3.45);
    print_vector(v);            // capacity: 6 size: 5 data: 4.56 4.56 1.23 2.34 3.45
    multiply_all(v, 2);
    print_vector(v);            // capacity: 6 size: 5 data: 9.12 9.12 2.46 4.68 6.9
    double sum = accumulate(v);
    std::cout << sum << '\n';   // 32.28
    v.clear();
    print_vector(v);            // capacity: 6 size: 0 data:
}
