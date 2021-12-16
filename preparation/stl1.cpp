// Εισαγωγή ονομάτων, 
// ταξινόμηση ονομάτων, 
// ταξινόμηση ονομάτων σε φθίνουσα σειρά,
// ταξινόμηση ονομάτων σε φθίνουσα σειρά πλήθους χαρακτήρων, 
// διαγραφή ονομάτων με κάτω από 6 χαρακτήρες

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> names;
    names.push_back("Nikos");
    names.push_back("Christoforos");
    names.push_back("Orestis");
    names.push_back("Maria");
    names.push_back("Penelope");

    for (string n : names)
        cout << n << endl;

    cout << "###############" << endl;
    // Ταξινόμηση σε αύξουσα αλφαβητική σειρά
    sort(names.begin(), names.end());
    for (string n : names)
        cout << n << endl;

    cout << "###############" << endl;
    // Ταξινόμηση σε φθίνουσα αλφαβητική σειρά
    sort(
        names.begin(), names.end(), [](string n1, string n2)
        { return n1 > n2; });
    for (string n : names)
        cout << n << endl;

    cout << "###############" << endl;
    // Ταξινόμηση κατά μήκος ονόματος
    sort(
        names.begin(), names.end(), [](string n1, string n2)
        { return n1.length() < n2.length(); });
    for (string n : names)
        cout << n << endl;

    cout << "###############" << endl;
    // Διαγραφή όλων των ονομάτων με μήκος μικρότερο από 6
    vector<string>::iterator itr = remove_if(names.begin(), names.end(), [](string n)
                                             { return n.length() < 6; });
    names.erase(itr, names.end());
    // ή erase remove idiom
    // names.erase(remove_if(names.begin(), names.end(), [](string n)
    //                       { return n.length() < 6; }),
    //             names.end());
    for (string n : names)
        cout << n << endl;
}

/*
Nikos
Christoforos
Orestis
Maria
Penelope
###############
Christoforos
Maria
Nikos
Orestis
Penelope
###############
Penelope
Orestis
Nikos
Maria
Christoforos
###############
Nikos
Maria
Orestis
Penelope
Christoforos
###############
Orestis
Penelope
Christoforos
*/