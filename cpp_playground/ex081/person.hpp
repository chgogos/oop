#pragma once

class Person
{
    static int life_expectancy;

public:
    string name;
    int age;
    Address *address;
    Person(int age, string name);
    Person(int age, string name, string street, string city, string postal_code);
    Person(const Person& p);
    ~Person();
    void display_info();
};
