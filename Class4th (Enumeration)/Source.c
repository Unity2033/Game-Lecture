#include <stdio.h>
#include <windows.h>

enum State
{
	IDLE,
	ATTACK = 55,
	DIE
};

enum Color
{
	BLACK,
	DARKBLUE,
	DARKGREEN,
	DARKSKYBLUE,
	DARKRED,
	DARKVOILET,
	DARKYELLOW,
	GRAY,
	DARKGRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE
};

int main()
{
#pragma region ������
	// ���� ���� ��� ���� �ϳ��� �̸����� �����ؼ� ����ϴ�
	// �ڷ����Դϴ�.

	//	enum State state = ATTACK;
	//	
	//	switch (state)
	//	{
	//	case IDLE   : printf("IDLE");
	//		break;
	//	case ATTACK	: printf("ATTACK");
	//		break;
	//	case DIE	: printf("DIE");
	//		break;
	//	}

	// �������� ��� �߰��� �ִ� ���� �����ϰ� �Ǹ� ����� �����κ���
	// 1�� �����մϴ�.
#pragma endregion

#pragma region Color

	for (int i = 0; i < 15; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i + BLACK);

		printf("Attribute\n");
	}

#pragma endregion

	return 0;
}