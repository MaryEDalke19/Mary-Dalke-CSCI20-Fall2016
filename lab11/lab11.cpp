//Mary Dalke
//10-4-16

#include <iostream>
#include <string>
using namespace std;

int main () 
{
    const int MARRIED_PEOPLE_ADJUSTED_GROSS_INCOME=0<=72,501;
    
    const int SINGLE_PEOPLE_ADJUSTED_GROSS_INCOME=0<=87,851;
    
    string userName;
    string userStatus;
    int grossIncome;
    int taxWithheld;
    
    cout << "Enter name:";
    cin >> userName;
    cout << endl;
    
    cout << "Enter status (married or single)";
    cin >> userStatus;
    cout >> endl;
    
    cout << "Your wage";
    cin >> grossIncome;
    cout << endl;
    
    cout << "Your tax withheld";
    cin >> taxWithheld;
    cout << endl;
    
    if (userStatus==married)
    {
        grossIncome=MARRIED_PEOPLE_ADJUSTED_GROSS_INCOME;
        
    }
    else 
    {
        grossIncome=SINGLE_PEOPLE_ADJUSTED_GROSS_INCOME;
    }
    
    cout << "Your name is " << userName << endl;
    cout << "Your status is " << userStatus << endl;
    cout << "Your total tax owed is " << grossIncome << endl;
    
    return 0;
}