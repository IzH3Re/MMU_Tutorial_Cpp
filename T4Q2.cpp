#include <iostream>
using namespace std;

class Temperature 
{
private: // declare temperature for both Celsius and Fahrenheit
    double tempCel;
    double tempFar;

public:
  Temperature() // both different measurement store the same value
  {
    tempCel = 0;
    tempFar = 32;
  }

  Temperature(char type, double value) // convert temperature value based on the type of measurement and using formula
  {
    if(type == 'C' || type == 'c')
    {
        tempCel = value;
        tempFar = (value * 9.0 / 5.0) + 32;
    }
    else if(type == 'F' || type == 'f')
    {
        tempFar = value;
        tempCel = (value - 32) * 5.0 / 9.0;
    }
    else // invalid input will lead to default value
    {
        tempCel = 0;
        tempFar = 32;
    }
  }

  double getCels() // get celsius value from main
  {
    return tempCel;
  }

  double getFar() // get fahrenheit value from main
  {
    return tempFar;
  }

  void equal(Temperature t) // copy values
  {
    tempCel = t.tempCel;
    tempFar = t.tempFar;
  }
};
 
int main()
{
	Temperature t1('C',100),t2('F',100);

	cout<<"t1 = "<<t1.getCels()<<" C\n";
	cout<<"t1 = "<<t1.getFar()<<" F\n";

	cout<<"t2 = "<<t2.getCels()<<" C\n";
	cout<<"t2 = "<<t2.getFar()<<" F\n";

	t1.equal(t2);   // assign value in t2 to t1
	cout<<"After assigning t2 to t1"<<endl;

	cout<<"t1 = "<<t1.getCels()<<" C\n";
	cout<<"t1 = "<<t1.getFar()<<" F\n";
	return 0;
}
