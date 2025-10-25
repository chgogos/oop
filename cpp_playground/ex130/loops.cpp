// https://simplifycpp.org/?id=a0900

#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <ranges>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  v.resize(1'000'000);
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> dist(0, 1'000);
  std::generate(v.begin(), v.end(), [&] { return dist(gen); });

  // 1.
  auto t0 = std::chrono::high_resolution_clock::now();
  for (size_t i = 0; i < v.size(); ++i) {
    v[i] *= 2;
  }
  auto t1 = std::chrono::high_resolution_clock::now();
  auto ns =
      std::chrono::duration_cast<std::chrono::nanoseconds>(t1 - t0).count();
  std::cout << "loop time (1): " << ns << " ns\n";

  // 2.
  t0 = std::chrono::high_resolution_clock::now();
  for (auto& x : v) {
    x *= 2;
  }
  t1 = std::chrono::high_resolution_clock::now();
  ns = std::chrono::duration_cast<std::chrono::nanoseconds>(t1 - t0).count();
  std::cout << "loop time (2): " << ns << " ns\n";

  // 3. C++20 ranges
  t0 = std::chrono::high_resolution_clock::now();
  auto result = v | std::views::transform([](int x) { return x * 2; });
  t1 = std::chrono::high_resolution_clock::now();
  ns = std::chrono::duration_cast<std::chrono::nanoseconds>(t1 - t0).count();
  std::cout << "loop time (3): " << ns << " ns\n";
}