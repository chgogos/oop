#include <iostream>
#include <string>
#include "dog.hpp"

using namespace std;

dog::dog(string n, string s) : name(n), status(s) {}

void dog::set_status(string s)
{
    status = s;
}

string dog::get_status()
{
    return status;
}

void dog::info()
{
    cout << name << " " << status << endl;
}

void dog::eat()
{
    status = "happy";
}
