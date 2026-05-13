#include <iostream>
using namespace std;

class Fraction
{
    private:
        int numerator, denominator; 

    public:
        Fraction(); // declare

        Fraction(int n = 0, int d = 1) // constructor
        {
            numerator = n;
            denominator = d;
        }

        Fraction add(Fraction f) // addition function
        {
            Fraction result(0, 0);
            result.numerator = (numerator * f.denominator) + (f.numerator * denominator);
            result.denominator = (denominator * f.denominator);
            return result;
        }

        Fraction multiply(Fraction f) // multiply function
        {
            Fraction result(0, 0);
            result.numerator = (numerator * f.numerator);
            result.denominator = (denominator * f.denominator);

            return result;
        }

        void display() // display function
        {
            cout << numerator << "/" << denominator << endl;
        }
        
};

int main()
{
    Fraction f1(3, 4);
    Fraction f2(1, 2);
    Fraction result(0, 0);

    cout << "f1: ";
    f1.display();

    cout << "f2: ";
    f2.display();

    cout << "f1 + f2: ";
    result = f1.add(f2);
    result.display();

    cout << "f1 * f2: ";
    result = f1.multiply(f2);
    result.display();

    return 0;
}
