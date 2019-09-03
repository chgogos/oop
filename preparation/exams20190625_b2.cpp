#include <iostream>
#include <vector>

int get_flight_duration(std::string from, std::string to, std::string airplane_type)
{
    std::string data[5][4] = {
        {"A", "B", "T1", "200"},
        {"A", "B", "T2", "180"},
        {"A", "C", "T1", "150"},
        {"A", "C", "T2", "140"},
        {"A", "D", "T2", "240"},
    };
    for (int i = 0; i < 5; i++)
    {
        if ((data[i][0] == from) && (data[i][1] == to) && (data[i][2] == airplane_type))
        {
            return stoi(data[i][3]);
        }
    }
    return -1;
}

class flight
{
private:
    int flight_number;
    std::string from;
    std::string to;
    int duration;

public:
    flight(int fn, std::string f, std::string t, std::string airplane_type) : flight_number(fn), from(f), to(t)
    {
        duration = get_flight_duration(from, to, airplane_type);
    }
    void delay_flight(int minutes)
    {
        duration += minutes;
    }
    void display()
    {
        std::cout << "Flight [flight number: " << flight_number << " from: " << from << " to: " << to << " duration: " << duration << std::endl;
    }
};

class plane
{
private:
    std::string airplane_type;
    int max_speed;
    std::string tail_id;
    std::vector<flight> flights;

public:
    plane(std::string type, int ms, std::string tid) : airplane_type(type), max_speed(ms), tail_id(tid) {}
    void add_flight(flight &a_flight)
    {
        flights.push_back(a_flight);
    }
    void display()
    {
        std::cout << "Plane [type: " << airplane_type << " maximum speed: " << max_speed << " tail id: " << tail_id << "]" << std::endl;
        for (flight f : flights)
        {
            f.display();
        }
    }
};

int main()
{
    plane p1("T1", 450, "AB100");
    plane p2("T2", 500, "ZX900");

    flight f1(1001, "A", "B", "T1");
    flight f2(1002, "A", "C", "T1");
    flight f3(1003, "A", "D", "T2");
    f3.delay_flight(5);

    p1.add_flight(f1);
    p1.add_flight(f2);
    p2.add_flight(f3);

    p1.display();
    p2.display();
}
