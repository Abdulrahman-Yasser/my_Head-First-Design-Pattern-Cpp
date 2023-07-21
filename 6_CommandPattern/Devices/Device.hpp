#ifndef DEVICE_HPP
#define DEVICE_HPP

#include <string>

class Device{
    protected:
        std::string Device_ip;
    public:
        virtual ~Device() = default;
};


#endif