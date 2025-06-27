#include "Packet.h"

Packet::Packet()
{
	cout << "Created Packet" << endl;
}

const int& Packet::Error()
{
	return error;
}

Packet::~Packet()
{
	cout << "Release Packet" << endl;
}


