#include <iostream>
#include "Marine.h"
#include "Firebet.h"
#include "Ghost.h"

void Beacon(Terran * terran)
{
	terran->Recovery();
}

int main()
{
#pragma region 객체 잘림
	// 크기가 작은 상위 클래스에 상위 클래스보다 더 큰 
	// 하위 클래스를 대입하여 넣을 경우 클래스의 내용이
	// 잘리는 현상입니다.

	// Marine marine;
	// 
	// marine.Damage(10);
	// 
	// Firebet firebet;
	// 
	// firebet.Damage(10);
	// 
	// Ghost ghost;
	// 
	// ghost.Damage(10);
	// 
	// Beacon(&marine);
	// Beacon(&firebet);
	// Beacon(&ghost);
#pragma endregion

}


