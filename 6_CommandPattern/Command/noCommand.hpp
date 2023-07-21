#ifndef NO_COMMAND_HPP
#define NO_COMMAND_HPP

#include "Command.hpp"
#include <iostream>

class NoCommand : public Command{
    public:
        void execute(void) override{
            std::cout << "Not defined\n";
        }
        void undo(void) override{
            std::cout << "Not defined\n";
        }
};

#endif