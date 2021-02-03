// https://www.youtube.com/watch?v=eUsTO5BO3WI&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=75

#include <iostream>
#include <tuple>

using namespace std;

std::tuple<string, int> create_person()
{
    return {"Nikos", 22};
}

void example1()
{
    tuple<string, int> p = create_person();
    string &name = get<0>(p);
    int age = get<1>(p);
    cout << name << " " << age << endl;
}

void example2()
{
    string name;
    int age;
    tie(name, age) = create_person();
    cout << name << " " << age << endl;
}

void example3()
{
    auto [name, age] = create_person();
    cout << name << " " << age << endl;
}

int main()
{
    example1();
    example2();
    example3(); // c++17 structured bindings
}

/*
Nikos 22
Nikos 22
Nikos 22
*/