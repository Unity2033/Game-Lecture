#pragma once
#include "Planet.h"

class Saturn : public Planet
{
private:
	float ammonia;
public:
	Saturn();

	virtual void Simulate() override;

	virtual ~Saturn();
};

