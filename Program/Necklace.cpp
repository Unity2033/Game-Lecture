#include "Necklace.h"

Necklace::Necklace()
{
	accuracy = 10;

	name = "Necklace";
}

void Necklace::Effect()
{
	cout << "Name : " << name << endl;
	cout << "Effect : " << "Accuracy increases by " << accuracy << endl;
}

Necklace::~Necklace()
{
	cout << "Release Necklace" << endl;
}
