#ifndef IMAGEICON_H
#define IMAGEICON_H

#include "../Interface/IconInterface.hpp"

#include <iostream>
#include <string>

using namespace std;


class ImageIcon : public IconInterface{
    private:
        string ImageURL;
        int my_Image_height = 0;
        int my_Image_width = 0;
    public: 
        ImageIcon() {
            int i = 100;
            int j = 1000000;
            /*
                Heavely/Expensive creation
            */
            while(i > 0){
                while(j > 0){
                    j--;
                }
                cout << "Loading " << 100 - i << "%" << endl;
                i--;
            }
        };
        ImageIcon(string URL, string my_category){
            ImageURL = URL;
            int i = 100;
            int j = 10000;
            /*
                Heavely/Expensive creation
            */
            cout << "Ah, Shit, This is a lot of work !!! \n";
            while(i > 0){
                while(j > 0){
                    j--;
                }
                cout << "Loading " << 100 - i << "%" << endl;
                i--;
            }
            cout << "WOW, That was really heavy to finish !!! Please do not do that again\n";
        }
        int getIconWidth(void) override;
        int getIconHeight(void) override;
        void PaintIcon(void) override;
};

int ImageIcon::getIconWidth(void){
    return my_Image_width;
}
int ImageIcon::getIconHeight(void){
    return my_Image_height;
}
void ImageIcon::PaintIcon(void){
    /*
        Heavy/Expensive LOAD that we don't want to execute
        but sadly we have to. 
        we will instantiate it through the proxy
    */
   cout << "ok, here is the paint\n";
}


#endif