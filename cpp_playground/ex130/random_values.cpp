#include <iostream>
#include <random>

using namespace std;

int main() {
  random_device rd;
  cout << "Seed: " << rd() << endl;
  mt19937 gen(rd());
  uniform_int_distribution<long> dist(0, 10);
  for (int i = 0; i < 10; i++) {
    cout << dist(gen) << endl;
  }
}