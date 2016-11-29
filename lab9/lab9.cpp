// Mary Dalke
// 9-28-16

#include <iostream>
#include <string>
using namespace std;

class TemperatureConverter 
{
 public:
 void kelvin_(int kelvinTemp);
 double PrintTemperatures() const;
 void SetTempFromKelvin(int newKelvin);
 void SetTempFromCelsius(int newCelsius);
 void SetTempFromFahrenheit(int newFahrenheit);
 void GetTempFromKelvin(int origKelvin);
 void GetTempFromCelsius(int origCelsius);
 void GetTempFromFahrenheit(int origFahrenheit);
 void GetTempAsCelsius(int totCelsius);
 void GetTempAsFahrenheit(int totFahrenheit);
 
 
 private:
 int kelvin_Temp;
};

void TemperatureConverter::kelvin_(int kelvinTemp)
{
    kelvin_Temp = kelvinTemp;
    return;
}

double TemperatureConverter::PrintTemperatures() const
{
    return kelvin_Temp / -273.16;
}

void TemperatureConverter::SetTempFromKelvin(int newKelvin)
{
    kelvin_Temp = kelvin_Temp;
    return;
}

void TemperatureConverter::SetTempFromCelsius(int newCelsius)
{
    int kelvin_Temp = newCelsius + 273.15;
    return;
}

void TemperatureConverter::SetTempFromFahrenheit(int newFahrenheit)
{
    int kelvin_Temp = (5*(newFahrenheit-32)/9) + 273.15 ;
    return;
}

void TemperatureConverter::GetTempFromKelvin(int origKelvin)
{    
    origKelvin = kelvin_Temp;
    return;
}

void TemperatureConverter::GetTempAsCelsius(int totCelsius)
{
    totCelsius = kelvin_Temp - 273.15;
    
    return;
}

void TemperatureConverter::GetTempAsFahrenheit(int totFahrenheit)
{
    totFahrenheit = ((totCelsius * 9) / 5 + 32);
    
    return;
}