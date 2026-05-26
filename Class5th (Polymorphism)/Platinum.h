#pragma once
#include "Material.h"

class Platinum : public Material
{
public :
	Platinum();

	void Describe();

	virtual void Promote() override;

	virtual ~Platinum();
};

