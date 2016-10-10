//Mary Dalke
//10-6-16

#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int randNum0_3=0;
    string userText;
    
    cout << "I'm looking for a new friend. Will it be you?" << endl;
    cout << "You can type \"quit\" when you want to leave." << endl;
    cout <">";
    
    getline(cin, userText);
    
    while (userText!="quit")
    {
        randNum0_3=userText.length()%4;
        switch (randNum0_3)
        {
            case 0:
            cout << endl << "Please explain further." << endl << endl;
            cout << ">";
            break;
            
            case 1:
            cout << endl << "Why do you say: \"" << userText << "\"?" << endl << endl;
            cout << ">";
            break;
            
            case 2:
            cout << endl << "I think that's not right." << endl << endl;
            cout << ">";
            break;
            
            case 3:
            cout << endl << "Anything else you wanna tell me?" << endl << endl;
            cout << ">";
            break;
            
            default:
            cout << endl << "Something happened that shouldn't. Please with for a second then try again." << endl << endl;
        }
        
    getline(cin, userText);
    
    }
    
    cout << endl << "Oh, you're leaving now? Okay, it was nice to meet you!" << endl << endl;
    cout << endl << "We should do this again sometime! Good bye! Have a great day!" << endl << endl;
    
    return 0;
}