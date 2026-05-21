#include "Emerald.h"

Emerald::Emerald()
{
	weight = 1.75f;
	clarity = 2.5f;
	name = "Emerald";
}

void Emerald::Describe()
{
	cout << "Name : " << name << endl;
	cout << "Weight : " << weight << "g" << endl;
	cout << "Clarity : " << clarity << "\n" << endl;	
}
