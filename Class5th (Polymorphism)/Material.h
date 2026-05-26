#pragma once
#include <iostream>

using namespace std;

class Material
{
protected:
	float weight;
	const char * name;

public:
	void Describe();

	virtual void Promote();

	virtual ~Material();
};

