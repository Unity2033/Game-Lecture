#include "../Program/stdafx.h"
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

const Position& Position::operator - (const Position& clone)
{
	Position position(x - clone.x, y - clone.y);

	return position;
}

const Position& Position::operator * (const Position& clone)
{
	Position position(x * clone.x, y * clone.y);

	return position;
}

const Position& Position::operator / (const Position& clone)
{
	Position position(x / clone.x, y / clone.y);

	return position;
}


const Position & Position::operator ++()
{
	this->x++;
	this->y++;

	return *this;
}

const Position& Position::operator --()
{
	this->x--;
	this->y--;

	return *this;
}

const Position& Position::operator ++(int)
{
	Position clone(this->x, this->y);

	this->x++;
	this->y++;

	return clone;
}

const Position& Position::operator --(int)
{
	Position clone(this->x, this->y);

	this->x--;
	this->y--;

	return clone;
}

