#include <iostream>  

using namespace std;

class Item
{
private:
    int * price;

public:
    Item()
    {
        price = new int;
    }

    Item(const Item& clone)
    {
        price = clone.price;
    }

    ~Item()
    {
        delete price;
    }
};

class Object
{
private:
    int* data;

public:
    Object()
    {
        data = new int;
    }

    Object(const Object& object)
    {
        data = new int;
    }

    ~Object()
    {
        delete data;
    }
};

class Unit
{
protected:
    int health;
    int attack;
    int defense;

public:
    Unit()
    {
        cout << "Create Unit" << endl;
    }

    void Move()
    {
        cout << "Unit Move" << endl;
    }

    ~Unit()
    {
        cout << "Release Unit" << endl;
    }
};

class Marine : public Unit
{
private:
    int streamPack = -5;

public:
    Marine()
    {
        health = 40;
        attack = 6;
        defense = 0;

        cout << "Create Marine" << endl;
    }

    void Skill()
    {
        health = streamPack;

        cout << "HP : " << health << endl;
    }

    ~Marine()
    {
        cout << "Release Marine" << endl;
    }
};



int main()
{
#pragma region 얕은 복사
    // 객체를 복사할 때 주소 값을 복사하여 같은
    // 메모리 공간을 가리키게 하는 복사입니다.

    // Item item1;
    // 
    // Item item2(item1);

    // 얕은 복사의 경우 같은 객체가 서로 같은 메모리 공간을
    // 참조하고 있기 때문에 하나의 객체로 값을 변경하게 되면
    // 서로 참조된 객체도 함께 영향을 받습니다.

#pragma endregion

#pragma region 깊은 복사
    // 객체를 복사할 때, 참조 값이 아닌 인스턴스 자체를
    // 새로 복사하여 서로 다른 메모리를 생성하는 복사입니다.

    // Object object1;
    // 
    // Object object2(object1);
#pragma endregion

#pragma region 상속
    // 상위 클래스의 속성을 하위 클래스가 사용할 수
    // 있도록 설정해주는 기능입니다.

    // Unit unit;

    // cout << "Unit 오브젝트의 크기 : " << sizeof(unit) << endl;

    // Marine marine;

    // // 객체가 메모리에서 해제될 때 실행 순서와 반대로 소멸자가 실행되기
    // // 때문에 복사한 객체가 먼저 해제됩니다.

    // cout << "Marine 오브젝트의 크기 : " << sizeof(marine) << endl;

    // 클래스의 상속 관계에서 상위 클래스는 하위 클래스의
    // 속성을 사용할 수 없으며, 하위 클래스는 상위 클래스의
    // 메모리를 포함한 상태로 메모리의 크기가 결정됩니다.
#pragma endregion



    return 0;
}

