#pragma once
#include "Terran.h"

class Ghost :public Terran
{
public:
	Ghost();

	void Recovery() override;
	void Damage(int damage) override;
};

