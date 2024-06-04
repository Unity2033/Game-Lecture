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

class Item
{
private:
    int price;
    const char* name;

public:
    void SetData(int price, const char * name)
    {
        this->price = price;
        this->name = name;
    }
};


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

    void GetKey(int & index)
    {
        key = _getch();

        if (key == -32)
        {
            key = _getch();

            switch (key)
            {
            case UP     :
                if (y > 1)
                {
                    y -= 2;
                    index -= 8;
                }
                break;
            case LEFT   : 
                if (x > 0)
                {
                    x -= 2;
                    index -= 2;
                }
                break;
            case RIGHT  : 
                if (x < 6)
                {
                    x += 2;
                    index += 2;
                }
                break;
            case DOWN   : 
                if (y < 5)
                {
                    y += 2; 
                    index += 8;
                }
                break;
            }      
        }

    }

    void Select(Item * item[], int & index)
    {
        if (GetAsyncKeyState(VK_SPACE))
        {
            if (item[index / 2] == nullptr)
            {
                item[index / 2] = new Item();
            }
        }
    }
};


class Inventory
{
private:
    int size;
    int width;
    int index;

    Input input;
    Item * item[12];
public:
    Inventory(int size, int width)
    {
        index = 0;
        this->size = size;
        this->width = width;

        for (int i = 0; i < size; i++)
        {
            item[i] = nullptr;
        }
    }

    void Update()
    {
        input.GetKey(index);
        input.Select(item, index);
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

            if (item[i] == nullptr)
            {
                cout << "□";
            }
            else
            {
                cout << "■";
            }
        }

        input.Renderer();
    }

    ~Inventory()
    {
        for (int i = 0; i < 12; i++)
        {
            if (item[i] != nullptr)
            {
                delete item[i];
            }
        }
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

