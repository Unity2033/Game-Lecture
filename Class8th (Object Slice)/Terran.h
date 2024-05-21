#pragma once
#include <iostream>

using namespace std;

class Terran
{
protected:
	int maxHP;
	int health;

public:
	Terran();

	virtual void Recovery();
	virtual void Damage(int damaga);
};

