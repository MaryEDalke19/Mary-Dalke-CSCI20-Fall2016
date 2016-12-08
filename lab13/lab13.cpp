//Mary Dalke
//10-6-16

#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int zeroMinutes = 0;
    int manyMinutes = 0;
    int zero_Minutes = 0;
    int many_Minutes = 0;
    float oneHour = 1;
    float twoHours = 2;
    char timeSpace = ':';
    string startHour;
    string endHour;
    int startMinutes = 0;
    int endMinutes = 0;
    int start_Minutes = 0;
    int end_Minutes = 0;
    
    zeroMinutes = 0;
    manyMinutes = 60;
    zero_Minutes = 0;
    many_Minutes = 60;
    startMinutes = 0;
    endMinutes = 60;
    start_Minutes = 0;
    end_Minutes = 60;
    
    
    for (zeroMinutes = 0; zeroMinutes < manyMinutes; zeroMinutes++)
    {
        if (zeroMinutes < 10)
        {
            cout << oneHour << timeSpace << "0" << zeroMinutes << "pm" << endl;
        }
        else
        {
            cout << oneHour << timeSpace << zeroMinutes << "pm" << endl;
        }
    }
    
    for (zero_Minutes = 0; zero_Minutes < many_Minutes; zero_Minutes++)
    {
        if (zero_Minutes < 10)
        {
            cout << twoHours << timeSpace << "0" << zero_Minutes << "pm" << endl;
        }
        else
        {
            cout << twoHours << timeSpace << zero_Minutes << "pm" << endl;
        }
    }
    
    cout << "Enter your starting hour:" << endl;
    cin >> startHour;
    cout << "Enter your ending hour:" << endl;
    cin >> endHour;
    
    startMinutes = 0;
    while (startMinutes < endMinutes)
    {
        if (startMinutes < 10)
        {
            cout << startHour << timeSpace << "0" << startMinutes << "pm" << endl;
        }
        else
        {
            cout << startHour << timeSpace << startMinutes << "pm" << endl;
        }
        
     startMinutes = startMinutes + 15;   
    }
    
    start_Minutes = 0;
    while (start_Minutes < end_Minutes)
    {
        if (start_Minutes < 10)
        {
            cout << endHour << timeSpace << "0" << start_Minutes << "pm" << endl;
        }
        else
        {
            cout << endHour << timeSpace << start_Minutes << "pm" << endl;
        }
    start_Minutes = start_Minutes + 15;
    }

    
    return 0;
}