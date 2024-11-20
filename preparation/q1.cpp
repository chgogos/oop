#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
int better(vector<T> v, T base) {
  int c = 0;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] >= base) c++;
  }
  return c;
}

class movie {
 private:
  string title;
  double imdb_score;

 public:
  movie(string t, double score) : title(t), imdb_score(score) {}

  bool operator>=(const movie &other) const {
    return imdb_score >= other.imdb_score;
  }
};

int main() {
  vector<int> v1 = {4, 5, 2, 3, 1, 8, 9};
  int r1 = better(v1, 5);
  cout << "Integers example: " << r1 << endl;

  vector<movie> v2 = {{"The Godfather", 9.2},
                      {"Pulp Fiction", 8.9},
                      {"Parasite", 8.5},
                      {"Casino", 8.2}};
  int r2 = better(v2, movie("The Matrix", 8.7));
  cout << "Movies example: " << r2 << endl;
}