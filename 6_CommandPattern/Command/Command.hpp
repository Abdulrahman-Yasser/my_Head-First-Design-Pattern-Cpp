#ifndef COMMAND_H
#define COMMAND_H


class Command{
    protected:
    public:
        virtual ~Command() = default;
        virtual void execute(void) = 0;
        virtual void undo(void) = 0;
};

#endif