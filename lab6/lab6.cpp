//Mary Dalke
//9-28-16

#include <iostream>
#include <string>
using namespace std;

void PrintArt () 
{
    char artShape = '*';
    
    string userFirst = "Mary";
    string userLast = "Dalke";
    string userYear = "2016";
    
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