#pragma once

#include <iostream>

using namespace std;

class Accessory
{
protected:
	const char * name;
public:
	Accessory();
	virtual void Effect() = 0;
	virtual ~Accessory();
};

