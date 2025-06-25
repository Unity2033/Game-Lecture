#include <iostream>
#include "../Program/Vector2.h"

using namespace std;

int main()
{
#pragma region 캡슐화
	// 객체의 상태와 그 상태를 조작하는 기능을 하나로 합친 다음,
	// 객체 외부에서 직접 접근하지 못하도록 제한하는 기능입니다.

	// Vector2 vector1;
	// Vector2 vector2;
	// 
	// vector1.Coodinate(1, 1);
	// vector2.Coodinate(2, 3);
	// 
	// Vector2 direction = vector1 + vector2;
	// 
	// direction++;
	// 
	// cout << "direction X : " << direction.X() << endl;
	// cout << "direction Y : " << direction.Y() << endl;
#pragma endregion

	return 0;
}
