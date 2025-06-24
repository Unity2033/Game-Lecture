#include <iostream>
#include "../Program/Brooch.h"
#include "../Program/Necklace.h"

using namespace std;

int main()
{
#pragma region 추상화
	// 복잡한 시스템이나 객체의 내부의 세부사항은 숨기고, 필요한 부분만을
	// 외부에서 사용할 수 있게 단순화시키는 기능입니다. 

	//	Accessory * list[2];
	//	
	//	list[0] = new Brooch;
	//	list[1] = new Necklace;
	//	
	//	for (int i = 0; i < 2; i++)
	//	{
	//		list[i]->Effect();
	//	}
	//	
	//	for (int i = 0; i < 2; i++)
	//	{
	//		delete list[i];
	//	}

	// 추상 클래스는 정의되어 있지 않은 함수가 있으므로, 
	// 객체를 생성할 수 없습니다.
#pragma endregion


	return 0;
}
