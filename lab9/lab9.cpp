// Mary Dalke
// 9-28-16

#include <iostream>
using namespace std;

class TemperatureConverter 
{
    public:
    void kelvin_ (int kelvinTemp);
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
    kelvin_Temp = kelvinTemp;
    return;
}

void TemperatureConverter::fahrenheit_(int fahrenheitTemp)
{
    fahrenheit_Temp = fahrenheitTemp;
    return;
}

void TemperatureConverter::celsius_(int celsiusTemp)
{
    celsius_Temp = celsiusTemp;
    return;
}

double TemperatureConverter::getTemps() const
{
    return classTemp / (allTemp / 3600.0);
}


int main () 
{
    TemperatureConverter temp1;
    TemperatureConverter temp2;
    TemperatureConverter temp3;
    
    temp1.kelvin_();
    temp2.fahrenheit_();
    temp3.celsius_();
    
    cout << "The Kelvin temperature is: " << temp1.kalvin_() << endl;
    cout << "The Fahrenheit temperature is: " << temp2.fahrenheit_() << endl;
    cout << "The Celsius temperature is: " << temp3.celsius_() << endl;
    
    return 0;
}