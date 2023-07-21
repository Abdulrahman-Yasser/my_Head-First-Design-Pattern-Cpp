#ifndef TURKEY_HPP
#define TURKEY_HPP

class Turkey{
    public:
        virtual ~Turkey() = default;
        virtual void gobble() = 0;
        virtual void fly() = 0;
};

#endif