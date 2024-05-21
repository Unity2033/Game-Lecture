#include "Firebet.h"

Firebet::Firebet()
{
	health = 50;
	maxHP = health;
}

void Firebet::Recovery()
{
	health = maxHP;

	cout << "Firebet HP : " << health << endl;
}

void Firebet::Damage(int damage)
{
	health -= damage;

	cout << "Firebet HP : " << health << endl;
}


