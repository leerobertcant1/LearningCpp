//#include <iostream>
//#include <string>
//#include "src/Log.h"
//
///*
//    Move objects around with R Value references.
//    Object in function is copied, the bigger the object the bigger the problem.
//
//    Move semantics just moves the object.
//*/
//
////std::move is better does the same thing.
//
//class String
//{
//    public:
//        String() = default;
//        String(const char* string)
//        {
//            m_size = strlen(string);
//            //mem on the heap allocated
//            m_data = new char[m_size];
//            memcpy(m_data, string, m_size);
//        }
//
//        String(String&& move) noexcept
//        {
//            //points to the same block of data
//            m_size = move.m_size;
//            m_data = move.m_data;
//
//            //Need to shallow copy to rewire the pointers
//            move.m_data = nullptr;
//            move.m_size = 0;
//        }
//
//        ~String()
//        {
//            delete m_data;
//        }
// 
//    private:
//        char* m_data;
//        uint32_t m_size;
//};
//
//
//int main()
//{
//
//    std::cin.get();
//}