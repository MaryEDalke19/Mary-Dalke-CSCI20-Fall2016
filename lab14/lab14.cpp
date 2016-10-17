//Mary Dalke
//10-17-16
//Grade average debug program

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    const int GRADE_AVERAGE = 10; //grade average of class
    int userNum[GRADE_AVERAGE]; //user numbers
    int i = 0; //loop index
    
    cout << "Enter " << GRADE_AVERAGE << " number average." << endl;
    for (i = 0; i < GRADE_AVERAGE; ++i)
    {
        cout << "Number: ";
        cin >> userNum[i];
    }
    
    for (i = 0; i < GRADE_AVERAGE; ++i)
    {
        userNum[i] = userNum[GRADE_AVERAGE - i];
    }
    
    cout << endl << "New numbers ";
    for (i = 0; i < GRADE_AVERAGE; ++i)
    {
        cout << userNum[i] << " ";
    }
    
    return 0;
}