#pragma once

class Vector2
{
private:
	int x;
	int y;
public:
	void Coodinate(int x, int y);
	const int & X();
	const int & Y();

	const Vector2 & operator + (const Vector2 & vector2);
	const Vector2 & operator - (const Vector2 & vector2);
	const Vector2 & operator * (const Vector2 & vector2);
	const Vector2 & operator / (const Vector2 & vector2);
	const Vector2 & operator & (const Vector2 & vector2);

	const Vector2& operator++();
	const Vector2& operator--();
	const Vector2& operator++(int);
	const Vector2& operator--(int);


};

