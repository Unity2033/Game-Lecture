#pragma once
#include "Mouse.h"
#include "Keyboard.h"

class Computer : public Mouse, public Keyboard
{

public:
	void Use();
};

