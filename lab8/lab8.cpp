//Mary Dalke
//9-28-16

#include <iostream>
#include <string>
using namespace std;


// Function converts kilograms to pounds
double ToPounds (int origKilograms, int origPounds) 
{
    
    int totPounds = 0; // Resulting pounds
    
    totPounds = (origKilograms * 0.453592) + origPounds;
    
    return origPounds;
    
}

// Function converts pounds to kilograms
double ToKilo (int origPounds, int origKilograms) 
{
    int totKilograms = 0;
    
    totKilograms = (origPounds * 2.20462) + origKilograms;
    
    return origKilograms;
    
}

int main () 
{
    int userKilo = 0;
    int userLbs = 0;
    int ToKilo = .453592;
    int ToPounds = 1;
    
    cout << "How many Kilograms do you have?" << endl;
    cin >> userKilo;
    
    cout << "You have: " << (userKilo * ToKilo) << " kilograms." << endl;
    
    cout << "How many Pounds do you have?" << endl;
    cin >> userLbs;
    
    cout << "You have: " << (userLbs * ToPounds) << " pounds." << endl;
    
    return 0;
}