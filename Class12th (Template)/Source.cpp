#include <iostream>  
#include <string>

using namespace std;

template<typename T>
class List
{
private:
    T data;
    T* pointer;

public:
    List(T data)
    {
        this->data = data;

        pointer = new T[5];
    }

    bool Compare(T x, T y)
    {
        return (x > y) ? true : false;
    }

    ~List()
    {
        delete pointer;
    }

};

template <typename T>
T Add(T x, T y)
{
    return x + y;
}

template<>
const char* Add<const char*>(const char* x, const char* y)
{
    cout << "템플릿 특수화" << endl;

    int length1 = strlen(x);
    int length2 = strlen(y);

    return (length1 > length2) ? x : y;
}

int main()
{
#pragma region 템플릿
    // 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른
    // 데이터 타입들을 가질 수 있는 기술에 중점을 두어 재사용
    // 을 높일 수 있는 기능입니다.

    // cout << "Add(char,char)의 값   : " << Add('A', 'B') << endl;
    // cout << "Add(int,int)의 값     : " << Add(10, 20) << endl;
    // cout << "Add(float,float)의 값 : " << Add(15.4f, 16.7f) << endl;

    // cout << "Add(const char *, const char *)의 값 : " << Add("League", "Legend") << endl;
    // 
    // List<int> list1(10);
    // 
    // cout << list1.Compare(10, 20) << endl;
#pragma endregion

    return 0;
}

