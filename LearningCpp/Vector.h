#pragma once
#include "src/Log.h"

template<typename T, size_t S>
class _Vector 
{
	public:
		_Vector()
		{
			Log("Created");
			//Allocate 2 elements
			ReAllocateMemory(2);
		}

		~_Vector()
		{
			Log("Deleted");
			delete[] m_Data;
		}

		void PushBack(const T& value) 
		{
			if(m_Size >= m_Capacity)
			{
				//Increase the size by half.
				ReAllocateMemory(m_Capacity + m_Capacity / 2);
			}

			m_Data[m_Size] = value;
			m_Size++;
		}

		T* GetData() const
		{
			return m_Data;
		}

		size_t GetSize() const
		{
			return m_Size;
		}
	private:
		void ReAllocateMemory(size_t newCapacity)
		{
			//allocate memory 
			T* newBlock = new T[newCapacity];

			//copy memory
			//if we downsize the vector
			if (newCapacity < m_Size) 
			{
				m_Size = newCapacity;
			}

			for (size_t i = 0; i < m_Size; i++)
			{
				newBlock[i] = m_Data[i];
			}

			//delete old memory
			delete[] m_Data;

			//assign new data
			m_Data = newBlock;
			m_Capacity = newCapacity;
		}

		T* m_Data = nullptr;
		size_t m_Size = 0;
		size_t m_Capacity = 0;
};