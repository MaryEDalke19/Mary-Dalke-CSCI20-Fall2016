//Mary Dalke
//9-28-16

#include <iostream>
#include <string>
using namespace std;

int main () 
{
    string userName;
    string userYear;
    
    cout << "What is your first and last name?" << endl;
    cin >> userName;
    cout << endl;
    
    cout << "What year is it?" << endl;
    cin >> userYear;
    cout << endl;
    
    cout << "*" << endl;
    cout << "**" << endl;
    cout << "*** Copyright" << userName << userYear << endl;
    cout << "****" << endl;
    cout << "*****" << endl;
    
    return 0;
}