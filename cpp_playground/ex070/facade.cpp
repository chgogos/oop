#include <iostream>

/* FACADE

Provide a unified interface to a set of interfaces in a subsystem. 
Facade defines a higher level interface that makes the system easier to use.

*/

class subsystem_a
{
public:
    void do_work_1()
    {
        std::cout << "SUBSYSTEM A - WORK 1" << std::endl;
    }
    void do_work_2()
    {
        std::cout << "SUBSYSTEM A - WORK 2" << std::endl;
    }
};

class subsystem_b
{
public:
    void do_work_1()
    {
        std::cout << "SUBSYSTEM B - WORK 1" << std::endl;
    }
    void do_work_2()
    {
        std::cout << "SUBSYSTEM B - WORK 2" << std::endl;
    }
};

class subsystem_c
{
public:
    void do_work_1()
    {
        std::cout << "SUBSYSTEM C - WORK 1" << std::endl;
    }
    void do_work_2()
    {
        std::cout << "SUBSYSTEM C - WORK 2" << std::endl;
    }
};

class facade
{
private:
    subsystem_a ssa;
    subsystem_b ssb;
    subsystem_c ssc;

public:
    facade(subsystem_a a, subsystem_b b, subsystem_c c) : ssa(a), ssb(b), ssc(c) {}

    void work1(){
        ssa.do_work_1();
        ssb.do_work_1();
        ssc.do_work_1();
    }

    void work2(){
        ssa.do_work_2();
        ssb.do_work_2();
        ssc.do_work_2();
    }

};

int main()
{
    subsystem_a ssa;
    subsystem_b ssb;
    subsystem_c ssc;
    facade f(ssa,ssb,ssc);
    f.work1();
    f.work2();
}