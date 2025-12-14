#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  map<char, int> freq;
  string token;
  if (!(cin >> token)) {
    cerr << "Error: no input provided. Use: ./a.out < filename\n";
    return 1;
  }
  for (char ch : token) {
    if (ch >= 'a' && ch <= 'z') freq[ch]++;
  }
  while (cin >> token) {
    for (char ch : token) {
      if (ch >= 'a' && ch <= 'z') freq[ch]++;
    }
  }
  cout << "Letter frequencies:\n";
  for (char c = 'a'; c <= 'z'; ++c) {
    cout << c << ": " << freq[c] << "\n";
  }
  return 0;
}
