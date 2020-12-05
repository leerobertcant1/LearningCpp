#include <iostream>
#include <string>
#include "src/Log.h"

/*
   C can't use namespaces. 
   Exist to avoid naming conflicts.
   If we call in similar functions in same context.
*/

namespace Me
{
    class Person
    {
        std::string m_Name;

        public:
            std::string GetName()
            {
                return m_Name;
            }

            void SetName(std::string name) 
            {
                m_Name = name;
            }
    };
}



int main()
{
    using namespace Me;

    Person person;

    person.SetName("Lee");

    LogString(person.GetName());

    std::cin.get();
}