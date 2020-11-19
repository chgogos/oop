#include <iostream>
#include <string>

using namespace std;

class date
{
private:
    int day, month, year;

public:
    date() : day(1), month(1), year(2020){};
    date(int d, int m) : day(d), month(m), year(2020){};
    date(int d, int m, int y) : day(d), month(m), year(y){};
    int get_day() const { return day; }
    int get_month() const { return month; }
    int get_year() const { return year; }
    void add_one_day()
    {
        // λειτουργεί μόνο για την τρέχουσα ημερομηνία (19/11/2020)
        day++;
        if (day == 32)
        {
            day = 1;
            month++;
        }
    }
    virtual string desc() const { return to_string(day) + '/' + to_string(month) + '/' + to_string(year); }
};

class holiday : public date
{
private:
    string name;

public:
    holiday(string n) : date(), name(n) {}                   // constructor που καλεί τον constructor της βασικής κλάσης
    holiday(string n, int d, int m) : date(d, m), name(n) {} // constructor που καλεί τον constructor της βασικής κλάσης
    string get_name() const { return name; }
    virtual string desc() const
    {
        return name + " " + date::desc();
    }
    void add_one_day(){
        cout << "This is a holiday ..." << endl;
    }
};

int main()
{
    date *obj = new holiday("Christmas", 25,12);
    cout << obj->desc() << endl;
    obj->add_one_day();
    cout << obj->desc() << endl;

    delete obj;
}
