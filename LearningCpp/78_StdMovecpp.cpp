#include <iostream>
#include <string>
#include "src/Log.h"

/*
    Move existing object into existing object.
*/

class String
{
    public:
        String() = default;
        String(const char* string)
        {
            m_size = strlen(string);
            //mem on the heap allocated
            m_data = new char[m_size];
            memcpy(m_data, string, m_size);
        }

        String(String&& move) noexcept
        {
            //points to the same block of data
            m_size = move.m_size;
            m_data = move.m_data;

            //Need to shallow copy to rewire the pointers
            move.m_data = nullptr;
            move.m_size = 0;
        }

        //Moving object into ourselves, need to overwrite
        String& operator=(String&& move2) noexcept
        {
            //check the object first;
            if (this != &move2) 
            {
                //points to the same block of data
                m_size = move2.m_size;
                m_data = move2.m_data;

                //Needed so don't get a memory leak.
                delete[] m_data;

                //Need to shallow copy to rewire the pointers
                move2.m_data = nullptr;
                move2.m_size = 0;
            }

            return *this;
        }

        ~String()
        {
            delete m_data;
        }

    private:
        char* m_data;
        uint32_t m_size;
};


int main()
{
    String* s = new String(std::move("ayup"));

    std::cin.get();
}