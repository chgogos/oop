#include <iostream>
#include <string>

using namespace std;

class date
{
private:
    int day, month, year;

public:
    date() : day(1), month(1), year(2020){};
    date(int d, int m) : day(d), month(m), year(2020){};     // constructor που καλεί τον constructor της βασικής κλάσης
    date(int d, int m, int y) : day(d), month(m), year(y){}; // constructor που καλεί τον constructor της βασικής κλάσης
    int get_day() const { return day; }
    int get_month() const { return month; }
    int get_year() const { return year; }
    virtual string desc() const { return to_string(day) + '/' + to_string(month) + '/' + to_string(year); }
};

class holiday : public date
{
private:
    string name;

public:
    holiday(string n) : date(), name(n) {}
    holiday(string n, int d, int m) : date(d, m), name(n) {}
    string get_name() const { return name; }
    virtual string desc() const
    {
        return name + " " + date::desc();
    }
};

// static binding, κλήση με τιμή
void fun1(date d)
{
    cout << "It's " << d.desc() << endl;
}

// dynamic binding, κλήση με αναφορά
void fun2(date &d)
{
    cout << "It's " << d.desc() << endl;
}

// dynamic binding
void fun3(date *d)
{
    cout << "It's " << d->desc() << endl;
}

int main()
{
    holiday h("Christmas", 25, 12);
    cout << h.desc() << endl; // Christmas 25/12/2020

    date d = h;               // slicing
    cout << d.desc() << endl; // 25/12/2020

    // static vs dynamic binding
    fun1(h);  // It's 25/12/2020
    fun2(h);  // It's Christmas 25/12/2020
    fun3(&h); // It's Christmas 25/12/2020
}