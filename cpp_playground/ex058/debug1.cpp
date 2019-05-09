/*
Εντοπισμός της μεγαλύτερης τιμής σε έναν πίνακα πραγματικών καθώς και πόσες φορές παρατηρείται.
Στη συνέχεια ο χρήστης θα πρέπει να εισάγει τη μέγιστη τιμή που υπολογίστηκε και να εμφανιστεί 
πόσες φορές υπάρχει που θα πρέπει να συμφωνεί με την τιμή που υπολογίστηκε. Ωστόσο το αποτέλεσμα 
είναι διαφορετικό:

Maximum value is 2.36667 occurs 4 times
Enter max value: 2.36667
Occurrences = 0

Με τη χρήση του debugger εντοπίζουμε το σφάλμα που έχει να κάνει με την πλήρη απεικόνιση "όλων" των
δεκαδικών ψηφίων που μπορεί να διατηρήσει η double τιμή

*/
#include <iostream>
#include <iomanip>

#define N 10

void max_value_occurrences(double a[N], double &max, int &max_occurences)
{
    max_occurences = 1;
    for (int i = 0; i < N; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_occurences = 1;
        }
        else if (a[i] == max)
        {
            max_occurences++;
        }
    }
}

int main()
{
    double a[N] = {3.1, 2.4, 5.3, 7.1, 7.1, 6.2, 6.3, 7.1, 5.2, 7.1};
    for (int i = 0; i < N; i++)
    {
        a[i] /= 3.0;
    }
    double max=0.0;
    double x;
    int max_occur;
    max_value_occurrences(a, max, max_occur);
    // std::cout <<std::setprecision(17);
    std::cout << "Maximum value is " << max << " occurs " << max_occur << " times" << std::endl;
    std::cout << "Enter max value: ";
    std::cin >> x;

    int c = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == x)
        {
            c++;
        }
    }
    std::cout << "Occurrences = " << c << std::endl;

    return 0;
}
