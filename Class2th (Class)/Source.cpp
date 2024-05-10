#include <iostream>  

using namespace std;

namespace A
{
    int data = 10;

    void Function()
    {
        cout << "A의 기능" << endl;
    }
}

namespace B
{
    int data = 20;

    void Function()
    {
        cout << "A의 기능" << endl;
    }
}

class Unit
{
#pragma region 접근 지정자
    // 클래스 내부의 포함되어 있는 속성에 접근 범위를
    // 제한하는 지정자입니다.

    // public    : 클래스 외부에서 데이터를 접근할 수 있도록
    //             허용하는 접근 지정자입니다.

    // protected : 클래스 내부와 자기가 상속하고 있는 클래스에서만
    //             접근을 허용하는 접근 지정자입니다.

    // private   : 클래스 내부에서만 접근을 허용하는 접근 지정자입니다.

#pragma endregion

private:
    int health = 100;
    double defense = 5.5;

public:
    void Move()
    {
        cout << "Unit Move" << endl;
    }

    void Information() const
    {
        cout << "Health : " << health << endl;
        cout << "Defense : " << defense << endl;
    }
};

int main()
{
#pragma region 이름 공간 (Name Space)
    // 속성을 구분할 수 있도록 유효 범위를 
    // 설정하는 영역입니다.

    // cout << "A namespace에 있는 data 값 : " << A::data << endl;
    // cout << "B namespace에 있는 data 값 : " << B::data << endl;

    // 이름 공간은 같은 이름의 함수나 변수를 또 다른
    // 공간에 선언하여 중복되지 않도록 선언할 수 있습니다.
#pragma endregion

#pragma region 범위 기반 반복문   
    // int list[5] = { 10,20,30,40,50 };
    // 
    // for (const int & element : list)
    // {
    //     cout << element << endl;
    // }
#pragma endregion

#pragma region 클래스(Class)
    // 사용자 정의 데이터 유형으로 속성과 함수가
    // 포함되어 있으며, 클래스를 통해 객체를 생성하여
    // 접근하고 사용할 수 있는 집합체입니다.

    // Unit unit;
    // 
    // cout << "Unit 클래스의 크기 : " << sizeof(Unit) << endl;
    // 
    // unit.Move();
    // 
    // unit.Information();

    // 클래스의 경우 클래스 내부에 있는 변수는 클래스의
    // 메모리 영역에 포함되지만, 정적 변수와 함수의
    // 메모리는 클래스 영역에 포함되지 않습니다.
#pragma endregion



    return 0;
}

