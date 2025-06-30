#include "Character.h"

Character::Character()
{
	cout << "Created Character" << endl;
}

void Character::Partner(const weak_ptr<Character>& pointer)
{
	weakPointer = pointer;
}

Character::~Character()
{
	cout << "Release Character" << endl;
}
