#include "Vector2.h"

void Vector2::Coodinate(int x, int y)
{
	this->x = x;
	this->y = y;
}

const int & Vector2::X()
{
	return x;
}

const int & Vector2::Y()
{
	return y;
}

const Vector2 & Vector2::operator+(const Vector2 & vector2)
{
	Vector2 clone;

	clone.x = this->x + vector2.x;
	clone.y = this->y + vector2.y;

	return clone;
}

const Vector2& Vector2::operator-(const Vector2& vector2)
{
	Vector2 clone;

	clone.x = this->x - vector2.x;
	clone.y = this->y - vector2.y;

	return clone;
}

const Vector2& Vector2::operator*(const Vector2& vector2)
{
	Vector2 clone;

	clone.x = this->x * vector2.x;
	clone.y = this->y * vector2.y;

	return clone;
}

const Vector2& Vector2::operator/(const Vector2& vector2)
{
	Vector2 clone;

	clone.x = this->x / vector2.x;
	clone.y = this->y / vector2.y;

	return clone;
}

const Vector2& Vector2::operator&(const Vector2& vector2)
{
	Vector2 clone;

	clone.x = this->x % vector2.x;
	clone.y = this->y % vector2.y;

	return clone;
}
