// Optimizing software in C++

class Matrix
{
public:
    Matrix(int rows, int columns);
    int nrows() const;
    int ncols() const;
    ~Matrix();
    int *operator[](int r);

protected:
    int rows;
    int columns;
    int *p;
};