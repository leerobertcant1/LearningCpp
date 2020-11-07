#include <iostream>
#include <string>;
#include "src/Log.h";
#include <GLFW/glfw3.h>;

//Look at linking at library statically

/*
	Libraries are challenging in CPP compared to others.
	If you're not into package managers can do Static Linking.
	Better to keep the libraries in the folder.
	Should build our own source code if possible.
	Will use glfw - OpenGL.

	Static inside .exe, dynamic at run time.
	Static linking technically faster.
	Only need lib files.
	When adding, rightclick properties, cpp, dependencies

	Allows us to include files, can use angular as compiler includes.
	Need to link actual library.

	Link inside properties, linking, input.
	Can link library path under linker general.

	Quotes inside, angle outside -> convention.
*/

//int main()
//{
//	int init = glfwInit();
//
//	std::cin.get();
//}