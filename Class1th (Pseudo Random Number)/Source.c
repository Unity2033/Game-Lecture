#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Shuffle(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int seed = rand() % size;

		int temporary = array[seed];

		array[seed] = array[i];

		array[i] = temporary;
	}
}

void State(int life)
{
	printf("Life : ");

	for (int i = 0; i < life; i++)
	{
		printf("��");
	}

	printf("\n");
}

int main()
{
#pragma region �ǻ� ����

	// rand() : 0 ~ 32767 ������ ������ ���� ��ȯ�ϴ� �Լ��Դϴ�.

	// time(NULL) : 1970�� 1�� 1�� 00:00:00 UTC���Ŀ� ���� ��(second)�� ��ȯ�ϴ� �Լ��Դϴ�.

	// srand(seed) : ���� �������� �õ带 �����ϴ� �Լ��Դϴ�. 

	// srand(time(NULL));
	// 
	// int index = rand() % 10 + 1;
	// 
	// printf("index�� �� : %d\n", index);

#pragma endregion

#pragma region ���� �Լ�

	//	int list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//	
	//	int size = sizeof(list) / sizeof(int);
	//	
	//	Shuffle(list, size);
	//	
	//	for (int i = 0; i < size; i++)
	//	{
	//		printf("%d ", list[i]);
	//	}

#pragma endregion

#pragma region ����

	//	srand(time(NULL));
	//	
	//	int life = 5;
	//	int answer = 0;
	//	int computer = 0;
	//	
	//	computer = rand() % 50 + 1;
	//	
	//	printf("��ǻ�Ͱ� ������ �ִ� ���� �Է��ϼ���. \n");
	//	
	//	while (life > 0)
	//	{
	//		State(life);
	//	
	//		printf("�Է� : ");
	//	
	//		scanf_s("%d", &answer);
	//	
	//		printf("\n");
	//	
	//		if (answer < computer)
	//		{
	//			life--;
	//	
	//			printf("��ǻ�Ͱ� ������ �ִ� ������ �۽��ϴ�.\n");
	//		}
	//		else if (answer > computer)
	//		{
	//			life--;
	//	
	//			printf("��ǻ�Ͱ� ������ �ִ� ������ Ů�ϴ�.\n");
	//		}
	//		else
	//		{
	//			break;
	//		}
	//	
	//		printf("\n");
	//	}
	//	
	//	printf("\n");
	//	
	//	if (life > 0)
	//	{
	//		printf("V I C T O R Y");
	//	}
	//	else
	//	{
	//		printf("D E F E A T");
	//	}

#pragma endregion

	return 0;
}