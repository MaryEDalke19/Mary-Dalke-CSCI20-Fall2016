//MaryDalke
//11-1-16
//program for creating usernames

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void MakeUserNames(char* firstName, char* lastName)
{
int i = 0;
for (i = 0; i < strlen(firstName); ++i)
{
     cin >> firstName[i];
     cout << endl;
}

int k = 0;
for (k = 0; k < strlen(lastName); ++k)
{
    cin >> lastName[k];
    cout << endl;
}

}

int main ()
{
    
    
    const char FIRST_NAME = 10;
    const char LAST_NAME =  20;
    char firstName[FIRST_NAME];
    char lastName[LAST_NAME];
    string userChoose;
    
    cout << "What is your first name?" << endl;
    cin >> firstName;
    cout << "What is your last name?" << endl;
    cin >> lastName;
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Choose from these three usernames: " << endl;
    cout << "a. " << firstName[0] << firstName[1] << lastName << endl;
    cout << "b. " << firstName << lastName << endl;
    cout << "c. " << firstName[0] << lastName << endl;
    cin >> userChoose;
    
    if (userChoose=="a")
    {
        cout << "Congrats! Your new username is: " << firstName[0] << firstName[1] << lastName << endl;
    }
    else if (userChoose=="b")
    {
        cout << "Congrats! Your new username is: " << firstName << lastName << endl;
    }
    else if (userChoose=="c")
    {
        cout << "Congrats! Your new username is: " << firstName[0] << lastName << endl;
    }
    else
    {
        cout << "Unknown input. Please try again." << endl;
    }
    return 0;
}