#include "../Program/stdafx.h"
#include <stack>
#include <queue>

int main()
{
#pragma region 컨테이너 어댑터
    // 기존 컨테이너의 인터페이스를 제한하여 만든 기능이
    // 제한되거나 변경된 컨테이너입니다.

#pragma region stack container

    // std::stack<int> stack;
    // 
    // stack.push(10);
    // stack.push(20);
    // stack.push(30);
    // stack.push(40);
    // stack.push(50);
    // 
    // while (stack.empty() == false)
    // {
    //     cout << stack.top() << endl;
    // 
    //     stack.pop();
    // }

#pragma endregion

#pragma region queue container

    // std::queue<int> queue;
    // 
    // queue.push(10);
    // queue.push(20);
    // queue.push(30);
    // queue.push(40);
    // queue.push(50);
    // 
    // const int & size = queue.size();
    // 
    // for (int i = 0; i < size; i++)
    // {
    //     cout << queue.front() << endl;
    // 
    //     queue.pop();
    // }

#pragma endregion

#pragma region priority queue

    // std::priority_queue<int> priority_queue;
    // 
    // priority_queue.push(10);
    // priority_queue.push(20);
    // priority_queue.push(9);
    // priority_queue.push(31);
    // priority_queue.push(15);
    // priority_queue.push(78);
    // 
    // while (priority_queue.empty() == false)
    // {
    //     cout << priority_queue.top() << endl;
    // 
    //     priority_queue.pop();
    // }

#pragma endregion

#pragma endregion

    return 0;
}
