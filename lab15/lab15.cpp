//Mary Dalke
//10-20-16
//Menu program

#include <iostream>
using namespace std;

int main()
{
    int italianMenu[10];
    int menuMeal = 0;
   
    italianMenu[0] = 1;
    italianMenu[1] = 2;
    italianMenu[2] = 3;
    italianMenu[3] = 4;
    italianMenu[4] = 5;
    italianMenu[5] = 6;
    italianMenu[6] = 7;
    italianMenu[7] = 8;
    italianMenu[8] = 9;
    italianMenu[9] = 10;
    
   
   cout << "Enter what you want for dinner:" << endl;
   cout << "Choice 1: pizza. Choice 2: pasta. Choice 3: pane. Choice 4: riso. Choice 5: soup." << endl;
   cout << "Choice 6: salad. Choice 7: pesce. Choice 8: verdura. Choice 9: carne. Choice 10: antipasto." << endl;
   cin  >> menuMeal;
   
   switch (menuMeal)
   {
       case 1:
       cout << "You are having pizza." << endl;
       break;
       
       case 2:
       cout << "You are having pasta." << endl;
       break;
       
       case 3:
       cout << "You are having pane." << endl;
       break;
       
       case 4:
       cout << "You are having riso." << endl;
       break;
       
       case 5:
       cout << "You are having soup." << endl;
       break;
       
       case 6:
       cout << "You are having salad." << endl;
       break;
       
       case 7:
       cout << "You are having pesce." << endl;
       break;
       
       case 8:
       cout << "You are having verdura." << endl;
       break;
       
       case 9:
       cout << "You are having carne." << endl;
       break;
       
       case 10:
       cout << "You are having antipasto." << endl;
       break;
   }
   
    return 0;
}