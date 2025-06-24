#include "Planet.h"

Planet::Planet()
{
	mass = 0.0;
	name = "Planet";
}

void Planet::Simulate()
{
	cout << "name : " << name << endl;
	cout << "mass : " << mass << endl;
}

Planet::~Planet()
{
	cout << "Release Planet" << endl;
}
