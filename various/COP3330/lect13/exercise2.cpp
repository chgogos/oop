#include <chrono>
#include <iostream>
#include <random>
#include <string>
#include <string_view>
using namespace std;

int main() {
  string s;
  s.reserve(100);
  mt19937 gen(random_device{}());
  uniform_int_distribution<int> dist('a', 'z');
  for (int i = 0; i < 1000; ++i) s.push_back(static_cast<char>(dist(gen)));
  string_view sv(s);
  long long sum_string = 0;
  long long sum_view = 0;
  auto t1 = chrono::high_resolution_clock::now();
  for (int rep = 0; rep < 1'000'000; ++rep) {
    int cnt = 0;
    for (char c : s)
      if (c == 'f') cnt++;
    sum_string += cnt;
  }
  auto t2 = chrono::high_resolution_clock::now();
  auto time_string =
      chrono::duration_cast<chrono::milliseconds>(t2 - t1).count();

  auto t3 = chrono::high_resolution_clock::now();
  for (int rep = 0; rep < 1'000'000; ++rep) {
    int cnt = 0;
    for (char c : sv)
      if (c == 'f') cnt++;
    sum_view += cnt;
  }

  auto t4 = chrono::high_resolution_clock::now();
  auto time_view = chrono::duration_cast<chrono::milliseconds>(t4 - t3).count();
  cout << "Count (string):      " << sum_string << "\n";
  cout << "Count (string_view): " << sum_view << "\n\n";
  cout << "Time (string):      " << time_string << " ms\n";
  cout << "Time (string_view): " << time_view << " ms\n";
}
