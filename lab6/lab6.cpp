//Mary Dalke
//9-28-16

#include <iostream>
#include <string>
using namespace std;

int main () 
{
    string userFirst;
    string userLast;
    string userYear;
    
    cout << "What is your first name?" << endl;
    cin >> userFirst;
    
    cout << "What is your last name?" << endl;
    cin >> userLast;
    
    cout << "What year is it?" << endl;
    cin >> userYear;
    
    cout << "*" << endl;
    cout << "**" << endl;
    cout << "*** Copyright " << userFirst << " " << userLast << " " << userYear << endl;
    cout << "****" << endl;
    cout << "*****" << endl;
    
    return 0;
}