#include "../Program/stdafx.h"
#include "Character.h"

Character::Character()
{
	cout << "Created Character" << endl;
}

void Character::RecruitTeammate(const weak_ptr<Character>& clone)
{
	character = clone;
}

Character::~Character()
{
	cout << "Release a Character" << endl;
}
