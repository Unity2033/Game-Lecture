#pragma once
#include <iostream>

using namespace std;

class Character
{
private:
	weak_ptr<Character> weakPointer;

public:
	Character();
	void Partner(const weak_ptr<Character> & pointer);
	~Character();

};

