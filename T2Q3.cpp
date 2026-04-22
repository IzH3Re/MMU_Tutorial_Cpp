#include <iostream>
using namespace std;
void drawFullLine(int w);
void drawEmptyLine(int w);
void drawBox(int w);

void drawFullLine(int w)
{
    for(int i = 0; i < w; i++)
    {
        cout << "* ";
    }
    cout << endl;
}

void drawEmptyLine(int w)
{
    if(w == 1)
    {
        cout << "*" << endl;
        return;
    }

    cout << "* ";
    for(int i = 0; i < w - 2; i++)
    {
        cout << "  ";
    }
    cout << "*" << endl;

}

void drawBox(int w)
{
    if (w < 1 || w > 20)
    {
        cout << "Invalid number. Ending program" << endl;
        return;
    }

    if (w == 1)
    {
        drawFullLine(1);
        return;
    }

    drawFullLine(w);
    for (int i = 0; i < w - 2; i++)
    {
        drawEmptyLine(w);
    }
    drawFullLine(w);
}

int main()
{
    int width;
    cout << "Please enter width of the box from 1-20: ";
    cin >> width;

    drawBox(width);

    return 0;
}
