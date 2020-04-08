#include <string>

using namespace std;

class date2020
{
private:
    static const int first_day_of_year;  // αριθμός ημέρας για την πρώτη ημέρα του έτους (3 για Τετάρτη)
    static const string day_names[7];    // ονόματα ημερών
    static const string month_names[12]; // ονόματα μηνών
    static const int days_per_month[12]; // αριθμός ημερών ανά μήνα

    int d; // αριθμός ημέρας στο μήνα
    int m; // αριθμός μήνα

public:
    date2020();
    date2020(int d);
    date2020(int d, int m);

    // επιστροφή αριθμού ημέρας στο μήνα
    int get_day_in_month();

    // επιστροφή αριθμού μήνα
    int get_month();

    // εκτύπωση ημερομηνίας π.χ. 30-4-2020 (Thursday - 121)
    void print();

    // πρόσθεση days ημερών στην ημερομηνία
    void plus_days(int days);

    // επιστροφή πλήθους ημερών που έχουν περάσει στο έτος για την ημερομηνία
    int get_days_in_year();

    // επιστροφή ονόματος ημέρας για την τρέχουσα ημερομηνία
    string get_day_name();
};