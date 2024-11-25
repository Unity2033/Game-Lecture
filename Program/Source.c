#include <stdio.h> 

void main()
{	
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.

	int array[3];

	array[0] = 10;
	array[1] = 20;
	array[2] = 30;

	// 배열은 원하는 원소에 원하는 값을 저장할 수 있으며,
	// 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리
	// 공간을 가지게 됩니다.

	int size = sizeof(array) / sizeof(int);
	 
	for (int i = 0; i < size; i++)
	{
		printf("array[%d] = %d\n", i, array[i]);
	}

	// 배열의 경우 첫 번째 원소는 0부터 시작합니다.


#pragma endregion


}