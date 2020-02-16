#pragma once

class Address
{
public:
    string street;
    string city;
    string postal_code;

    Address(string street, string city, string postal_code) : street(street), city(city), postal_code(postal_code) {}
};