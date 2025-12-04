#include <iostream>
#include <stdexcept>
using namespace std;

double compute_score(int total, int correct) {
  if (total <= 0) throw invalid_argument("total must be positive");
  if (correct > total)
    throw runtime_error("correct answers exceed total questions");
  return static_cast<double>(correct) / total;
}

int main() {
  int total, correct;
  cout << "Enter total number of questions: ";
  cin >> total;
  cout << "Enter number of correct answers: ";
  cin >> correct;
  try {
    double score = compute_score(total, correct);
    cout << "Score: " << score * 100 << "%\n";
  } catch (const invalid_argument& e) {
    cout << "Invalid argument: " << e.what() << endl;
  } catch (const runtime_error& e) {
    cout << "Runtime error: " << e.what() << endl;
  }
  return 0;
}