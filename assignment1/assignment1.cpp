//Mary Dalke
//9-8-16


#include <iostream>
#include <string>
using namespace std;

int main () 
{
    string userName;
    int userHours = 0;
    int userWage = 0;
    
    cout << "What is your name?" << endl;
    cin >> userName;
    cout << endl;
    
    cout << "Enter your amount of hours: " << endl;
    cin >> userHours;
    cout << endl;
    
    cout << "Enter how much your making an hour: " << endl;
    cin >> userWage;
    cout << endl;
    
    int grossPay = userWage*userHours;
    int netPay = grossPay*0.17;
    
    cout << userName << "'s grosspay is: " << userWage*userHours << " and you're net pay is: " << grossPay*0.17 << " . " << endl;
    
    return 0;
}