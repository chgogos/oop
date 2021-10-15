#include <iostream>

using namespace std;

struct date {
    int year;
    int month;
    int day;
};

void print(date d){
    cout << d.year << "-" << d.month << "-" << d.day << endl;
}

int main(){
    date d {2021, 10, 15};
    print(d);
    d.day = 16;
    print(d);
}