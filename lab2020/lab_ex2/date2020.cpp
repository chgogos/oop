#include "date2020.hpp"
#include <iostream>
#include <string>

using namespace std;

// ανάθεση στατικών μεταβλητών κλάσης date2020
const int date2020::first_day_of_year = 3; // 3 = Wednesday
const string date2020::day_names[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
const string date2020::month_names[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
const int date2020::days_per_month[12] = {
    31,
    29,
    31,
    30,
    31,
    30,
    31,
    31,
    30,
    31,
    30,
    31};

date2020::date2020()
{
    d = m = -1;
    // ΝΑ ΔΙΑΦΡΑΦΕΙ Η ΠΡΟΗΓΟΥΜΕΝΗ ΓΡΑΜΜΗ ΚΑΙ ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ Ο ΚΩΔΙΚΑΣ
}

date2020::date2020(int dd)
{
    d = m = -1;
    // ΝΑ ΔΙΑΦΡΑΦΕΙ Η ΠΡΟΗΓΟΥΜΕΝΗ ΓΡΑΜΜΗ ΚΑΙ ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ Ο ΚΩΔΙΚΑΣ
}

date2020::date2020(int dd, int mm)
{
    d = m = -1;
    // ΝΑ ΔΙΑΦΡΑΦΕΙ Η ΠΡΟΗΓΟΥΜΕΝΗ ΓΡΑΜΜΗ ΚΑΙ ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ Ο ΚΩΔΙΚΑΣ
}

//  getters

int date2020::get_day_in_month()
{
    return d;
}

int date2020::get_month()
{
    return m;
}

// άλλες συναρτήσεις μέλη

void date2020::plus_days(int dd)
{
    // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
}

void date2020::print()
{
    if (m == -1 || d == -1)
        cerr << "Invalid date" << endl;
    else
        cout << d << " " << month_names[m - 1] << " " << 2020 << " ("
             << get_day_name()
             << " - " << get_days_in_year() << ")" << endl;
}

string date2020::get_day_name()
{
    return "UNKNOWN";
    // ΝΑ ΔΙΑΦΡΑΦΕΙ Η ΠΡΟΗΓΟΥΜΕΝΗ ΓΡΑΜΜΗ ΚΑΙ ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ Ο ΚΩΔΙΚΑΣ
}

int date2020::get_days_in_year()
{
    int days = 0;
    for (int i = 0; i < m - 1; i++)
    {
        days += days_per_month[i];
    }
    days += d;
    return days;
}