#include "Computer.h"

class Food
{
public:
    Food()
    {
        cout << "Create Food" << endl;
    }                 
};

class Meat : public virtual Food
{
public:
    Meat()
    {
        cout << "Create Meat" << endl;
    }
};

class Vegetable : public virtual Food
{
public:
    Vegetable()
    {
        cout << "Create Vegetable" << endl;
    }
};

class Hambuger : public Meat, public  Vegetable
{
public:
    Hambuger()
    {
        cout << "Create Hambuger" << endl;
    }
};

int main()
{
#pragma region 다중 상속
    // 하나의 하위 클래스가 여러 개의 상위 클래스를 상속받는 것입니다.

    // Computer computer;

    // computer.Use();

    // 다중 상속은 여러 개의 상위 클래스에 중복되는 속성이 존재할 수 있기
    // 있기 때문에 범위 지정 연산자를 통해 상위 클래스의 이름을 선언하고
    // 속성을 사용합니다.
#pragma endregion

#pragma region 가상 상속

    // Hambuger hambuger;

#pragma endregion

}

