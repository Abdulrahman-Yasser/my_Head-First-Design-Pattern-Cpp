#include "Singleton.hpp"


int main(){
    Singleton only_one = Singleton::get_instance();
    only_one.print_me();
    Singleton_p* only_me_p = Singleton_p::get_instance();
    only_me_p->print_me();
}