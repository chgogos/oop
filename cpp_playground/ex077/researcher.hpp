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

/*
Papers per author
Researcher: Christos Gogos UoI
1. A two phase approach for the nurse rostering problem EJOR
2. An improved multi staged algorithmic process for the examination timetabling problem ANOR
Researcher: Christos Valouxis UoP
1. A two phase approach for the nurse rostering problem EJOR
Researcher: Efthymios Housos UoP
1. A two phase approach for the nurse rostering problem EJOR
2. An improved multi staged algorithmic process for the examination timetabling problem ANOR
Researcher: George Goulas UoP
1. A two phase approach for the nurse rostering problem EJOR
Researcher: Panayiotis Alefragis UoPe
1. A two phase approach for the nurse rostering problem EJOR
2. An improved multi staged algorithmic process for the examination timetabling problem ANOR
Authors per paper
A two phase approach for the nurse rostering problem, EJOR
1. Christos Gogos UoI
2. Christos Valouxis UoP
3. Efthymios Housos UoP
4. George Goulas UoP
5. Panayiotis Alefragis UoPe
An improved multi staged algorithmic process for the examination timetabling problem, ANOR
1. Christos Gogos UoI
2. Panayiotis Alefragis UoPe
3. Efthymios Housos UoP
*/