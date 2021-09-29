#include <algorithm>
#include <numeric>
#include <iostream>
#include <execution>
#include <vector>

int main(){
    size_t N = 10'000;
    std::vector x(N, 1.0/N);
    std::cout << "Result = " << std::reduce(std::execution::seq, x.begin(), x.end());
}