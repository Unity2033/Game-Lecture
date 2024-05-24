#include <iostream>  

using namespace std;

class Data
{
public:
    int data;

    Data()
    {
        cout << "Create Data" << endl;
    }

    ~Data()
    {
        cout << "Release Data" << endl;
    }
};

class Champion
{
public:
    Champion()
    {
        cout << "Create Champion" << endl;
    }

    ~Champion()
    {
        cout << "Release Champion" << endl;
    }
};

class Character
{
private:
    weak_ptr<Character> sharedPointer;

public:
    Character()
    {
        cout << "Create Character" << endl;
    }

    void Partner(weak_ptr<Character> clone)
    {
        sharedPointer = clone;
    }

    ~Character()
    {
        cout << "Release Character" << endl;
    }
};

int main()
{
#pragma region 스마트 포인터 
    // 포인터를 시뮬레이트하는 동시에 자동 메모리 관리 또는
    // 경계 확인과 같은 추가 기능을 제공하는 추상 데이터 유형입니다.

#pragma region Unique 포인터
    // 특정한 객체를 하나의 스마트 포인터만 가리킬 수
    // 있도록 하는 포인터입니다.

    // unique_ptr<Data> uniquePtr1(new Data());

    // uniquePtr1->data = 10;

    // cout << "uniquePtr1의 data 값 : " << uniquePtr1->data << endl;

    // unique_ptr<Data> uniquePtr2 = std::move(uniquePtr1);

    // cout << "uniquePtr2의 data 값 : " << uniquePtr1->data << endl;
    // cout << "uniquePtr2의 data 값 : " << uniquePtr2->data << endl;
#pragma endregion

#pragma region Shared 포인터
    // 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 
    // 있으며, 모든 포인터 객체가 자원 객체를 필요하지 않을 때
    // 자원 객체를 해제하도록 설계되어 있는 포인터입니다.

    // 참조 개수 : 자원 객체를 가리키는 포인터 객체의 수를 의미합니다.
    // shared_ptr<Champion> sharedPtr1 = make_shared<Champion>();
    // 
    // cout << "shared Pointer의 참조 개수 : " << sharedPtr1.use_count() << endl;
    // 
    // {
    //     shared_ptr<Champion> sharedPtr2 = sharedPtr1;
    // 
    //     cout << "shared Pointer의 참조 개수 : " << sharedPtr1.use_count() << endl;
    // }
    // 
    // cout << "shared Pointer의 참조 개수 : " << sharedPtr1.use_count() << endl;

#pragma region 순환 참조
    // 자원 객체 내부에서 서로 가리키는 포인터 객체가 있다면 서로를
    // 가리키는 포인터 객체 때문에 참조 개수가 0으로 떨어지지 않아 포인터
    // 객체가 소멸되지 않는 상황입니다.

    //shared_ptr<Character> shared1 = make_shared<Character>();
    //shared_ptr<Character> shared2 = make_shared<Character>();
    //
    //shared1->Partner(shared2);
    //shared2->Partner(shared1);
#pragma endregion



#pragma endregion

#pragma region Weak 포인터
    // 자원 객체를 소유하지 않기 때문에 std::shared_ptr로
    // 관리되는 자원 객체를 가리켜서 참조 개수에 영향을 
    // 미치지 않게 하는 포인터입니다.

    // shared_ptr<Character> shared1 = make_shared<Character>();
    // shared_ptr<Character> shared2 = make_shared<Character>();

    // shared1->Partner(shared2);
    // shared2->Partner(shared1);
#pragma endregion

#pragma endregion

    return 0;
}

