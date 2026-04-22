#include <iostream>
using namespace std;

int main()
{
    double weight, height, bmi;

    cout << "Please enter your weight in kg = ";
    cin >> weight;
    cout << "Please enter your height in m = ";
    cin >> height;

    bmi = (weight) / (height * height);

    cout << "Your BMI = " << bmi << endl;

    if (bmi >= 30.0)
    {
        cout << "Category: Obesity" << endl;
    }
    else if (bmi < 30.0 && bmi >= 25.0)
    {
        cout << "Category: Overweight" << endl;
    }
    else if (bmi < 25.0 && bmi >= 18.5)
    {
        cout << "Category: Healthy" << endl;
    }
    else
    {
        cout << "Category: Underweight" << endl;
    }

    return 0;
}
