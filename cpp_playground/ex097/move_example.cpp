#include <iostream>

using namespace std;

int count = 0;

class MyVector
{
private:
    int id;
    double *data = nullptr;
    int size_;

public:
    // constructor with 1 int parameter
    MyVector(int size)
    {
        size_=size;
        try
        {
            data = new double[size_];
        }
        catch (std::bad_alloc &)
        {
            cerr << "Cannot allocate memory" << endl;
        }
        id = ++count;
        cout << "CONSTRUCTOR WITH 1 INT PARAMETER: Object " << id << " Memory allocated starting at " << data << " bytes = " << sizeof(double) * size_ << endl;
    }

    // copy constructor
    MyVector(const MyVector &other)
    {
        size_ = other.size_;
        try
        {
            data = new double[size_];
        }
        catch (std::bad_alloc &)
        {
            cerr << "Cannot allocate memory" << endl;
        }
        id = ++count;
        for (int i = 0; i < size_; i++)
        {
            // cerr << "COPY" << i << endl;
            data[i] = other.data[i];
        }
        cout << "COPY CONSTRUCTOR: " << id << " Memory allocated starting at " << data << " bytes = " << sizeof(double) * size_ << endl;
    }

    // move constructor
    MyVector(MyVector &&other) : size_(other.size_), data(other.data)
    {
        other.data = nullptr;
        other.size_ = 0;
        cout << "MOVE CONSTRUCTOR: " << id << endl;
    }

    // copy assignment
    MyVector &operator=(const MyVector &other)
    {
        if (data != nullptr)
        {
            cout << "COPY ASSIGNMENT: Object " << id << " Memory deleted starting at " << data << " bytes = " << sizeof(double) * size_ << endl;
            delete[] data;
        }
        try
        {
            size_ = other.size_;
            data = new double[size_];
        }
        catch (std::bad_alloc &)
        {
            cerr << "Cannot allocate memory" << endl;
        }
        for (int i = 0; i < size_; i++)
        {
            data[i] = other.data[i];
        }
        cout << "COPY ASSIGNMENT: Object " << id << " Memory allocated starting at " << data << " bytes = " << sizeof(double) * size_ << endl;
        return *this;
    }

    // move assignment
    MyVector &operator=(MyVector &&other)
    {
        data = other.data;
        size_ = other.size_;
        other.data = nullptr;
        other.size_ = 0;
        cout << "MOVE ASSIGNMENT: " << id << endl;
        return *this;
    }

    ~MyVector()
    {
        delete[] data;
        cout << "DESTRUCTOR: Object " << id << " Memory deleted starting at " << data << " bytes = " << sizeof(double) * size_ << endl;
    }
};

MyVector fun(const MyVector &v)
{
    cout << "Function fun(MyVector) called" << endl;
    MyVector res(v);
    return res;
}

int main()
{
    MyVector v1(10000);
    MyVector v2(v1); // copy constructor
    v1 = v2;         // copy assignment
    v1 = fun(v2);
}