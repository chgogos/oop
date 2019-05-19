/* COMPOSITE

Compose objects into tree structures to represent part-whole hierarchies. 
Composite lets clients treat individual objects and compositions of objects uniformly.

*/

#include "../ex067/command.hpp"
#include <vector>

class composite_command : public undoable_command
{
    private:
        std::vector<undoable_command*> commands;
    public:
        void add_command(undoable_command *command){
            commands.push_back(command);
        }
        virtual void execute() {
            for(auto command: commands){
                command->execute();
            }
        }

        virtual void undo() {
            for(auto command: commands){
                command->undo();
            }
        }
};

int main(){
    receiver receiver;
    undoable_command *p1 = new command_type1(101);
    undoable_command *p2 = new command_type2(102);
    undoable_command *p3 = new command_type1(201);
    composite_command *pcc1 = new composite_command();
    pcc1->add_command(p1);
    pcc1->add_command(p2);
    composite_command *pcc2 = new composite_command();
    pcc2->add_command(pcc1);
    pcc2->add_command(p3);

    receiver.accept_command(pcc2);

    delete p1;
    delete p2;
    delete p3;
    delete pcc1;
    delete pcc2;

    return 0;
}