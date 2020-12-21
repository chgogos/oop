#include <iostream>
#include "matrix.hpp"

Matrix::Matrix(int rows, int columns)
{
    this->rows = rows;
    this->columns = columns;
    p = new int[rows * columns];
    if (p == 0)
    {
        std::cerr << "Allocation failed" << std::endl;
    }
    else
    {
        for (int i = 0; i < rows * columns; i++)
        {
            p[i] = 0;
        }
    }
}
int Matrix::nrows() const
{
    return rows;
}

int Matrix::ncols() const
{
    return columns;
}

Matrix::~Matrix()
{
    if (p)
        delete[] p;
}

int* Matrix::operator[](int r)
{
    return p + r * columns;
}