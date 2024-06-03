#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

#define UP    72
#define LEFT  75
#define RIGHT 77
#define DOWN  80

void Position(int x, int y)
{
    COORD position = { x,y };

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

class Input
{
private:
    int x;
    int y;
    char key;
    const char * shape;
public:
    Input()
    {
        x = 0;
        y = 1;
        shape = "△";
    }

    void Renderer()
    {
        Position(x, y);

        cout << shape;
    }

    void GetKey()
    {
        key = _getch();

        if (key == -32)
        {
            key = _getch();

            switch (key)
            {
            case UP     : y -= 2;
                 break;
            case LEFT   : x -= 2;
                 break;
            case RIGHT  : x += 2;
                 break;
            case DOWN   : y += 2;
                 break;
            }
            
        }

    }
};


class Inventory
{
private:
    int size;
    int width;

    Input input;
public:
    Inventory(int size, int width)
    {
        this->size = size;
        this->width = width;
    }

    void Update()
    {
        input.GetKey();
    }

    void Renderer()
    {
        Position(0, 0);

        for (int i = 0; i < size; i++)
        {
            if (i != 0 && i % width == 0)
            {
                cout << endl << endl;
            }

            cout << "□";
        }

        input.Renderer();
    }
};

int main()
{
    Inventory inventory(12, 4);

    while (true)
    {
        inventory.Renderer();

        inventory.Update();

        system("cls");
    }

    return 0;
}

