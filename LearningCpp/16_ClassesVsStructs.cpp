#include <iostream>
#include "src/Log.h";

/*
	No diff between struct and class
	struct has a default Public but Class private.

	Structs only here for backwards compatibility with C.
	Good practice to use the struct as a property class.
	Even then a class maybe better.
*/

//int main()
//{
//	Player player = Player{};
//	player.speed = 20;
//	player.x = 10;
//	player.y = 10;
//
//	player.Move(30, 40);
//
//	PlayerStruct playerStruct = PlayerStruct();
//	playerStruct.speed = 20;
//	playerStruct.x = 10;
//	playerStruct.y = 10;
//
//	std::cin.get();
//}
//
//class Player
//{
//	public:
//		int speed, x, y;
//
//		void Move(int _x, int _y)
//		{
//			x = _x;
//			y = _y;
//		}
//};
//
//struct PlayerStruct
//{
//	int speed, x, y;
//};