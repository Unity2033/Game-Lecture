#include <stdio.h>
#include <windows.h>

int main()
{
#pragma region GetAsyncKeyState

	//	const char* dialog[10];
	//	
	//	dialog[0] = "안녕하세요?";
	//	dialog[1] = "누구신가요?";
	//	dialog[2] = "탐정입니다.";
	//	dialog[3] = "저는 의뢰인입니다.";
	//	dialog[4] = "수상한 사건이 있다고 해서 왔습니다.";
	//	dialog[5] = "어떻게 알고 오셨나요?";
	//	dialog[6] = "이 사건에 대해 아시는 게 있나요?";
	//	dialog[7] = "조금 알고 있는데...? 알려드릴까요?";
	//	dialog[8] = "말씀해주세요.";
	//	dialog[9] = "...................";
	//	
	//	// 짝수 : 탐정 : 
	//	// 홀수 : 의뢰인 : 
	//	
	//	int size = 10;
	//	
	//	int i = 0;
	//	
	//	while (i < size)
	//	{
	//		// 0x0000 : 이전에 누른 적이 없고 호출 시점에도 눌러있지 않은 상태
	//	
	//		// 0x0001 : 이전에 누른 적이 있고 호출 시점에는 눌러있지 않은 상태
	//	
	//		// 0x8000 : 이전에 누르 적이 없고 호출 시점에는 눌러있는 상태
	//	
	//		// 0x8001 : 이전에 누른 적이 있고 호출 시점에도 눌려있는 상태
	//	
	//	
	//		if (GetAsyncKeyState(VK_SPACE) & 0x0001)
	//		{
	//			if (i % 2 == 0)
	//			{
	//				printf("탐정 : %s\n", dialog[i]);
	//			}
	//			else
	//			{
	//				printf("의뢰인 : %s\n", dialog[i]);
	//			}
	//	
	//			i++;
	//		}
	//	}


#pragma endregion

	return 0;
}