#include <iostream>

class my_vector
{
private:
    int size;
    double *data;

public:
    // default constructor
    my_vector()
    {
        std::cout << "default constructor called" << std::endl;
    };

    // constructor with 1 parameter (size)
    my_vector(int size) : size(size)
    {
        std::cout << "constructor called" << std::endl;
        data = new double[size];
    }

    // copy constructor
    my_vector(const my_vector &other)
    {
        std::cout << "copy constructor called" << std::endl;
        size = other.size;
        data = new double[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }
    }

    // copy assignment operator
    my_vector &operator=(const my_vector &other)
    {
        std::cout << "copy assignment operator called" << std::endl;
        size = other.size;
        data = new double[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }
        return *this;
    }

    // move constructor
    my_vector(my_vector &&other)
    {
        std::cout << "move constructor called" << std::endl;
        size = other.size;
        data = other.data;
        other.data = nullptr;
    }

    // move assignment operator
    my_vector &operator=(my_vector &&other)
    {
        std::cout << "move assignment operator called" << std::endl;
        size = other.size;
        data = other.data;
        other.data = nullptr;
        return *this;
    }

    ~my_vector()
    {
        std::cout << "destructor called" << std::endl;
        delete[] data;
    }
};

int main()
{
    my_vector v1(100000);
    my_vector v2(v1);            // copy constructor called
    my_vector v3(std::move(v1)); // move constructor
    my_vector v4;                // default constructor called
    v4 = v2;                     // copy assignment operator called
    my_vector v5;                // default constructor called
    v5 = std::move(v2);          // move assignment operator called
}
