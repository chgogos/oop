#pragma once
#include "paper.hpp"

class paper;

class researcher
{
private:
    std::string name;
    std::string affiliation;
    std::vector<paper *> papers;

public:
    researcher(std::string n, std::string a) : name(n), affiliation(a)
    {
    }
    std::string get_name();
    std::string get_affiliation();
    std::vector<paper *> get_papers();
    void add_paper(paper *p);
    void display_info();
};

