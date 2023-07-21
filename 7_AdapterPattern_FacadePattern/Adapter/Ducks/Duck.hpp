#ifndef DUCK_HPP
#define DUCK_HPP

class Duck{
    public:
        virtual ~Duck(void) = default;
        virtual void quack(void) = 0;
        virtual void fly(void) = 0;
};

#endif