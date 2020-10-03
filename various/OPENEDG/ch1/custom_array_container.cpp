#include <exception>
#include <iostream>
class Array
{
        int *_array;
        unsigned int _size;

public:
        Array(unsigned size = 0);

        void add(int value);

        void delItem(unsigned index);

        virtual ~Array();
        unsigned int getSize() const;
        int &operator[](unsigned index);
};

Array::Array(unsigned size) : _array(0), _size(size)
{
        if (size > 0)
        {
                _array = new int[this->_size];
        }
}

void Array::add(int value)
{
        if (_size == 0)
        {
                _array = new int[1];
        }
        else
        {
                int *tmp = new int[_size + 1];
                for (unsigned i = 0; i < _size; i++)
                {
                        tmp[i] = _array[i];
                }
                delete[] _array;
                _array = tmp;
        }
        _array[_size++] = value;
}

void Array::delItem(unsigned index)
{
        if (_size == 1)
        {
                delete[] _array;
                _array = 0;
        }
        else
        {
                int *tmp = new int[_size - 1];
                for (unsigned i = 0, j = 0; i < _size; i++, j++)
                {
                        if (i == index)
                        {
                                j--;
                                continue;
                        }
                        tmp[j] = _array[i];
                }
                delete[] _array;
                _array = tmp;
        }
        _size--;
}

unsigned int Array::getSize() const
{
        return _size;
}
int &Array::operator[](unsigned index)
{
        if (index > _size - 1)
        {
                std::exception e;
                throw e;
        }
        return _array[index];
}

Array::~Array()
{
        delete[] _array;
}

int main()
{
        Array A(10);
        for (unsigned i = 0; i < A.getSize(); ++i)
        {
                A[i] = i;
        }
        for (unsigned i = 0; i < A.getSize(); ++i)
        {
                std::cout << A[i] << " ";
        }
        std::cout << "\n";

        std::cout << A.getSize() << std::endl;
        A.add(100);
        std::cout << A.getSize() << std::endl;
        A.delItem(A.getSize() - 1);
        std::cout << A.getSize() << std::endl;
        return 0;
}