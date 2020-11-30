#ifdef _MSC_VER // We need to disabled secure iterator checking for MS's C++ compiler.
#define _SCL_SECURE_NO_WARNINGS
#endif

#include "array.hpp"
#include <iostream>
#include <algorithm>

void copy_array(const double* from, double* to, size_t size) {
    std::copy_n(from, size, to);
}

void print_array(const double* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

void resize_array(double*& arr, size_t oldSize, size_t newSize) {
    double* newArr = new double[newSize];
    size_t minSize = (oldSize < newSize) ? oldSize : newSize;
    copy_array(arr, newArr, minSize);
    delete[] arr;
    arr = newArr;
}

void resize_array(std::unique_ptr<double[]>& arr, size_t oldSize, size_t newSize) {
    auto newArr = std::make_unique<double[]>(newSize);
    size_t minSize = (oldSize < newSize) ? oldSize : newSize;
    copy_array(arr.get(), newArr.get(), minSize);
    newArr.swap(arr);
}
