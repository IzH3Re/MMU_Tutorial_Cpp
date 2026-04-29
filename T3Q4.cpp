#include <iostream>
using namespace std;

void displayVector(float *a_array, int numElem);
void getInputIntoVector(float *a_array, int numElem);

int main()
{
    int numElem;

    cout << "Enter how many numbers to enter >> ";
    cin >> numElem;

    float *arr = new float[numElem];

    getInputIntoVector(arr, numElem);
    displayVector(arr, numElem);

    delete[] arr;

    return 0;
}

void getInputIntoVector(float *a_array, int numElem)
{
    for (int i = 0; i < numElem; i++)
    {
        cout << "Enter element A[" << i << "]: ";
        cin >> a_array[i];
    }
}

void displayVector(float *a_array, int numElem)
{
    cout << "Display data in array \n";
    for (int i = 0; i < numElem; i++)
    {
        cout << a_array[i] << " ";
    }
    cout << endl;
}
