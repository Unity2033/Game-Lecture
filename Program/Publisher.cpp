#include "Publisher.h"
#include <iostream>

void Publisher::Send(int frequency)
{
	std::cout << "frequency : " << frequency << std::endl;
}

void Publisher::Send(const char* message)
{
	std::cout << "Message : " << message << std::endl;
}

void Publisher::Send(const char* message, int frequency)
{
	std::cout << "Message : " << message << frequency <<  std::endl;
}
