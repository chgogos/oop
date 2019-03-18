#include <iostream>
#include <sstream>

class MyTime
{
  private:
    int hour;
    int minute;
    int second;

  public:
    MyTime(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

    void set_time()
    {
        std::cout << "Enter hour, minute, second ";
        std::cin >> hour >> minute >> second;
    }

    void show()
    {
        std::cout << hour << ":" << minute << ":" << second << std::endl;
    }

    // υπερφόρτωση τελεστή + με συνάρτηση μέλος της κλάσης
    MyTime operator+(const MyTime &t)
    {
        MyTime t1;
        t1.second = this->second + t.second;
        t1.minute = this->minute + t.minute;
        t1.hour = this->hour + t.hour;
        if (t1.second > 59)
        {
            t1.second -= 60;
            t1.minute++;
        }
        if (t1.minute > 59)
        {
            t1.minute -= 60;
            t1.hour++;
        }
        if (t1.hour > 23)
        {
            t1.hour -= 24;
        }
        return t1;
    }

    // υπερφόρτωση τελεστή << (extractor) με φίλη συνάρτηση
    friend std::ostream &operator<<(std::ostream &os, const MyTime &t1);

    // υπερφόρτωση τελεστή >> (inserter) με φίλη συνάρτηση
    friend std::istream &operator>>(std::istream &is, MyTime &t1);

    // μετατροπή MyTime σε string
    operator std::string() const
    {
        std::stringstream ss;
        ss << hour << ":" << minute << ":" << second;
        return ss.str();
    }
};

std::ostream &operator<<(std::ostream &os, const MyTime &t1)
{
    os << t1.hour << ":" << t1.minute << ":" << t1.second;
    return os;
}

std::istream &operator>>(std::istream &is, MyTime &t1)
{
    is >> t1.hour >> t1.minute >> t1.second;
    return is;
}

int main()
{
    MyTime t1, t2, t3;
    std::cout << "Enter time Α (3 values): ";
    // std::cin >> t1;
    // χρήση συνάρτησης μέλους για την εισαγωγή δεδομένων αντικειμένου
    t1.set_time();
    std::cout << "Enter time Β (3 values): ";
    // χρήση υπερφορτωμένου τελεστή >> για την εισαγωγή δεδομένων αντικειμένου
    std::cin >> t2;
    // t2.set_time();

    // χρήση υπερφορτωμένου τελεστή +
    t3 = t1 + t2;

    std::cout << "A + B (show result using member function)" << std::endl;
    // χρήση συνάρτησης μέλους για την εμφάνιση στοιχείων αντικειμένου
    t3.show();

    std::cout << "A + B (show result using <<)" << std::endl;
    // χρήση υπερφορτωμένου τελεστή << για την εμφάνιση στοιχείων αντικειμένου
    std::cout << t3 << std::endl;

    std::cout << "A + B (show result using string conversion)" << std::endl;
    // μετατροπή αντικειμένου σε λεκτικό
    std::string temp = t3;
    std::cout << temp << std::endl;

    return 0;
}
