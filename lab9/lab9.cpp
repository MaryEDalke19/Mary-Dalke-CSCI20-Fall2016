// Mary Dalke
// 9-28-16

#include <iostream>
using namespace std;

class TemperatureConverter 
{
    public:
    void kelvin_(int kelvinTemp);
    void fahrenheit_ (int fahrenheitTemp);
    void celsius_ (int celsiusTemp);
    double getTemps () const;
    
    private: 
    int allTemp;
    double classTemp;
};

// "TemperatureConverter::" means kelvin_ is a TemperatureConverter member function
void TemperatureConverter::kelvin_(int kelvinTemp) 
{
    kelvin_= kelvinTemp;
    return;
}

void TemperatureConverter::fahrenheit_(int fahrenheitTemp)
{
    fahrenheit_= fahrenheitTemp;
    return;
}

void TemperatureConverter::celsius_(int celsiusTemp)
{
    celsius_= celsiusTemp;
    return;
}

double TemperatureConverter::getTemps() const
{
    return classTemp / (allTemp / 3600.0);
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