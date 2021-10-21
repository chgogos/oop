#include <string>

using namespace std;

class dog
{
private:
    string name;
    string status;

public:
    dog(string n, string s);

    void set_status(string s);

    string get_status();

    void info();

    void eat();
};
