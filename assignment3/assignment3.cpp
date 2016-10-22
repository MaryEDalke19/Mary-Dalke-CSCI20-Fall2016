//Mary Dalke
//10-20-16
//This program will be a game of rock, paper, scissors between two gamers.

#include <iostream>
#include <string>
using namespace std;

class FunGame
{
  public:
  void SetGame (int userGamer);
  void int SetGamer1 (int userPlayer1);
  void int SetGamer2 (int userPlayer2);
  
  private:
  int userGamer;
  int userPlayer1;
  int userPlayer2;
}

void FunGame::SetGamer1 (int userPlayer1)
{
    SetGamer1=userPlayer1;
    return;
}

void FunGame::SetGamer2 (int userPlayer2)
{
    SetGamer2=userPlayer2;
    return;
}

void FunGame::SetGame () const
{
    userGames;
    return;
}

int main ()
{
    
    string player1Choose;
    string player2Choose;
    
    cout << "In this game, it is player vs. player in a game of ROCK, PAPER, SCISSORS. I hope you have fun playing against your friend." << endl;
    
    cout << "Player One choose: " << endl;
    cin >> player1Choose;
    
    cout << "Player Two choose: " << endl;
    cin >> player2Choose;
    
    if (player1Choose==rock && player2Choose==paper)
    {
        cout << "Player One wins!" << endl;
    }
    
    else if (player1Choose==paper && player2Choose==rock)
    {
        cout << "Player Two Wins!" << endl;
    }
    
    else if (player1Choose==rock && player2Choose==scissors)
    {
        cout << "Player One wins!" << endl;
    }
    
    else if (player1Choose==scissors && player2Choose==rock)
    {
        cout << "Player Two wins!" << endl;
    }
    
    else if (player1Choose==rock && player2Choose==scissors)
    {
        cout << "Player One wins!" << endl;
    }
    
    else if (player1Choose==scissors && player2Choose==paper)
    {
        cout << "Player One wins!" << endl;
    }
    
    else if (player1Choose==paper && player2Choose==scissors)
    {
        cout << "Player Two wins!" << endl;
    }
    
    else if (player1Choose==rock && player2Choose==rock)
    {
        cout << "It's a draw. Play again."
    }
    
    else if (player1Choose==paper && player2Choose==paper)
    {
        cout << "It's a draw. Play again."
    }
    
    else if (player1Choose==scissors && player2Choose==scissors)
    {
        cout << "It's a draw. Play again."
    }
    return 0;
}