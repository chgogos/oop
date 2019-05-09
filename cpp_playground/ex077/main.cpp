#include "paper.hpp"
#include "researcher.hpp"

int main()
{
    researcher r1("Christos Gogos", "UoI");
    researcher r2("Christos Valouxis", "UoP");
    researcher r3("Efthymios Housos", "UoP");
    researcher r4("George Goulas", "UoP");
    researcher r5("Panayiotis Alefragis", "UoPe");

    paper p1("A two phase approach for the nurse rostering problem", "EJOR");
    paper p2("An improved multi staged algorithmic process for the examination timetabling problem", "ANOR");

    r1.add_paper(&p1);
    r2.add_paper(&p1);
    r3.add_paper(&p1);
    r4.add_paper(&p1);
    r5.add_paper(&p1);

    r1.add_paper(&p2);
    r5.add_paper(&p2);
    // r3.add_paper(&p2);
    p2.add_author(&r3);

    std::cout << "Papers per author" << std::endl;
    r1.display_info();
    r2.display_info();
    r3.display_info();
    r4.display_info();
    r5.display_info();

    std::cout << "Authors per paper" << std::endl;
    p1.display_info();
    p2.display_info();
}