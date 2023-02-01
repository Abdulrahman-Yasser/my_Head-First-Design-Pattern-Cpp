
#ifndef IMAGEPROXY_H
#define IMAGEPROXY_H

#include "../Interface/IconInterface.hpp"
#include "../RealThing/ImageIcon.hpp"
#include <iostream>
#include <string>
#include <thread>

class ImageProxy : public IconInterface{
    private :
        ImageIcon* imageIcon = nullptr;
        string imageURL;
        bool retrieving = false;
        void my_imageIcon_instantiation(void);
    public:
        ImageProxy() = default;
        ImageProxy(string URL){
            imageURL = URL;
        }
        int getIconWidth(void) override;
        int getIconHeight(void) override;
        void PaintIcon(void) override;
};
void ImageProxy::my_imageIcon_instantiation(void){
    try{
        imageIcon = new ImageIcon(imageURL, "CD Cover");
    }catch(exception e){
        cout << "Failed\n";
    }
}

int ImageProxy::getIconWidth(void){
    if(imageIcon != nullptr){
        return imageIcon->getIconWidth();
    }else{
        return 800;
    }
}

int ImageProxy::getIconHeight(void){
    if(imageIcon != nullptr){
        return imageIcon->getIconHeight();
    }else{
        return 600;
    }
}

void ImageProxy::PaintIcon(void){
    if(imageIcon != nullptr){
        imageIcon->PaintIcon();
    }else{
        cout << "Loading CD cover, please wait...\n";
        if (!retrieving) {
            retrieving = true;
            my_imageIcon_instantiation();
        }
    }
}


#endif