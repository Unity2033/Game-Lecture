#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main()
{
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 컨테이너입니다.

#pragma region vector container

	// std::vector<int> vector;
	// 
	// vector.reserve(8);
	// 
	// vector.push_back(10);
	// vector.push_back(20);
	// vector.push_back(30);
	// vector.push_back(40);
	// vector.push_back(50);
	// 
	// vector.pop_back();
	// 
	// for (int i = 0; i < vector.size(); i++)
	// {
	// 	cout << vector[i] << endl;
	// }
	// 
	// vector.clear();
	// 
	// cout << "vector의 Size 값 : " << vector.size() << endl;
	// cout << "vector의 Capacity 값 : " << vector.capacity() << endl;

#pragma endregion

#pragma region list container

	//	std::list<int> list;
	//	
	//	list.push_back(20); 
	//	list.push_back(30);
	//	
	//	list.push_front(10);
	//	
	//	list.pop_front();
	//	
	//	list.push_front(1);
	//	
	//	list.remove(20);
	//	
	//	for (const int & element : list)
	//	{
	//		cout << element << endl;
	//	}
	//	
	//	list.assign(3, 5);
	//	
	//	cout << "List Size : " << list.size() << endl;

#pragma endregion

#pragma region deque container

	//	std::deque<int> deque;
	//	
	//	deque.push_back(10);
	//	deque.push_back(20);
	//	deque.push_back(30);
	//	deque.push_back(40);
	//	
	//	deque.push_front(5);
	//	deque.push_front(1);
	//	
	//	deque.push_back(50);
	//	deque.push_back(60);
	//	deque.push_back(75);
	//	
	//	deque.pop_front();
	//	deque.pop_back();
	//	
	//	for (int i = 0; i < deque.size(); i++)
	//	{
	//		cout << deque[i] << " ";
	//	}

#pragma endregion

#pragma endregion

	return 0;
}
