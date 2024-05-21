#include "Marine.h"

Marine::Marine()
{
	health = 40;
	maxHP = health;
}

void Marine::Recovery()
{
	health = maxHP;

	cout << "Marine HP : " << health << endl;
}

void Marine::Damage(int damage)
{
	health -= damage;

	cout << "Marine HP : " << health << endl;
}
