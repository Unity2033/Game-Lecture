#include "Computer.h"

void Computer::Use()
{
	Mouse::Connect();
	Keyboard::Connect();

	Select();
	Input();
}
