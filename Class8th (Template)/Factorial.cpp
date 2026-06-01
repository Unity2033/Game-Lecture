#include "../Program/stdafx.h"
#include "Factorial.h"

Factorial::Factorial(int n) : value(1)
{
	for (int i = 1; i <= n; ++i)
	{
		value = value * i;
	}
}

long long Factorial::Result() const
{
	return value;
}
