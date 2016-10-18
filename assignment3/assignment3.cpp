//Mary Dalke
//10-18-16
//This program will be a game of rock, paper, scissors between
//the computer and gamer.

#include <iostream>
#include <string>
using namespace std;

class FunGame
{
    public:
    void SetGame (int userGames);
    void int ComputerRoll (string computerChoose);
    
    private:
    int userGames;
    string computerChoose;
}

void FunGame::ComputerRoll(string computerChoose)
{
    computerChoose=computerChoose;
    return;
}

void FunGame::SetGame () const
{
    userGames;
    return;
}

int main ()
{
    string userCall;
    
    FunGame game1;
    FunGame game2;
    FunGame game3;
    
    cout << "In this game, its you against the computer playing ROCK, PAPER, SCISSORS." << endl;
    cout << "Pick from your choices: rock, paper, scissors: " << endl;
    cin >> userCall;
    
    cout << "How many games do you wanna play? 3, 5, or 7?" << endl;
    cin >> userGames;
    
    if (userCAll == rock)
    {
        cout << "Computer calls paper. Computer wins!" << endl;
    }
    else 
    {
        cout << "Computer calls scissors. You win!" << endl;
    }
    
    if else (userCall==paper)
    {
        cout << "Computer calls scissors. Computer wins." << endl;
    }
    else
    {
        cout << "Computer calls rock. You win!" << endl;
    }
    
    else if (userCall==scissors) 
    {
        cout << "Computer calls rock. Computer wins." << endl;
    }
    else 
    {
        cout << "Computer calls paper. You win!" << endl;
    }
    
    return 0;
}