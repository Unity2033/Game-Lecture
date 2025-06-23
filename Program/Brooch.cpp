#include "Brooch.h"

Brooch::Brooch()
{
	immunity = 5;
	name = "Brooch";
}

void Brooch::Effect()
{
	cout << "Name : " << name << endl;
	cout << "Effect : Immunity increases by " << immunity << endl;
}

Brooch::~Brooch()
{
	cout << "Release Brooch" << endl;
}
