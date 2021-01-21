// Εισάγετε 10 ακέραιες τιμές σε ένα std::vector. 
// Υπολογίστε το άθροισμα και το γινόμενο των στοιχείων χωρίς να γράψετε εντολή επανάληψης.

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> v{3, 1, 6, 7, 2, 4, 5, 8, 9, 4};
    int sum = accumulate(v.begin(), v.end(), 0);
    int prod = accumulate(v.begin(), v.end(), 1, multiplies<int>());
    cout << "Sum=" << sum << endl;
    cout << "Product=" << prod << endl;
}

/*
Sum=49
Product=1451520
*/