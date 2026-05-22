#pragma once
#include "Material.h"

class Diamond : public Material
{
private:
	float hardness;

public:
	Diamond();

	void Describe();

	virtual void Promote() override;
};

