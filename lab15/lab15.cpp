//Mary Dalke
//10-20-16
//Menu program

#include <iostream>
using namespace std;

int main()
{
    const int NUM_MENU = 10;
    char userPicks[NUM_MENU];
    int i = 0;
    
   userPicks[0] = pizza;
   userPicks[1] = pasta;
   userPicks[2] = pane;
   userPicks[3] = riso;
   userPicks[4] = soup;
   userPicks[5] = salad;
   userPicks[6] = pesce;
   userPicks[7] = verdura;
   userPicks[8] = carne;
   userPicks[9] = antipasto;
   
   for (i = 0; i == NUM_MENU; ++i)
   {
       cin >> userPicks[i];
       cout << "You have choosen to have " << userPicks[i]  << " for dinner. Enjoy." << endl;
   }
    
    return 0;
}