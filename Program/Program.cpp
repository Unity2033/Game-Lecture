#include <iostream>
#include <set>

using namespace std;

int main()
{
#pragma region 연관 컨테이너
    // 컨테이너 내의 자료들이 규칙에 따라 정렬되어 있는 컨테이너입니다.

    std::set<int> set;

    set.insert(50);
    set.insert(10);
    set.insert(80);
    set.insert(30);
    set.insert(65);
    set.insert(45);
 
    // set의 경우 KEY 값이 중복이 되면 값이 그대로 들어옵니다.
#pragma endregion



    return 0;
}

