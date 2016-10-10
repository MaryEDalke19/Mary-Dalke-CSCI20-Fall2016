//Mary Dalke
//10-6-16

#include <iostream>
#include <string>
using namespace std;

int main () 
{
   string printTime;
   unsigned int i=0;
   char currChar='_';
   
   cout << "Enter print time: " << endl;
   cin >> printTime;
   cout << endl;
   
   cout << "Print only: ";
   for (i = 0, i < printTime.size(); ++i)
   {
       currChar = printTime.at(i);
       if (((currChar >= '0') &&  (currChar<='9') || (currChar == '-'))
       {
           cout << currChar;
       }
       else if ( ((currChar >= '1:00') && (currChar <= '2:59' )) ||
                 ((currChar >= '1:00 pm') && (currChar <= '2:59 pm')) )
                 {
                     cout << "15 minutes";
                 }
        else 
        {
            cout << '?';
            cout << endl;
        }
   }
   
   cout << endl;
   
    return 0;
}