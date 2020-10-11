#include "date2020.hpp"
#include <iostream>
#include <string>

using namespace std;

// ανάθεση στατικών μεταβλητών κλάσης date2020
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

date2020::date2020() : d(1),
                       m(1)
{
}

date2020::date2020(int dd) : d(1), m(1)
{
    if (dd < 1)
    {
        cerr << "wrong date" << endl;
        d = m = -1;
    }
    else
    {
        plus_days(dd - 1);
    }
}

date2020::date2020(int dd, int mm)
{
    if (mm < 1 || mm > 12)
    {
        cerr << "inalid date" << endl;
        d = m = -1;
        return;
    }
    if (dd < 1 || dd > days_per_month[mm - 1])
    {
        cerr << "invalid date" << endl;
        d = m = -1;
        return;
    }
    d = dd;
    m = mm;
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
    int month_index = m - 1;
    int day_index = d;
    for (int i = 0; i < dd; i++)
    {
        if (day_index == days_per_month[month_index])
        {
            day_index = 1;
            month_index++;
            if (month_index == 12)
            {
                d = -1;
                m = -1;
                cerr << "Invalid date" << endl;
                return;
            }
        }
        else
        {
            day_index++;
        }
    }
    d = day_index;
    m = month_index + 1;
}

void date2020::print()
{
    if (m == -1 || d == -1)
        cerr << "Invalid date" << endl;
    else
        cout << d << " " << month_names[m-1] << " " << 2020 << " ("
             << get_day_name()
             << " - " << get_days_in_year() << ")" << endl;
}

string date2020::get_day_name()
{
    return day_names[(first_day_of_year + (get_days_in_year() - 1)) % 7];
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