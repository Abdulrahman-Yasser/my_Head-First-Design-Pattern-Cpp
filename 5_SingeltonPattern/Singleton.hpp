#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <iostream>
#include <mutex>

class Singleton{
    private:
        Singleton(){

        }
        static Singleton my_instance;
    public:
        void print_me(void){
            std::cout << "Here i am\n";
        }
        static Singleton get_instance(void){
            return Singleton::my_instance;
        }
};




class Singleton_p{
    private:
        Singleton_p(){

        }
        static Singleton_p* my_instance;
		static std::mutex Singleton_mutex; // protection
    public:
        void print_me(void){
            std::cout << "Here i am\n";
        }
        static Singleton_p* get_instance(void){
        	std::lock_guard<std::mutex> gaurd(Singleton_p::Singleton_mutex);
            if(Singleton_p::my_instance == nullptr){
                Singleton_p::my_instance = new Singleton_p();
            }
            return Singleton_p::my_instance;
        }
};
Singleton_p* Singleton_p::my_instance = nullptr;
std::mutex Singleton_p::Singleton_mutex;

#endif