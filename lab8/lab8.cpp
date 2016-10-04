//Mary Dalke
//9-28-16

#include <iostream>
#include <string>
using namespace std;


// Function converts kilograms to pounds
double KilogramsPoundsToPounds (int origKilograms, int origPounds) 
{
    
    int totPounds = 0; // Resulting pounds
    
    totPounds = (origKilograms * 0.453592) + origPounds;
    
    return origPounds;
    
}

// Function converts pounds to kilograms
double PoundsKilogramsToKilograms (int origPounds, int origKilograms) 
{
    int totKilograms = 0;
    
    totKilograms = (origPounds * 2.20462) + origKilograms;
    
    return origKilograms;
    
}

int main () 
{
string userKilo;
string userLbs;
    
    cout << "How many Kilograms do you have?" << endl;
    cin >> userKilo;
    cout << endl;
    
    cout << "How many pounds do you have?" << endl;
    cin >> userLbs;
    cout << endl;
    
    cout << "From kilograms to pounds, your answer is: " << userKilo * totPounds << endl;
    cout << "From pounds to kilograms, your answer is: " << userLbs * totKilograms << endl;
    
    return 0;
}