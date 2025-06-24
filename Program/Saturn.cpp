#include "Saturn.h"

Saturn::Saturn()
{
	ammonia = 0.01f;
	mass = 568000000000000000000000000.0;
	name = "Saturn";
}

void Saturn::Simulate()
{
	cout << "name : " << name << endl;
	cout << "mass : " << mass << endl;
	cout << "ammonia : " << ammonia << endl;
}

Saturn::~Saturn()
{
	cout << "Release Saturn" << endl;
}
