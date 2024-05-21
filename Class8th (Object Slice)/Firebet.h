#pragma once
#include "Terran.h"

class Firebet :public Terran
{
public:
	Firebet();

	void Recovery() override;
	void Damage(int damage) override;
};

