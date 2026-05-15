#include <iostream>

using namespace std;

namespace Client
{
    int port = 1557;

    void Send()
    {
        cout << "the client sends data..." << endl;
    }
}

namespace Server
{
    int port = 1885;

    void Send()
    {
        cout << "the server sends data..." << endl;
    }
}

using namespace Client;

class GameObject
{
#pragma region 접근 지정자
    // 클래스 내부에 포함되어 있는 속성에 접근 범위를
    // 제한하는 지정자입니다.

    // public : 클래스 내부와 자기가 상속하고 있는 클래스 그리고 
    //          클래스 외부에서도 접근을 허용하는 지정자입니다.

    // protected : 클래스 내부와 자기가 상속하고 있는 클래스까지만
    //             접근을 허용하는 지정자입니다.

    // private : 클래스 내부까지만 접근을 허용하는 지정자입니다.

#pragma endregion

private:
    int x;
    int y;
    int z;
protected:
    const char* name;
public:
    void Initialize()
    {
        x = 0;
        y = 0;
        z = 0;
    }
};

int main()
{
#pragma region 이름 공간
    // 속성을 구분할 수 있도록 유효 범위를
    // 설정하는 영역입니다.

    // Send();
    // Server::Send();

#pragma endregion

#pragma region 클래스
    // 사용자 정의 데이터 유형으로 속성과 함수가 포함되어
    // 있으며, 클래스를 통해 객체를 생성하여 접근하고 사용
    // 하는 집합체입니다.

    // GameObject gameObject;
    // 
    // gameObject.Initialize();
    // 
    // cout << "GameObject of size : " << sizeof(GameObject) << endl;

    // 클래스의 경우 클래스 내부에 있는 변수는 클래스의
    // 메모리 영역에 포함되지만, 정적 변수와 함수의 메
    // 모리는 클래스 영역에 포함되지 않습니다.
#pragma endregion

    return 0;
}
