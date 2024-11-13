#include <stdio.h> 

void main()
{	
#pragma region 변수
	// 데이터를 저장할 수 있는 메모리 공간을 생성하는 것입니다.

#pragma region 자료형
	// 데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다.

	// char alphabet = 'A';
	// int integer = 100;
	// float decimal = 15.5f;
	// 
	// alphabet = 'B';
	// integer = 95;
	// decimal = 7.85f;

	// 자료형은 각각의 자료형마다 크기가 정해져 있으며, 자료형의
	// 크기는 바이트 단위로 이루어져 있고, 자료형의 경우 자료형에
	// 따라 저장할 수 있는 값의 종류와 범위가 결정됩니다.
#pragma endregion

#pragma region 서식 지정자
	// 출력하기 위한 자료형의 정보를 명시적으로 지정해주는 것입니다.

	// %c : 문자를 출력하기 위한 서식 지정자
	// printf("alphabet 변수의 값 : %c\n", alphabet);
	// // %d : 정수를 출력하기 위한 서식 지정자
	// printf("integer 변수의 값 : %d\n", integer);
	// // %f : 실수를 출력하기 위한 서식 지정자
	// printf("decimal 변수의 값 : %f\n", decimal);

#pragma endregion

#pragma region 변수의 이름 규칙

	// 1. 변수의 이름은 숫자로 시작할 수 없습니다.
	// ex) int 5day;

	// 2. 변수의 이름은 대소문자를 구분합니다.
	// ex) int data = 100; 
	// ex) int DATA = 100;

	// 3. 변수의 이름으로 예약어를 사용할 수 없습니다.
	// ex) int int;

	// 4. 변수의 이름으로 공백이 포함될 수 없습니다.
	// ex) int count down;

	// 5. 변수의 이름으로 특수 기호는 _와 $만 허용됩니다.
	// ex) int game_Academy;
	// ex) int jump$up;

#pragma endregion

	// 변수는 프로그램이 실행되는 동안 값을 바꿀 수 있으며,
	// 원래 저장되어 있는 값은 새로 저장되는 값에 의해 지워집니다.
#pragma endregion

#pragma region 상수
	// 프로그램이 실행되는 동안 더 이상 변경할 수 없는
	// 메모리 공간입니다.

	// const int value = 99;

	// value = 45;

	// 상수의 경우 메모리 공간을 가지고 있지 않은 상수를
	// 리터럴 상수라고 하며, 메모리 공간을 가지고 있는 상수를
	// 심볼릭 상수라고 합니다.

	// 상수는 메모리 공간을 생성하는 동시에 초기화해야 하며,
	// 한 번 저장된 값은 더 이상 변경할 수 없습니다.
#pragma endregion

}