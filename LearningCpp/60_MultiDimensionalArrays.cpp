#include <iostream>
#include <string>
#include "src/Log.h"

/*
  Useful for 2D and 3D data. Pointers matter here.
  Array of arrays. 

  Useful for buffers, can have an array of pointers.

  Not creating ints just allocating memory.
  int sets size of allocation.

  Need to iterate when deleting, or memory leak. Deletes the top level.

  Results in memory fragmentation though as many pointers.
  Performance is not good will get Cache miss.
  Alot slower to iterate this way than if a single array.
*/

//int main()
//{
//    int** twoDArray = new int*[10]; //integer pointer - 10 arrays
//
//    for (int i = 0; i < 10; i++)
//    {
//        twoDArray[i] = new int[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } ;
//    }
//
//    for (int i = 0; i < 10; i++)
//    {
//        delete  twoDArray[i];
//    }
//   
//    delete twoDArray;
//
//    std::cin.get();
//}