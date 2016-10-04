#include <iostream>
#include <string>
using namespace std;

int main () {
int coinAmount =0;
int numQuarters = 0;
int numDimes = 0;
int numNickels = 0;
int numPennies = 0;

cout << " Enter your amount of coins: ";
cin >> coinAmount;
cout << endl;

cout << " You have put in " << coinAmount << " coins. " << endl;

int chargeFee = coinAmount - coinAmount/10.9;

cout << " Your total amount is: " << coinAmount*.01 << " With the charge fee, you will have: " << chargeFee*.01 << endl;

numQuarters = coinAmount/25;
coinAmount = coinAmount%25;

numDimes = coinAmount/10;
coinAmount = coinAmount%10;

numNickels = coinAmount/05;
coinAmount = coinAmount%05;

numPennies = coinAmount/01;
coinAmount = coinAmount%01;

cout << " You have " << numQuarters << " quarters, " << numDimes << " dimes, " << numNickels << " nickels, and " << numPennies << " pennies left. " << endl;
   
   return 0;
}