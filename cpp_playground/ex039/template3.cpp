#include <iostream>

// size is a non-type parameter for the template function
template <class T, int size>
T sum(T a[size]){
    T s = a[0];
    for(int i=1;i<size;i++){
        s += a[i];
    }
    return s;
}

int main()
{
    int a[] = {4, 2, 3, 7, 1, 9, 10};
    std::cout << sum<int, 1>(a) << std::endl;
    std::cout << sum<int, 5>(a) << std::endl;
    std::cout << sum<int, 7>(a) << std::endl;

    double b[] = {2.1, 3.2, 7.1, 8.2, 9.0, 3.7, 5.5};
    std::cout << sum<double, 1>(b) << std::endl;
    std::cout << sum<double, 5>(b) << std::endl;
    std::cout << sum<double, 7>(b) << std::endl;

    return 0;
}

/*
4
17
36
2.1
29.6
38.8
*/