#include <iostream>

using namespace std;

template <typename T>
bool Same(T left, T right)
{
	return left == right;
}

template<>
bool Same(const char* left, const char* right)
{
	return strlen(left) == strlen(right);
}

template<typename T>
class Container
{
private:
	int index;

	T list[5];

public:
	Container()
	{
		index = 0;

		for (int i = 0; i < 5; i++)
		{
			list[i] = NULL;
		}
	}
};

int main()
{
#pragma region 템플릿
	// 데이터 형식의 의존하지 않고, 하나의 값이 여러 다른 데이터 
	// 형식을 가질 수 있는 기술에 중점을 두어 재사용성을 높일 수
	// 있는 기능입니다.

	// cout << Same('A', 'A') << endl;
	// 
	// cout << Same(10, 10) << endl;  
	// 
	// cout << Same(5.75f, 1.25f) << endl;
	// 
	// cout << Same(10.125, 3.625) << endl;

	Container<int> container;
#pragma endregion

#pragma region 템플릿 특수화
	// 특정 자료형에 대해 다르게 처리하고 싶은 경우
	// 특정한 자료형만 다른 형식으로 동작시키는 기능입니다.

	// cout << Same("League", "Legend") << endl;
	// cout << Same("School", "Teacher") << endl;
#pragma endregion


	return 0;
}
