#include <stdio.h> 

int count;

int stage = 1;

void Clear()
{
	stage += 1;
}

void Increase()
{
	static int score = 0;

	score++;

	printf("score : %d\n", score);
}

void main()
{	
#pragma region 메모리

#pragma region CODE 영역
	// 프로세스가 실행할 코드와 매크로 상수가
	// 기계어 형태로 저장되는 공간입니다.

#pragma endregion

#pragma region DATA 영역
	// 전역 변수와 정적 변수가 저장되는 공간입니다.

#pragma endregion

#pragma region BSS 영역
	// 초기화되지 않은 전역 변수가
	// 저장되는 공간입니다.

#pragma endregion

#pragma region STACK 영역
	// 함수의 호출과 관계되는 지역 변수와
	// 매개 변수가 저장되는 영역입니다.

#pragma endregion

#pragma region HEAP 영역
	// 사용자가 직접 할당하는 메모리 공간입니다.

#pragma endregion

#pragma endregion

#pragma region 지역 변수
	// 함수 내부에 선언된 변수로, 함수 내부에서만 사용 가능하며,
	// { }를 벗어나는 시점에 메모리가 해제되는 특징을 가지고 있는 변수입니다.

	//	int x = 10;
	//	
	//	{
	//		int x = 20;
	//	
	//		printf("x의 값 : %d\n", x);
	//	}
	//	
	//	printf("x의 값 : %d\n", x);
#pragma endregion

#pragma region 전역 변수
	// 함수 외부에서도 접근이 가능하며, 프로그램이 실행될 때
	// 메모리에서 생성되고, 프로그램이 종료되어야만 메모리에서 사라지는 
	// 특징을 가지고 있는 변수입니다.

	// Clear();
	// Clear();
	// Clear();
	// 
	// printf("stage변수의 값 : %d\n", stage);
	// 
	// printf("count변수의 값 : %d\n", count);
#pragma endregion

#pragma region 정적 변수
	// 지역 변수와 전역 변수의 특성을 가지고 있으며, 프로그램이 실행될 때 단 한번만
	// 초기화가 이루어지며, 프로그램이 실행될 때 메모리에 생성되고 프로그램이 종료
	// 되어야만 메모리에서 해제되는 특징을 가지고 있는 변수입니다.

	// Increase();
	// Increase();
	// Increase();
#pragma endregion


}