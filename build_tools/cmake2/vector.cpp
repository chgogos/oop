#include "vector.hpp"
#include "array.hpp"

#include <algorithm>

vector::vector():
    m_data(nullptr),
    m_capacity(0),
    m_size(0) {}

vector::vector(size_t sz, double val):
    m_data(new double[sz]),
    m_capacity(sz),
    m_size(sz) {
    std::fill_n(m_data.get(), sz, val);
}

void vector::reserve(size_t cap) {
    if (m_capacity < cap) {
        resize_array(m_data, m_size, cap);
        m_capacity = cap;
    }
}

void vector::push_back(double val) {
    if (m_size == m_capacity) {
        reserve((m_capacity + 1) * 2);
    }

    m_data[m_size] = val;
    m_size++;
}

void vector::pop_back() {
    m_size--;
}

size_t vector::size() const {
    return m_size;
}

size_t vector::capacity() const {
    return m_capacity;
}

void vector::clear() {
    m_size = 0;
}

double& vector::at(size_t i) {
    return m_data[i];
}

double vector::at(size_t i) const {
    return m_data[i];
}

void vector::resize(size_t size, double value) {
    if (size >= m_size) {
        reserve(size);
        std::fill(m_data.get() + m_size, m_data.get() + size, value);
    }

    m_size = size;
}
