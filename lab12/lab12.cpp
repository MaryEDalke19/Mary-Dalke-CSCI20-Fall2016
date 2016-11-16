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
        cout << "What kind of movies do you like? action or romance." << endl;
        cin >> userAnswer1;
        }
        if (userAnswer1 == "action")
        {
        cout << "I think we'll be good friends." << endl;
        }
        else if (userAnswer1 == "romance")
        {
        cout << "Sorry, we don't have a lot in common." << endl;
        }
        else if (userAnswer == "Yes")
        {
        cout << "Do you like to run? yes or no." << endl;
        cin >> userAnswer2;
        }
        if (userAnswer2 == "yes")
        {
        cout << "Sorry, we don't have a lot in common." << endl;
        }
        else if (userAnswer2 == "no")
        {
        cout << "I think we'll be good friends." << endl;
        }
        
        case 1:
        if (userAnswer == "turtles")
        {
        cout << "Do you like work? YES or NO." << endl;
        cin >> userAnswer3;
        }
        if (userAnswer3 == "YES")
        {
        cout << "Sorry, we don't have a lot in common." << endl;
        }
        else if (userAnswer3 == "NO")
        {
        cout << "I think we'll be good friends." << endl;
        }
        
        break;
    }
    
}