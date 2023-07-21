#include "Remote/SimpleRemoteController.hpp"

#include "Devices/Lights.hpp"
#include "Command/LightCommand.hpp"

#include "Devices/GuarageDoor.hpp"
#include "Command/GuarageDoorCommand.hpp"

#include "Devices/Stereo.hpp"
#include "Command/StereoForCD_Command.hpp"

#include "Devices/Fan.hpp"
#include "Command/CeilingFanCommand.hpp"

#include "Command/MacroCommand.hpp"

int main(){
    SimpleRemoteController my_remote;
    Command *temp_On, *temp_Off;
    Command* temp_commandOn_array[4];
    Command* temp_commandOff_array[4];

    Light Kitchen_lamp("192.168.0", "Kitchen");
    temp_On = new LightCommandOn(Kitchen_lamp);
    temp_Off = new LightCommandOff(Kitchen_lamp);
    my_remote.set_command(0, temp_On, temp_Off);
    temp_commandOn_array[0] = temp_On;
    temp_commandOff_array[0] = temp_Off;

    Light bedRoom_lamp("192.168.1", "bedRoom");
    temp_On = new LightCommandOn(bedRoom_lamp);
    temp_Off = new LightCommandOff(bedRoom_lamp);
    my_remote.set_command(1, temp_On, temp_Off);
    temp_commandOn_array[1] = temp_On;
    temp_commandOff_array[1] = temp_Off;

    GuarageDoor my_guarage("192.168.2", "guarage");
    temp_On = new GuarageDoorCommandUp(my_guarage);
    temp_Off = new GuarageDoorCommandDown(my_guarage);
    my_remote.set_command(2, temp_On, temp_Off);

    Fan my_fan("192.168.1.4", "my_fan");
    temp_On = new CeilingFanCommandOn(my_fan);
    temp_Off = new CeilingFanCommandOff(my_fan);
    my_remote.set_command(3, temp_On, temp_Off);
    temp_commandOn_array[2] = temp_On;
    temp_commandOff_array[2] = temp_Off;

    Sterio my_sterio("192.168.1.4", "my_sterio");
    temp_On = new SterioForCD_CommandOn(my_sterio);
    temp_Off = new SterioForCD_CommandOff(my_sterio);
    my_remote.set_command(4, temp_On, temp_Off);
    temp_commandOn_array[3] = temp_On;
    temp_commandOff_array[3] = temp_Off;


    temp_On = new MacroCommandOn(temp_commandOn_array);
    temp_Off = new MacroCommandOff(temp_commandOff_array);
    my_remote.set_command(5, temp_On, temp_Off);


    my_remote.OnButton_was_pressed(0);
    my_remote.OffButton_was_pressed(0);
    my_remote.OnButton_was_pressed(1);
    my_remote.OffButton_was_pressed(1);
    my_remote.OnButton_was_pressed(2);
    my_remote.OffButton_was_pressed(2);
    my_remote.OnButton_was_pressed(3);
    my_remote.OffButton_was_pressed(3);
    my_remote.OnButton_was_pressed(4);
    my_remote.OffButton_was_pressed(4);

    std::cout << "\n-----------------------------\n";
    my_remote.OnButton_was_pressed(5);
    my_remote.OffButton_was_pressed(5);


}

