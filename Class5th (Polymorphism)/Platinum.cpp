#include "Platinum.h"

Platinum::Platinum()
{
	weight = 1.5f;
	name = "Platinum";
}

void Platinum::Describe()
{
	cout << "Name : " << name << endl;
	cout << "Weight : " << weight << "g" << endl;
}

void Platinum::Promote()
{
	cout << "Darius" << endl;
	cout << "Eternals Capsule\n" << endl;
}

Platinum::~Platinum()
{
	cout << "Release a Platinum" << endl;
}
