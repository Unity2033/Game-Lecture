#include <stdio.h>
#include <math.h>

struct GameObject
{
	char grade;
    double attack;	
	int health;

	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리의
	// 크기가 다르게 설정될 수 있으며, 구조체 크기를 결정하는
	// 형태는 기본 자료형으로만 구성되어 있습니다.
};

int main()
{	
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	// struct GameObject gameObject;
	// 
	// gameObject.grade = 'A';
	// gameObject.health = 75;
	// gameObject.attack = 5.5f;
	// 
	// printf("GameObject Grade : %c\n", gameObject.grade);
	// printf("GameObject Health : %d\n", gameObject.health);
	// printf("GameObject Attack : %f\n", gameObject.attack);

	// 구조체를 선언하기 전에 구조체는 메모리 공간이
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화할 수 없습니다.
#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에
	// 읽을 수 있도록, 컴파일러가 레지스터의 블록에 
	// 맞추어 바이트를 패딩해주는 최적화 작업입니다.

	// struct GameObject object = { 'C', 30, 3.25 };
	// 
	// printf("GameObject의 크기 : %d\n", sizeof(object));

	// 구조체의 크기는 구조체를 구성하는 멤버 중에 
	// 크기가 가장 큰 자료형의 배수가 되도록 정렬합니다.
#pragma endregion

#pragma region 두 점 사이의 거리

	printf("100의 제곱근 : %lf\n", sqrt(100));

	printf("10² : %lf\n", pow(10, 2));

#pragma endregion


	return 0;
}