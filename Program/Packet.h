#pragma once
#include <iostream>

using namespace std;

class Packet
{
private:
	int error;

public:
	Packet();
	const int & Error();
	~Packet();
};

