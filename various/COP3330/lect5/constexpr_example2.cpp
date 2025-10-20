#include <chrono>
#include <iostream>

using namespace std;
using hrc = chrono::high_resolution_clock;
using ull = unsigned long long;
using ns = std::chrono::nanoseconds;

constexpr ull factorial(int n) { return (n <= 1) ? 1 : n * factorial(n - 1); }

int main() {
  volatile ull sink1 = 0;
  volatile ull sink2 = 0;
  const int iterations = 100'000'000;

  auto t1_start = hrc::now();
  for (int i = 0; i < iterations; ++i) {
    sink1 += factorial(5);
  }
  auto t1_end = hrc::now();
  auto ns1 = chrono::duration_cast<ns>(t1_end - t1_start).count();
  cout << "factorial(5) x " << iterations << ": " << ns1 << " ns ("
       << (ns1 / double(iterations)) << " ns/call)\n";

  int x = 5;
  auto t2_start = hrc::now();
  for (int i = 0; i < iterations; ++i) {
    sink2 += factorial(x);
  }
  auto t2_end = hrc::now();
  auto ns2 = chrono::duration_cast<ns>(t2_end - t2_start).count();
  cout << "factorial(x) x " << iterations << ": " << ns2 << " ns ("
       << (ns2 / double(iterations)) << " ns/call)\n";
}
