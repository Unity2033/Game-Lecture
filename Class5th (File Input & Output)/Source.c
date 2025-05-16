#include <stdio.h>

#define SIZE 100000

void Load(const char* fileName)
{
	FILE* file = fopen(fileName, "r");

	char buffer[SIZE] = { 0, };

	// 첫 번째 매개변수 : 읽은 데이터를 저장할 메모리 버퍼의 포인터 변수
	// 두 번째 매개변수 : 각 데이터의 항목 크기
	// 세 번째 매개변수 : 데이터를 읽어올 데이터 항목의 수
	// 네 번째 매개변수 : 데이터를 읽어올 파일의 포인터 변수

	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);

}

int main()
{
#pragma region 파일 입출력

#pragma region 파일 쓰기

	// 첫 번째 매개 변수 (파일의 이름)
	// 두 번째 매개 변수 (파일의 입력 모드)

	// File Mode
	// r = 읽기 
	// r+ = 읽고 쓰기 
	// w = 쓰기 (파일 초기화) 
	// w+ = 쓰고 읽기 (파일 초기화)
	// a = 추가
	// a+ 쓰고 읽기 

	//	FILE * file = fopen("Stat.txt", "w");
	//	
	//	fputs("Health : 100  \n", file);
	//	fputs("Attack : 10 \n", file);
	//	fputs("Defense : 5 \n", file);
	//	
	//	fclose(file);

#pragma endregion

#pragma region 파일 읽기

	// Load("Third Pocketmon.txt");

#pragma endregion

#pragma endregion


	return 0;
}