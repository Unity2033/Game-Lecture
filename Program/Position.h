#pragma once
class Position
{
private:
	int x;
	int y;
public:
	Position(int x, int y); 

	const Position & operator + (const Position & clone);
};

