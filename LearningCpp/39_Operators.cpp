//#include <iostream>
//#include <string>;
//#include "src/Log.h";
//
///*
//	Anything can be an operator, such as a comma.
//	We can overload by giving a new meaning to.
//	Cpp has full control unlike C sharp.
//	Operators are just functions, helps to clean up and streamline.
//	Have to be careful with these, only use these minimally.
//*/
//
//struct Vector2
//{
//private:
//	Vector2 Add(const Vector2& vector) const
//	{
//		return Vector2(x + vector.x, y + vector.y);
//	}
//public:
//	float x, y;
//
//	Vector2(float x, float y)
//		: x(x), y(y) {}
//
//	Vector2 operator+(const Vector2& vector) const
//	{
//		return Add(vector);
//	}
//};
//
//int main()
//{
//	Vector2 position(1.0f, 2.0f);
//	Vector2 speed(0.50f, 1.5f);
//
//	Vector2 added = position + speed;
//	float x = added.x;
//
//	LogFloat(x);
//
//	std::cin.get();
//}