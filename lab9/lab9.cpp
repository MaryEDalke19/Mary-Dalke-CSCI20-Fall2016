// Mary Dalke
// 9-28-16

#include <iostream>
using namespace std;

class TemperatureConverter 
{
    int SetTempFromCelsius;
    int SetTempFromFahrenheit;
    int SetTempFromKelvin;
    int GetTempFromKelvin;
    int GetTempAsCelsius;
    int GetTempAsFahrenheit;
};

    TemperatureConverter PrintTemperatures (int kelvin_)
{
    PrintTemperatures printTemp;
    printTemp.SetTempFromCelsius = 32;
    printTemp.SetTempFromFahrenheit = 32;
    printTemp.SetTempFromKelvin = 400.15;
    printTemp.GetTempAsFahrenheit = 0;
    printTemp.GetTempAsCelsius = 0;
    printTemp.GetTempFromKelvin = 0;
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