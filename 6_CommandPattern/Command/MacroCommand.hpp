#ifndef MACRO_COMMAND_HPP
#define MACRO_COMMAND_HPP

#include "Command.hpp"


class MacroCommandOn : public Command{
    private:
        Command* my_commands[4];
    public:
        MacroCommandOn(Command* the_commands[]){
            for (int i = 0; i < 4; i++) {
                my_commands[i] = the_commands[i];
            }
        }
        void execute() override{
            for (int i = 0; i < 4; i++) {
                my_commands[i]->execute();
            }
        }
        void undo() override{
            for (int i = 3; i >= 0; i--) {
                my_commands[i]->undo();
            }
        }
};

class MacroCommandOff : public Command{
    private:
        Command* my_commands[4];
    public:
        MacroCommandOff(Command* the_commands[]){
            for (int i = 0; i < 4; i++) {
                my_commands[i] = the_commands[i];
            }
        }
        void execute() override{
            for (int i = 0; i < 4; i++) {
                my_commands[i]->execute();
            }
        }
        void undo() override{
            for (int i = 3; i >= 0; i--) {
                my_commands[i]->undo();
            }
        }
};
#endif