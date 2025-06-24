#pragma once
#include "Planet.h"

class Earth : public Planet
{
private:
	int oxygen;
public:
	Earth();

	virtual void Simulate() override;

	virtual ~Earth();
};

