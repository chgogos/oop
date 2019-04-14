/*
STRATEGY

Define a family of algorithms, encapsulate each one, and make them interchangeable.
Strategy lets the algorithm vary independently from clients that use it.

*/

#include <iostream>
#include <utility>
#include <algorithm>
#include <random>
#include <chrono>

// οικογένεια αλγορίθμων
class sorter
{
protected:
    int *data;
    int size;

public:
    sorter(int *d, int s) : data(d), size(s) {}
    virtual void sort() = 0;
};

class bubble_sort_sorter : public sorter
{

public:
    bubble_sort_sorter(int *d, int s) : sorter(d, s) {}
    
    void sort()
    {
        for (int i = 1; i < size; i++)
        {
            for (int j = size - 1; j >= i; j--)
            {
                if (data[j - 1] > data[j])
                {
                    std::swap(data[j], data[j - 1]);
                }
            }
        }
    }
};

class insertion_sort_sorter : public sorter
{
public:
    insertion_sort_sorter(int *d, int s) : sorter(d, s) {}

    void sort()
    {
        int temp, i, j;
        for (i = 1; i < size; i++)
        {
            j = i;
            while (j > 0 && data[j] < data[j - 1])
            {
                temp = data[j];
                data[j] = data[j - 1];
                data[j - 1] = temp;
                j--;
            }
        }
    }
};

class stl_sorter : public sorter
{
public:
    stl_sorter(int *d, int s) : sorter(d, s) {}

    void sort()
    {
        std::sort(data, data + size);
    }
};

void print(int* a, int n){
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int a[] = {4, 2, 6, 1, 7, 5, 9, 0, 3, 8};
    int n = sizeof(a) / sizeof(int);
    unsigned seed;

    std::cout << "BEFORE: ";
    print(a,n);
    bubble_sort_sorter sorter1 = bubble_sort_sorter(a, n);
    sorter *a_sorter = &sorter1;
    a_sorter->sort();
    std::cout << "AFTER : ";
    print(a,n);

    seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(std::begin(a), std::end(a), std::default_random_engine(seed));

    std::cout << "BEFORE: ";
    print(a,n);
    insertion_sort_sorter sorter2 = insertion_sort_sorter(a, n);
    a_sorter = &sorter2;
    a_sorter->sort();
    std::cout << "AFTER : ";
    print(a,n);

    seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(std::begin(a), std::end(a), std::default_random_engine(seed));
    std::cout << "BEFORE: ";
    print(a,n);

    stl_sorter sorter3 = stl_sorter(a, n);
    a_sorter = &sorter3;
    a_sorter->sort();
    std::cout << "AFTER : ";
    print(a,n);
}
