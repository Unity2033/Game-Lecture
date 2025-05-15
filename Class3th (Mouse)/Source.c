#include <stdio.h>
#include <windows.h>

void Mouse(int* x, int* y)
{
	// HANDLE : 시스템 리소스를 참조할 때 사용되는 Windows의 특정한 유형입니다.
	HANDLE handleInput;
	HANDLE handleOutput;

	DWORD dword;

	// 콘솔 입력 이벤트에 대한 정보를 포함하는 구조체입니다.
	INPUT_RECORD inputRecord;

	// STD_INPUT_HANDLE : 표준 입력에 대한 핸들을 검색합니다.
	// STD_OUTPUT_HANDLE : 표준 출력에 대한 핸들을 검색합니다.
	handleInput = GetStdHandle(STD_INPUT_HANDLE);
	handleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleMode(handleInput, ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT);

	// ENABLE_PROCESSED_INPUT 
	// 시스템은 Ctrl + C, Back Space와 같은 특정 입력을 처리할 수 있습니다.

	// ENABLE_MOUSE_INPUT
	// 콘솔 창에서 입력 및 위치 변경에 대한 내용을 마우스 이벤트로 보고할 수 있습니다.

	while (1)
	{
		ReadConsoleInput(handleInput, &inputRecord, 1, &dword);

		if (inputRecord.EventType == MOUSE_EVENT)
		{
			if (inputRecord.Event.MouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED)
			{
				*x = inputRecord.Event.MouseEvent.dwMousePosition.X;
				*y = inputRecord.Event.MouseEvent.dwMousePosition.Y;

				return;
			}
		}
	}
}

void Position(int x, int y)
{
	// X와 Y축을 설정하는 구조체입니다.
	COORD position = { x, y };

	// 콘솔 커서의 좌표를 설정하는 함수입니다.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	int x, y = 0;

	while (1)
	{
		Mouse(&x, &y);

		system("cls");

		Position(x, y);

		printf("★");
	}

	return 0;
}