// Mary Dalke
// 9-28-16

#include <iostream>
#include <string>
using namespace std;

// Function converts miles to yards
double MilesYardsToYards (int origMiles, int origYards) 
{
    
    int totYards = 0; // Resulting yards
    
    totYards = (origMiles * 1760) + origYards;
    
    return origYards;
    
}

// Function converts yards to miles
double YardsMilesToMiles (int origYards, int origMiles) 
{
    int totMiles = 0;
    
    totMiles = (origYards * 0.000568182) + origMiles;
    
    return origMiles;
    
}

int main () 
{
int userMiles;
int userYards;
int totMiles = 1;
int totYards = 1760;
    
    cout << "How many miles did you go?" << endl;
    cin >> userMiles;
    cout << endl;
    
    cout << "How many yards did you go?" << endl;
    cin >> userYards;
    cout << endl;
    
    cout << "From miles to yards, your answer is: " << (userMiles * totYards) << endl;
    cout << "From yards to miles, your answer is: " << (userYards * totMiles) << endl;
    
    return 0;
}