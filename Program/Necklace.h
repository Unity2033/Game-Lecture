#pragma once
#include "Accessory.h"
class Necklace : public Accessory
{
private:
	int accuracy;

public:
	Necklace();

	virtual void Effect() override;

	virtual ~Necklace();
};

