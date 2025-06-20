#pragma once
#include <iostream>

using namespace std;

class Terran
{
protected:
	int health;
	int defense;
public:
	Terran();

	// 가상 함수는 한 개 이상의 가상 함수를 포함하는 클래스가 있을 때
	// 객체 주소에 가상 함수 테이블을 추가합니다.
	virtual void Stat();

	virtual ~Terran();
};

