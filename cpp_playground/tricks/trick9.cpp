#include <iostream>
#include <vector>
#include <iterator>  // ostream_iterator
#include <algorithm> // for_each

#define PRINT(A, N)               \
    for (int i = 0; i < N; i++)   \
    {                             \
        std::cout << A[i] << " "; \
    }                             \
    std::cout << std::endl;

void print(std::vector<int> v)
{
    for (auto x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

void print_c(int a[], int N){
    for(int i=0;i<N;i++){
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "CHECKPOINT 1" << std::endl;
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
        // std::cout << v.at(i) << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT 2" << std::endl;
    for (int x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT 3" << std::endl;
    for (int &x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT 4" << std::endl;
    for (auto x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT 5" << std::endl;
    for (auto &x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT 6" << std::endl;
    for (auto &&x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT 7" << std::endl;
    for (std::vector<int>::iterator itr = begin(v); itr != end(v); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT 8" << std::endl;
    for (std::vector<int>::const_iterator itr = begin(v); itr != end(v); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;


    std::cout << "CHECKPOINT 9" << std::endl;
    for (auto itr = begin(v); itr != end(v); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT 10" << std::endl;
    for (auto itr = v.begin(); itr != v.end(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT 11" << std::endl;
    for (auto itr = v.cbegin(); itr != v.cend(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT 12" << std::endl;
    for (auto itr = v.rbegin(); itr != v.rend(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT 13" << std::endl;
    for (auto itr = v.crbegin(); itr != v.crend(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT 14" << std::endl;
    std::ostream_iterator<int> output(std::cout, " ");
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    std::cout << "CHECKPOINT 15" << std::endl;
    std::for_each(v.cbegin(), v.cend(), [](int i) { std::cout << i << " "; });
    std::cout << std::endl;

    std::cout << "CHECKPOINT 16" << std::endl;
    int *p = &v[0];
    for (int i=0;i<v.size();i++){
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "CHECKPOINT 17" << std::endl;
    print(v);

    std::cout << "CHECKPOINT 18" << std::endl;
    print_c(&v[0], v.size());

    std::cout << "CHECKPOINT 19" << std::endl;
    PRINT(v, v.size());

    return 0;
}