 //Mary Dalke
//10-27-16
//Menu program with prices

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
   cout << "Choice 1: pizza ($5.00 plus $0.50 per toppings added). Choice 2: pasta ($6.00 plus $0.50 per toppings added). Choice 3: pane ($6.50). Choice 4: riso ($7.00)." << endl;
   cout << "Choice 5: soup ($4.00). Choice 6: salad ($4.00). Choice 7: pesce ($6.50). Choice 8: verdura ($7.00). Choice 9: carne ($6.50). Choice 10: antipasto ($6.00)." << endl;
   cin  >> menuMeal;
   
   switch (menuMeal)
   {
       case 1:
       cout << "You are having pizza for $5.00 plus $0.50 per toppings added." << endl;
       break;
       
       case 2:
       cout << "You are having pasta for $6.00 plus $0.50 per toppings added." << endl;
       break;
       
       case 3:
       cout << "You are having pane for $6.50." << endl;
       break;
       
       case 4:
       cout << "You are having riso for $7.00." << endl;
       break;
       
       case 5:
       cout << "You are having soup for $4.00." << endl;
       break;
       
       case 6:
       cout << "You are having salad for $4.00." << endl;
       break;
       
       case 7:
       cout << "You are having pesce for $6.50." << endl;
       break;
       
       case 8:
       cout << "You are having verdura for $7.00." << endl;
       break;
       
       case 9:
       cout << "You are having carne for $6.50." << endl;
       break;
       
       case 10:
       cout << "You are having antipasto for $6.00." << endl;
       break;
   }
   
    return 0;
}