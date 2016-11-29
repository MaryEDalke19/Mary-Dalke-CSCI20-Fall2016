//Mary Dalke
//10-6-16

#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int newFriend = 0;
    string userAnswer;
    string userAnswer1;
    string userAnswer2;
    string userAnswer3;
    
    cout << "Are you my new friend? Do you like horses or turtles? Type in 0 for 'horses' and 1 for 'turtles'." << endl;
    cin >> newFriend;

    
    switch (newFriend)
    {
        case 0:
        cout << "Do you like going outside? Yes or No." << endl;
        cin >> userAnswer;
        if (userAnswer == "No")
        {
        cout << "What kind of movies do you like? Action or Romance." << endl;
        cin >> userAnswer1;
        }
        if (userAnswer1 == "Action")
        {
        cout << "I think we'll be good friends." << endl;
        }
        else if (userAnswer1 == "Romance")
        {
        cout << "Sorry, we don't have a lot in common." << endl;
        }
        else if (userAnswer == "Yes")
        {
        cout << "Do you like to run? Maybe or Not." << endl;
        cin >> userAnswer2;
        }
        if (userAnswer2 == "Maybe")
        {
        cout << "Sorry, we don't have a lot in common." << endl;
        }
        else if (userAnswer2 == "Not really")
        {
        cout << "I think we'll be good friends." << endl;
        }
        break;
        
        case 1:
        cout << "Do you like work? Sometimes or Always." << endl;
        cin >> userAnswer3;
        if (userAnswer3 == "Always")
        {
        cout << "Sorry, we don't have a lot in common." << endl;
        }
        else if (userAnswer3 == "Sometimes")
        {
        cout << "I think we'll be good friends." << endl;
        }
        
        break;
    }
    
}