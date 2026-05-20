#pragma once
class Publisher
{
public:
	void Send(int frequency);
	void Send(const char* message);
	void Send(const char* message, int frequency);
};

