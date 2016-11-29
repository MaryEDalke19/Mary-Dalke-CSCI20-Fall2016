// Mary Dalke
// 9-28-16

#include <iostream>
using namespace std;

class TemperatureConverter 
{
 public:
 void kelvin_(int kelvinTemp);
 void celsius_(int celsiusTemp);
 void fahrenheit_(int fahrenheitTemp);
 double PrintTemperatures() const;
 
 private:
 int kelvin_Temp;
 int temp1;
 int temp2;
};

void TemperatureConverter::kelvin_(int kelvinTemp)
{
    kelvin_Temp = kelvinTemp;
    return;
}

void TemperatureConverter::celsius_(int celsiusTemp)
{
    temp1 = celsiusTemp;
    return;
}

void TemperatureConverter::fahrenheit_(int fahrenheitTemp)
{
    temp2 = fahrenheitTemp;
    return;
}

double TemperatureConverter::PrintTemperatures() const
{
    return kelvin_Temp / (temp1 * temp2 / -273.16);
}

int SetTempFromKelvin(int newKelvin)
{
    return newKelvin;
}

int SetTempFromCelsius(int newCelsius)
{
    return newCelsius;
}

int SetTempFromFahrenheit(int newFahrenheit)
{
    return newFahrenheit;
}

int GetTempFromKelvin(int origKelvin)
{
    int totKelvin = 0;
    
    totKelvin = (origKelvin * 400.15);
    
    return origKelvin;
}

int GetTempFromCelsius(int origCelsius)
{
    int totCelsius = 0;
    
    totCelsius = (origCelsius * 32);
    
    return origCelsius;
}

int GetTempFromFahrenheit(int origFahrenheit)
{
    int totFahrenheit = 0;
    
    totFahrenheit = (origFahrenheit * 32);
    
    return origFahrenheit;
}

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    //TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}