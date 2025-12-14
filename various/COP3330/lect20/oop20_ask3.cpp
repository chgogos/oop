#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Patient {
  string name;
  int severity;  // 0–100
};

struct ComparePatients {
  bool operator()(const Patient& a, const Patient& b) const {
    return a.severity < b.severity;
  }
};

int main() {
  priority_queue<Patient, vector<Patient>, ComparePatients> pq;
  int choice;
  while (true) {
    cout << "\n--- Emergency Department System ---\n"
         << "1. ARRIVE\n"
         << "2. TREAT\n"
         << "3. STATUS\n"
         << "4. EXIT\n"
         << "Select an option: ";
    cin >> choice;
    if (!cin) {
      cerr << "Invalid input. Exiting.\n";
      return 1;
    }
    if (choice == 1) {
      string name;
      int severity;
      cout << "Enter patient name: ";
      cin >> name;
      cout << "Enter severity (0–100): ";
      cin >> severity;
      if (!cin || severity < 0 || severity > 100) {
        cout << "Invalid severity value.\n";
        continue;
      }
      pq.push(Patient{name, severity});
      cout << "Patient added to queue.\n";
    } else if (choice == 2) {
      if (pq.empty()) {
        cout << "No patients waiting.\n";
      } else {
        Patient p = pq.top();
        pq.pop();
        cout << "Treating patient: " << p.name << " with severity "
             << p.severity << "\n";
      }
    } else if (choice == 3) {
      cout << "Number of patients waiting: " << pq.size() << "\n";
    } else if (choice == 4) {
      cout << "Exiting program.\n";
      break;
    } else {
      cout << "Invalid choice.\n";
    }
  }
  return 0;
}
