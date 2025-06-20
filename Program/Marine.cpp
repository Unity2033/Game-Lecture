#include "Marine.h"

Marine::Marine()
{
	health = 40;
	defense = 0;
}

void Marine::Stat()
{
	cout << "Health : " << health << endl;
	cout << "Defense : " << defense << "\n" << endl;
}

Marine::~Marine()
{
	cout << "Release Marine" << endl;
}
