#include "command.hpp"

int main()
{
    receiver receiver;
    undoable_command *p1 = new command_type1(101);
    undoable_command *p2 = new command_type2(102);
    undoable_command *p3 = new command_type1(201);
    receiver.accept_command(p1);
    receiver.accept_command(p2);
    receiver.accept_command(p3);
    receiver.undo_last_command();
    receiver.undo_last_command();
    receiver.undo_last_command();

    delete p1;
    delete p2;
    delete p3;

    return 0;
}
