// Mary Dalke
// 9-28-16

#include <iostream>
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
 double GetTempFromCelsius(int origCelsius);
 double GetTempFromFahrenheit(int origFahrenheit);
 double GetTempAsCelsius(int totCelsius);
 double GetTempAsFahrenheit(int totFahrenheit);
 
 
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
    int totKelvin = 0;
    
    totKelvin = (origKelvin * 400.15);
    
    return origKelvin;
}

double TemperatureConverter::GetTempAsCelsius(totCelsius)
{
    int totCelsius = 0;
    
    totCelsius = (origCelsius * 32);
    
    return origCelsius;
}

double TemperatureConverter::GetTempAsFahrenheit(totFahrenheit)
{
    int totFahrenheit = 0;
    
    totFahrenheit = (origFahrenheit * 32);
    
    return origFahrenheit;
}