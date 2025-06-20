#pragma once
#include "Terran.h"
class Ghost : public Terran
{
public:
	Ghost();
	virtual void Stat() override;
	virtual ~Ghost();
};

