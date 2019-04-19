#include <iostream>

class task
{
private:
    int from;
    int to;
    std::string description;

public:
    task(int f, int t, std::string d) : from(f), to(t), description(d) {}

    std::string get_description()
    {
        return description;
    }

    void set_description(std::string s)
    {
        description = s;
    }

    bool has_conflict(task &other) const
    {
        return !(to <= other.from || other.to <= from);
    }

    friend std::ostream &operator<<(std::ostream &os, const task &t)
    {
        os << t.description << " (" << t.from << " - " << t.to << ")";
        return os;
    }
};

int main()
{
    task tasks[4]={  task(1,4,"task1"), 
                    task(4,9,"task2"), 
                    task(8,11,"task3"), 
                    task(12,14,"task4")};
    for(int i=0;i<4;i++){
        bool f=true;
        for(int j=0;j<4;j++){
            if (i!=j && tasks[i].has_conflict(tasks[j])) {
                f=false;
            }
        }
        if (f)
            std::cout << tasks[i] << std::endl;
    }
    return 0;
}
