#pragma once

#include <iostream>

using namespace std;

class Planet
{
protected:
	double mass;
	const char* name;

public:
	Planet();
	virtual void Simulate();
	virtual ~Planet();

};

