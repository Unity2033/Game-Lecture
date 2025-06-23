#pragma once
#include "Accessory.h"

class Brooch : public Accessory
{
private:
	int immunity;

public:
	Brooch();
	virtual void Effect() override;
	virtual ~Brooch();
};

