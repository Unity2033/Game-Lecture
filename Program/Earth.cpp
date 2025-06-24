#include "Earth.h"

Earth::Earth()
{
	name = "Earth";
	oxygen = 21;
    
}

void Earth::Simulate()
{
	cout << "name : " << name << endl;
	cout << "mass : " << mass << endl;
	cout << "oxygen : " << oxygen << endl;
}

Earth::~Earth()
{
	cout << "Release Earth" << endl;
}
