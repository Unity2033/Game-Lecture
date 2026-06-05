#include "Packet.h"
#include <iostream>

void Packet::Send(int frequency)
{
	std::cout << "frequency : " << frequency << std::endl;
}

void Packet::Send(const char* message)
{
	std::cout << "Message : " << message << std::endl;
}

void Packet::Send(const char* message, int frequency)
{
	std::cout << "Message : " << message << frequency <<  std::endl;
}
