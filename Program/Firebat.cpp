#include "Firebat.h"

Firebat::Firebat()
{
	health = 50;
	defense = 1;
}

void Firebat::Stat()
{
	cout << "Health : " << health << endl;
	cout << "Defense : " << defense << "\n" << endl;
}

Firebat::~Firebat()
{
	cout << "Release Firebat" << endl;
}
