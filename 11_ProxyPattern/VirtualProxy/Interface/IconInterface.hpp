#ifndef ICONINTERFACE_H
#define ICONINTERFACE_H

class IconInterface{
    virtual int getIconWidth(void) = 0;
    virtual int getIconHeight(void) = 0;
    virtual void PaintIcon(void) = 0;
};

#endif