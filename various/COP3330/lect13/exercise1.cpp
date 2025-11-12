#include <iostream>
#include <string>
using namespace std;

int cstr_length(const char* s) {
  int len = 0;
  while (s[len] != '\0') {
    ++len;
  }
  return len;
}

string interpolate_spaces(const string& s) {
  string result;
  for (int i = 0; i < s.size(); ++i) {
    result.push_back(s[i]);
    if (i < s.size() - 1) {
      result.push_back(' ');
    }
  }
  return result;
}

int main() {
  char input[101];
  cout << "Input text: ";
  cin.getline(input, 101);
  cout << "Length: " << cstr_length(input) << "\n\n";
  string word = "INFORMATION";
  string spaced = interpolate_spaces(word);
  cout << "New text:" << spaced << "\n";
  return 0;
}
