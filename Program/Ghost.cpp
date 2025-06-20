#include "Ghost.h"

Ghost::Ghost()
{
	health = 45;
	defense = 0;
}

void Ghost::Stat()
{
	cout << "Health : " << health << endl;
	cout << "Defense : " << defense << "\n" << endl;
}

Ghost::~Ghost()
{
	cout << "Release Ghost" << endl;
}
