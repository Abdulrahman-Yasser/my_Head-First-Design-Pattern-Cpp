#include <iostream>
#include <stdlib.h>
#include <stdio.h>

class String{
public:
        String() = default;
        String(const char* string){
            printf("Created !\n");
            m_size = sizeof(string);
            m_data = new char[m_size];
            memcpy(m_data, string, m_size);
        }
        String(const String &other){
            printf("Copied !\n");
            m_size = other.m_size;
            m_data = new char[m_size];
            memcpy(m_data, other.m_data, m_size);
        }
        String(String &&other){
            printf("Moved ! \n");
            m_size = other.m_size;
            m_data = other.m_data;

            other.m_size = 0;
            other.m_data = nullptr;
        }
        ~String(){
            delete m_data;
        }

        void print(){
            for(int i = 0; i < m_size; i++){
                printf("%c", m_data[i]);
            }
            printf("\n");
        }
    private:
        char *m_data;
        uint32_t m_size;
};

class Entity
{
public:
    Entity(const String& name) 
    : m_Name(name)
    {
    }
    Entity(String&& name):
    m_Name(std::move(name))
    {
    }
    void print(void){
        m_Name.print();
    }
private :
    String m_Name;
};

int main()
{
    // Entity entity(String("OK"));
    // entity.print();
    String s = "Hello";
    String dest = (String&&)s;
}