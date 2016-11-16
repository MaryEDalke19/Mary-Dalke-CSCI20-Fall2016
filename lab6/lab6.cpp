//Mary Dalke
//9-28-16

#include <iostream>
#include <string>
using namespace std;

void PrintArt () 
{
    char artShape = '*';
    
    string userFirst;
    string userLast;
    string userYear;
    
    cout << "What is your first name?" << endl;
    cin >> userFirst;
    
    cout << "What is your last name?" << endl;
    cin >> userLast;
    
    cout << "What year is it?" << endl;
    cin >> userYear;
    
    cout << "  " << artShape << endl;
    cout << " " << artShape << " " << artShape << endl;
    cout << "" << artShape << "   " << artShape << " Copyright " << userFirst << " " << userLast << " " << userYear << endl;
    cout << " " << artShape << " " << artShape << endl;
    cout << "  " << artShape << endl;
}

int main () 
{
    PrintArt();
    
    return 0;
}