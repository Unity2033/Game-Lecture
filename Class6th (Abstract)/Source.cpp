#include "../Program/stdafx.h"
#include "Antidote.h"
#include "Polaroid.h"

int main()
{
#pragma region 추상화
    // 복잡한 시스템이나 객체의 내부에 있는 세부 사항을 숨기고,
    // 필요한 부분만 외부에서 사용할 수 있도록 단순화시키는 작업입니다.

    // Item * list[5] = { nullptr, };
    // 
    // list[0] = new Antidote;
    // list[1] = new Polaroid;
    // 
    // int selection = 0;
    // 
    // while (true)
    // {
    //     cout << "Enter a number from 0 to 4 : ";
    // 
    //     cin >> selection;
    // 
    //     cout << endl;
    // 
    //     if (selection < 5)
    //     {
    //         if (list[selection] == nullptr)
    //         {
    //             cout << "Slot is empty\n" << endl;
    //         }
    //         else
    //         {
    //             list[selection]->Use();
    //         }
    //     }
    //     else
    //     {
    //         cout << "Invalid input\n" << endl;
    // 
    //         break;
    //     }
    // }
    // 
    // for (int i = 0; i < 5; i++)
    // {
    //     delete list[i];
    // }

    // 추상 클래스는 정의되어 있지 않은 함수가 있으므로,
    // 객체를 생성할 수 없습니다.
#pragma endregion

    return 0;
}
