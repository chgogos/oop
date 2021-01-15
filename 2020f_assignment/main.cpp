#include <iostream>
#include <iomanip>
#include <random>
#include <chrono>
#include <vector>
#include "matrix.hpp"

using namespace std;

int main()
{
    int n = 5; // αριθμός ιστοσελίδων
    int s = 2; // αριθμός επισκεπτών

    long seed = 123456789l; // ίδια αποτελέσματα κάθε φορά που εκτελείται το πρόγραμμα
    // long seed = chrono::system_clock::now().time_since_epoch().count(); // // διαφορετικά αποτελέσματα κάθε φορά που εκτελείται το πρόγραμμα
    mt19937 engine(seed);
    uniform_int_distribution<int> dist1(0, 1); // χρησιμοποιείται για την τυχαία δημιουργία του γραφήματος συνδέσεων
    uniform_int_distribution<int> dist2(0, n); // χρησιμοποιείται για την τυχαία τοποθέτηση επισκεπτών σε ιστοσελίδες

    // Δημιουργία γραφήματος
    Matrix links(n, n); // δισδιάστατος πίνακας που περιέχει την πληροφορία σύνδεσης ανάμεσα στις ιστοσελίδες
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            links[i][j] = dist1(engine);
        }
    }

    cout << "The graph is the following:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(2) << links[i][j];
        }
        cout << endl;
    }

    cout << "Initial positions" << endl;
    // Τοποθέτηση των επισκεπτών σε τυχαίες κορυφές του γραφήματος
    int *surfer_position = new int[s];
    for (int i = 0; i < s; i++)
    {
        surfer_position[i] = dist2(engine);
        cout << "Surfer " << i << " is in web page " << surfer_position[i] << endl;
    }

    // μετακίνηση των επισκεπτών από τη σελίδα που βρίσκονται σε μια άλλη (10 επαναλήψεις)
    for (int r = 0; r < 10; r++)
    {
        cout << "Round " << r << endl;
        for (int surfer_id = 0; surfer_id < s; surfer_id++)
        {
            int current_page = surfer_position[surfer_id];
            vector<int> neighbors;
            for (int j = 0; j < n; j++)
            {
                if (links[current_page][j] == 1)
                {
                    neighbors.push_back(j);
                }
            }
            if (neighbors.empty())
            {
                cout << "Dead end for surfer " << surfer_id << endl;
                continue;
            }
            int next_page = neighbors[dist2(engine) % neighbors.size()];
            cout << "Surfer " << surfer_id << " moves from web page " << current_page << " to web page " << next_page << endl;
            surfer_position[surfer_id] = next_page;
        }
    }

    delete[] surfer_position;
}