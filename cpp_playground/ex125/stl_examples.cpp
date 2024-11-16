// https://www.topcoder.com/thrive/articles/Power%20up%20C++%20with%20the%20Standard%20Template%20Library%20Part%20One

// Βασικές λειτουργίες σε vector
#include <iostream>
#include <vector>

using namespace std;

void vector_examples() {
  std::cout << __func__ << std::endl;
  vector<int> v(5);
  cout << v.size() << endl;
  cout << v.empty() << endl;
  v.resize(10);
  v.push_back(99);
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;
  vector<int> v1(10, -1);
  vector<int> v2(v1);
  vector<int> v3 = v1;
  for (int i = 0; i < v3.size(); i++)
    cout << v3[i] << " ";
  cout << endl;
}

void vector2d_example() {
  std::cout << __func__ << std::endl;
  int M = 3, N = 4;
  vector<vector<int>> matrix(M, vector<int>(N, 5));
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

void pair_examples() {
  std::cout << __func__ << std::endl;
  pair<int, int> p1 = {1, 2};
  cout << p1.first << " " << p1.second << endl;
  pair<string, pair<int, int>> p2 = {"aaa", {1, 2}};
  cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
}

void traversal_examples() {
  std::cout << __func__ << std::endl;
  vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector<int> v2(v1.begin() + 1, v1.end() - 2);
  for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;
  for (vector<int>::reverse_iterator it = v2.rbegin(); it != v2.rend(); it++) {
    cout << *it << " ";
  }
  cout << endl;
}

void algorithm_examples(){
    
}

int main() {
  vector_examples();
  vector2d_example();
  pair_examples();
  traversal_examples();
}