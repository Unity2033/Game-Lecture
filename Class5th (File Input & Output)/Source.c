#include <stdio.h>

#define SIZE 100000

void Load(const char* fileName)
{
	FILE* file = fopen(fileName, "r");

	char buffer[SIZE] = { 0, };

	// ù ��° �Ű����� : ���� �����͸� ������ �޸� ������ ������ ����
	// �� ��° �Ű����� : �� �������� �׸� ũ��
	// �� ��° �Ű����� : �����͸� �о�� ������ �׸��� ��
	// �� ��° �Ű����� : �����͸� �о�� ������ ������ ����

	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);

}

int main()
{
#pragma region ���� �����

#pragma region ���� ����

	// ù ��° �Ű� ���� (������ �̸�)
	// �� ��° �Ű� ���� (������ �Է� ���)

	// File Mode
	// r = �б� 
	// r+ = �а� ���� 
	// w = ���� (���� �ʱ�ȭ) 
	// w+ = ���� �б� (���� �ʱ�ȭ)
	// a = �߰�
	// a+ ���� �б� 

	//	FILE * file = fopen("Stat.txt", "w");
	//	
	//	fputs("Health : 100  \n", file);
	//	fputs("Attack : 10 \n", file);
	//	fputs("Defense : 5 \n", file);
	//	
	//	fclose(file);

#pragma endregion

#pragma region ���� �б�

	// Load("Third Pocketmon.txt");

#pragma endregion

#pragma endregion


	return 0;
}