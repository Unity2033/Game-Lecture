#include "stdafx.h"
#include "Position.h"

Position::Position(int x, int y)
{
	this->x = x;
	this->y = y;
}

const Position & Position::operator + (const Position & clone)
{
	Position position(x + clone.x, y + clone.y);

	return position;
}
