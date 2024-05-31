#include <iostream>

using namespace std;

class Item
{
private:
    int price;

public:
    Item(int price)
    {
        cout << "Constructor" << endl;
        this->price = price;
    }

    Item(Item & item)
    {
        cout << "Copy Constructor" << endl;
        price = item.price;
    }
};

class Card
{    
public :
    virtual void Show() = 0;
    virtual void Skill() = 0;
    virtual void Effect() = 0;
};

class Legend : Card
{
public:
   void Show() override
   {
       cout << "Legend Card" << endl;
   }

   void Skill()  override
   {
       cout << "Legend Skill" << endl;
   }

   void Effect() final
   {
       cout << "Legend Effect" << endl;
   }
};

class Unique : Legend
{
public :
    Unique()
    {
      
    }

    // void Effect() override { cout << "Unique Effect" << endl; }
};

int main()
{
#pragma region R Value & L Value

    // L value Type
    /*
    int data = 10;

    int & left1 = data;
    int & left2 = 20;
   */

    // R value Type
    /*
    int count = 0;

    int && right1 = 10;
    //int && right2 = count;

    right1 = 30;

    cout << "right1의 값 : " << right1 << endl;
    */

#pragma endregion

#pragma region 복사 생략 (Copy Elision)
    // 함수의 반환 값을 모두 사용하거나 초기화하는 경우에
    // 생기는 불필요한 임시 객체를 최적화하거나 제거하는데
    // 사용되는 컴파일러 기술입니다.

    // Item item1(10000);

    // Item item2(item1);
#pragma endregion

#pragma region final


#pragma endregion




    return 0;
}

