#include <iostream>
#include <string>

using namespace std;

class dog
{
private:
    string name;
    string status;

public:
    dog(string n, string s) : name(n), status(s) {}

    void set_status(string s)
    {
        status = s;
    }

    string get_status()
    {
        return status;
    }

    void info()
    {
        cout << name << " " << status << endl;
    }

    void eat()
    {
        status = "happy";
    }
};

int main()
{
    dog d1("Alf", "sleep");
    d1.info();
    d1.set_status("angry");
    d1.info();
    d1.eat();
    d1.info();
}