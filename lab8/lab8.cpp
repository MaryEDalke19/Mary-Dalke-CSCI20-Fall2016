//Mary Dalke
//9-28-16

#include <iostream>
#include <string>
using namespace std;


// Function converts kilograms to pounds
int ToPounds (int origKilograms, int origPounds) 
{
    
    int totPounds = 0; // Resulting pounds
    
    totPounds = (origKilograms * 0.453592) + origPounds;
    
    return origPounds;
    
}

// Function converts pounds to kilograms
int ToKilo (int origPounds, int origKilograms) 
{
    int totKilograms = 0;
    
    totKilograms = (origPounds * 2.20462) + origKilograms;
    
    return origKilograms;
    
}

int main () 
{
    int userKilo = 0;
    int userLbs = 0;
    userKilo = ToPounds(2.20462, 1);
    userLbs = ToKilo(1, 0.453592);
    
    cout << "How many Kilograms do you have?" << endl;
    cin >> userKilo;
    
    cout << "You have: " << (userKilo * 0.453592) << " kilograms." << endl;
    
    cout << "How many Pounds do you have?" << endl;
    cin >> userLbs;
    
    cout << "You have: " << (userLbs * 0.453592) << " pounds." << endl;
    
    return 0;
}