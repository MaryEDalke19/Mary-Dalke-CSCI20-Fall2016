#include <iostream>
#include <string>
using namespace std;

int main () {
    int userAge = 0;
    double secondNum = 0;
    string firstName;
    string wordAdj;
    string wordAnimal;
    string wordFood;
    
    cout << "Enter your age: ";
    cin >> userAge;
    
    cout << "Enter your second number: ";
    cin >> secondNum;
    
    cout << "Enter your name: ";
    cin >> firstName;
    
    cout << "Enter your adjective: ";
    cin >> wordAdj;
    
    cout << "Enter your favorite animal: ";
    cin >> wordAnimal;
    
    cout << "Enter your favorite food: ";
    cin >> wordFood;
    
    cout << firstName << " is " << userAge << " years old. " <<endl;
    cout << firstName << " can't wait to be " << secondNum << " so " << firstName << " can get a(n) " << wordAdj << " " << wordAnimal << " . " << endl;
    cout << firstName << " wants to give the " << wordAnimal << " " << wordFood << " . " << endl;
    
    
    return 0;
}