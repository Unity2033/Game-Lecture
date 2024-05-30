#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
#pragma region 컨테이너 어댑터
    // 기존의 컨테이너의 인터페이스 제한하여 만든 기능이
    // 제한되거나 변형되어 있는 컨테이너입니다.

#pragma region Stack
    // std::stack<int> stack;
    // 
    // stack.push(10); // [10]
    // stack.push(20); // [20] [10]
    // stack.push(30); // [30] [20] [10]
    // stack.push(40); // [40] [30] [20] [10]
    // stack.push(50); // [50] [40] [30] [20] [10]
    // 
    // stack.pop();    // [40] [30] [20] [10]   
    // 
    // // cout << "Stack의 top 값 : " << stack.top() << endl;
    // // cout << "Stack의 size 값 : " << stack.size() << endl;
    // // cout << "Stack의 empty 값 : " << stack.empty() << endl;
    // 
    // while (stack.empty() == false)
    // {
    //     cout << stack.top() << " ";
    //     stack.pop();
    // }
#pragma endregion

#pragma region Queue

    // std::queue<int> queue;
    // 
    // queue.push(10); // [10]
    // queue.push(20); // [10] [20]
    // queue.push(30); // [10] [20] [30]
    // queue.push(40); // [10] [20] [30] [40]
    // queue.push(50); // [10] [20] [30] [40] [50]
    // 
    // queue.pop(); // [20] [30] [40] [50]

    // cout << "Queue의 front 값 : " << queue.front() << endl;
    // cout << "Queue의 size 값 : "  << queue.size() << endl;
    // cout << "Queue의 empty 값 : " << queue.empty() << endl;

    // int size = queue.size();
    // 
    // for (int i = 0; i < size; i++)
    // {
    //     cout << queue.front() << " ";
    //     queue.pop();
    // }

#pragma endregion

#pragma region Priority Queue

    // std::priority_queue<int> priorityQueue;
    // 
    // priorityQueue.push(10);
    // priorityQueue.push(99);
    // priorityQueue.push(2);
    // priorityQueue.push(5);
    // priorityQueue.push(11);
    // 
    // while (priorityQueue.empty() == false)
    // {
    //     cout << priorityQueue.top() << " ";
    //     priorityQueue.pop();
    // }

#pragma endregion

#pragma endregion


    return 0;
}

