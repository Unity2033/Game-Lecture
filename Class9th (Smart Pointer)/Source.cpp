#include <iostream>
#include "../Program/Packet.h"
#include "../Program/Resource.h"
#include "../Program/Character.h"

using namespace std;

int main()
{
#pragma region 스마트 포인터
	// 포인터를 사용하는 동시에 자동으로 메모리 관리를
	// 해주며, 경계 확인과 같은 추가 기능을 제공하는 포인터입니다.

#pragma region unique pointer
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수 
	// 있도록 되어 있는 포인터입니다.

	// unique_ptr<Packet> uniquePointer = make_unique<Packet>();
	// 
	// cout << "Error Code : " << uniquePointer->Error() << endl;
	// 
	// unique_ptr<Packet> uniqueReference = std::move(uniquePointer);
	// 
	// cout << "Error Code : " << uniqueReference->Error() << endl;

#pragma endregion

#pragma region shared pointer
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며,
	// 모든 포인터 객체가 자원 객체를 필요하지 않을 때 자원 객체를
	// 해제하도록 설계되어 있는 포인터입니다.

	// shared_ptr<Resource> oil = make_shared<Resource>();
	// 
	// 
	// shared_ptr<Resource> mineral = oil;
	// 
	// cout << "oil Reference Count : " << oil.use_count() << endl;
	// 
	// cout << "oil Reference Count : " << oil.use_count() << endl;
	// 
	// oil->Share(mineral);
	// mineral->Share(oil);

#pragma endregion

#pragma region weak pointer
	// 자원 객체를 소유하지 않기 때문에 공유 포인터로 관리되는
	// 자원 객체를 가리켜서 참조 개수에 영향을 미치지 않게 하는 포인터입니다.

	// shared_ptr<Character> warrior = make_shared<Character>();
	// 
	// shared_ptr<Character> wizard = make_shared<Character>();
	// 
	// warrior->Partner(wizard);
	// 
	// wizard->Partner(warrior);
	// 
	// cout << "Wizard Reference Count : " << wizard.use_count() << endl;
	// cout << "Warrior Reference Count : " << warrior.use_count() << endl;
#pragma endregion

#pragma endregion

	return 0;
}
