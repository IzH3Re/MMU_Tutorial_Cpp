#include <iostream>
using namespace std;

void swap_v2(int *num1, int *num2);

int main()
{
    int x = 2, y = 4;
    cout << "\n x = " << x;
    cout << "\n y = " << y;

    swap_v2(&x, &y);
    cout << "\n\n After swap, ";
    cout << "\n x = " << x;
    cout << "\n y = " << y;
}

void swap_v2(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
