#include <stdio.h> 

#define SIZE 5

void main()
{	
#pragma region 자료형 변환
	// 서로 다른 자료형을 가지고 있는 변수끼리
	// 연산이 이루어질 때 기존에 지정했던 자료형을
	// 다른 자료형으로 변환하는 과정입니다.

#pragma region 암묵적 형변환
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의
	// 크기가 큰 자료형으로 변환되는 과정입니다.

	// int integer = 10;
	// float decimal = 6.5f;
	// 
	// printf("integer 변수와 decimal 변수를 연산한 결과 : %f\n", integer + decimal);
	// 
	// // 표현 범위가 작은 데이터에 표현범위가 큰 데이터를
	// // 저장하게 되면 암묵적으로 데이터 손실이 발생합니다.
	// 
	// integer = decimal;
	// 
	// printf("integer 변수의 값 : %d\n", integer);

	// 정수형에서 실수형으로 암묵적 형변환은 가능하지만,
	// 실수형에서 정수형으로 암묵적 자료형 변환은 불가능합니다.
#pragma endregion

#pragma region 명시적 형변환
	// 연산이 이루어지기 전에 사용자가 직접 자료형을
	// 변환하는 과정입니다.

	// int attack = 10;
	// int health = 3;

	// float damage = (float)attack / health;

	// printf("damage 변수의 값 : %f\n", damage);

	// 정수형 변수끼리 연산을 수행하게 되면 정수의
	// 결과 값만 가질 수 있습니다.
#pragma endregion

#pragma endregion

#pragma region 매크로
	// 프로그램 내에서 특정한 데이터가 문자열로
	// 정의되고 처리되는 과정입니다.

	// printf("매크로 SIZE의 값 : %d\n", SIZE);

	// 매크로의 경우 자료형이 존재하지 않으므로,
	// 메모리 공간을 가지고 있지 않습니다.
#pragma endregion

}