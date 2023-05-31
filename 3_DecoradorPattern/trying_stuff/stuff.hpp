#include <iostream>

class base{
    public:
    base(){
        std::cout << "\nThis is base \n";
    }
    base(int a){
        std::cout << "\nSecond constructor  " << a << std::endl;
    }
};

class derived1 : public base{
    public:
    derived1():base(5){
        std::cout << "\nThis is d1 \n";
    }
};

