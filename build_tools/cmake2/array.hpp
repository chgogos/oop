#pragma once
#include <cstddef>
#include <memory>

using std::size_t;

void copy_array(const double* from, double* to, size_t size);
void print_array(const double* arr, size_t size);
void resize_array(double*& arr, size_t oldSize, size_t newSize);
void resize_array(std::unique_ptr<double[]>& arr, size_t oldSize, size_t newSize);

