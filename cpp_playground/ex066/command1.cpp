/* COMMAND

Encapsulate a request as an object, thereby letting your parameterize clients with
different requests, queue or log requests, and support undoable operations

*/

#include <iostream>
#include <chrono>
#include <thread>

class command
{
public:
    virtual ~command() = default;
    virtual void execute() = 0;
};

class receiver
{
public:
    void accept_command(command *cmd)
    {
        cmd->execute();
    }
};

class instantaneous_command_type1 : public command
{
public:
    virtual void execute()
    {
        std::cout << "executing command of type 1" << std::endl;
    }
};

class instantaneous_command_type2 : public command
{
public:
    virtual void execute()
    {
        std::cout << "executing command of type 2" << std::endl;
    }
};

class delayed_command_type : public command
{
private:
    unsigned int delay;

public:
    delayed_command_type(unsigned int delay_in_ms) : delay(delay_in_ms) {}

    virtual void execute()
    {
        std::chrono::milliseconds duration(delay);
        std::this_thread::sleep_for(duration);
        std::cout << "executing command of delayed type" << std::endl;
    }
};

int main()
{
    receiver receiver;
    command *p1 = new instantaneous_command_type1();
    command *p2 = new delayed_command_type(1000);
    command *p3 = new instantaneous_command_type2();
    receiver.accept_command(p1);
    receiver.accept_command(p2);
    receiver.accept_command(p3);

    delete p1;
    delete p2;
    delete p3;

    return 0;
}