#pragma once
#include "Terran.h"

class Marine : public Terran
{
public:
	Marine();

	void Recovery() override;
	void Damage(int damage) override;
};

