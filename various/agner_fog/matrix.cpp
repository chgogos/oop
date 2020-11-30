// Optimizing software in C++

#include <iostream>
#include <cstdio>


template <typename T>
class Matrix
{
public:
    Matrix(int rows, int columns)
    {
        this->rows = rows;
        this->columns = columns;
        p = new T[rows * columns];
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
    int nrows() const
    {
        return rows;
    }

    int ncols() const
    {
        return columns;
    }

    ~Matrix()
    {
        if (p)
            delete[] p;
    }

    T *operator[](int r)
    {
        return p + r * columns;
    }

protected:
    int rows;
    int columns;
    T *p;
};

int main()
{
    Matrix<double> mat(8, 10);
    mat[3][5] = 12.34;
    for (int r = 0; r < mat.nrows(); r++)
    {
        for (int c = 0; c < mat.ncols(); c++)
        {
            printf("%5.2f ", mat[r][c]);
        }
        printf("\n");
    }
}

/*
 0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00 
 0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00 
 0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00
 0.00  0.00  0.00  0.00  0.00 12.34  0.00  0.00  0.00  0.00
 0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00
 0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00
 0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00 
 0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00  0.00
*/