#include <iostream>

class MyTime
{
  private:
    int hour;
    int minute;
    int second;

  public:
    MyTime(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

    // void set_time()
    // {
    //     std::cin >> hour >> minute >> second;
    // }

    // void print()
    // {
    //     std::cout << hour << ":" << minute << ":" << second;
    // }

    friend std::ostream &operator<<(std::ostream &os, const MyTime &t){
        os << t.hour << ":" << t.minute << ":" << t.second;
        return os;
    }
    
    friend std::istream &operator>>(std::istream &is, MyTime &t){
        is >> t.hour >> t.minute >> t.second;
        return is;
    }

};

int main()
{
    MyTime t1(13, 50, 10);
    MyTime t2;
    std::cout << "Enter time ";
    // t2.set_time();
    std::cin >> t2;
    std::cout << t1;
    // t1.print();
    std::cout << std::endl;
    // t2.print();
    std::cout << t2;
    std::cout << std::endl;
    std::cout << t1 << std::endl;
}