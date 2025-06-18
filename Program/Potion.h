#pragma once
#include "Consumable.h"

class Potion : public Consumable
{
private:
	int health;
public:
	Potion();
	~Potion();
};

