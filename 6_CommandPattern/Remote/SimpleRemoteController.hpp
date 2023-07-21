#ifndef SIMPLE_REMOTE_CONTROLLER_HPP
#define SIMPLE_REMOTE_CONTROLLER_HPP

#include "../Command/Command.hpp"
#include "../Command/noCommand.hpp"

#include <iostream>
#include <strstream>
#include <iomanip>
#include <string>
#include <fstream>

#define REMOTE_AVAILABLE_SLOTS  7
using namespace std;

class SimpleRemoteController{
    private:
        Command* slotsOn[REMOTE_AVAILABLE_SLOTS];
        Command* slotsOff[REMOTE_AVAILABLE_SLOTS];
        Command* undoCommand;
        string memBuffer;
        ofstream outfile;
    public:
        SimpleRemoteController(){
            outfile = ofstream("CommandsLog.txt");
            for(int i = 0; i < REMOTE_AVAILABLE_SLOTS; i++){
                slotsOn[i] = new NoCommand();
                slotsOff[i] = new NoCommand();
            }
            undoCommand = new NoCommand();
        }
        void set_command(int slot, Command* on_command, Command* off_command){
            slotsOn[slot] = on_command;
            slotsOff[slot] = off_command;
        }
        void OnButton_was_pressed(int slot){
            memBuffer = typeid(*(slotsOn[slot])).name();
            outfile << memBuffer << endl;
            slotsOn[slot]->execute();
            undoCommand = slotsOn[slot];
        }
        void OffButton_was_pressed(int slot){
            memBuffer = typeid(*(slotsOff[slot])).name();
            outfile << memBuffer << endl;
            slotsOff[slot]->execute();
            undoCommand = slotsOff[slot];
        }
        void undoButton_was_pressed(){
            memBuffer = typeid(*undoCommand).name();
            outfile << memBuffer << endl;
            undoCommand->undo();
        }
};


#endif