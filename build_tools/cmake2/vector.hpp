#pragma once
#include <cstddef>
#include <memory>
using std::size_t;

class vector {
public:
    vector();
    vector(size_t sz, double val);

    void reserve(size_t cap);
    void push_back(double val);
    void pop_back();
    size_t size() const;
    size_t capacity() const;
    void clear();
    double& at(size_t i);
    double at(size_t i) const;
    void resize(size_t sz, double val = 0);

private:
    std::unique_ptr<double[]> m_data;
    size_t m_capacity;
    size_t m_size;
};
