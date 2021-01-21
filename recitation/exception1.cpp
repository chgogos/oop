// Γράψτε συνάρτηση που να δέχεται 2 πραγματικές τιμές και να επιστρέφει το πηλίκο τους. 
// Χειριστείτε την περίπτωση που ο παρονομαστής είναι μηδέν με εξαίρεση. 
// Πραγματοποιήστε σύλληψη (catch) της εξαίρεσης στη main.

#include <iostream>
#include <stdexcept>

using namespace std;

double divide(double a, double b)
{
    if (b == 0)
    {
        throw exception();
    }
    return a / b;
}

int main()
{
    try
    {
        cout << divide(3.0, 2.0) << endl;
        cout << divide(3.0, 0.0) << endl;
        cout << divide(3.0, 2.0) << endl;
    }
    catch (exception ex)
    {
        cout << ex.what() << endl;
    }
}

/*
1.5
std::exception
*/